void zeroYaw() {
  Serial.begin(115200);
  delay(100);
  // Sets data rate to 115200 bps
  Serial.write(0XA5);
  delay(10);
  Serial.write(0X54);
  delay(100);
  // pitch correction roll angle
  Serial.write(0XA5);
  delay(10);
  Serial.write(0X55);
  delay(100);
  // zero degree heading
  Serial.write(0XA5);
  delay(10);
  Serial.write(0X52);
  delay(100);
  // automatic mode
}

int wrapValue(int value, int minValue, int maxValue) {
  int range = maxValue - minValue + 1;
  if (value < minValue) {
    value += range * ((minValue - value) / range + 1);
  }
  return minValue + (value - minValue) % range;
}

bool getIMU() {
  while (Serial.available()) {
    rxBuf[rxCnt] = Serial.read();
    if (rxCnt == 0 && rxBuf[0] != 0xAA) return;
    rxCnt++;
    if (rxCnt == 8) {  // package is complete
      rxCnt = 0;
      if (rxBuf[0] == 0xAA && rxBuf[7] == 0x55) {  // data package is correct
        pvYaw = (int16_t)(rxBuf[1] << 8 | rxBuf[2]) / 100.f;
        // pvPitch = (int16_t)(rxBuf[3] << 8 | rxBuf[4]) / 100.f;
        // pvRoll = (int16_t)(rxBuf[5] << 8 | rxBuf[6]) / 100.f;
        pvYaw = wrapValue(pvYaw + compass_offset, -179, 180);
        return true;
      }
    }
  }
  return false;
}

float getDistance() {
  return min(mapf(analogRead(ULTRA_PIN), 0, 1023, 0, 500), 40);
}

void motor(int speed) {
  if (speed > 0) {
    digitalWrite(INB, LOW);
  } else {
    digitalWrite(INB, HIGH);
  }
  analogWrite(ENB, map(abs(speed), 0, 100, 0, 1023));
}

void ultra_servo(int degree, char mode_steer) {
  int middle_degree = 0;
  if (mode_steer == 'F') {
    middle_degree = 80;
  } else if (mode_steer == 'R') {
    middle_degree = 180;
  } else if (mode_steer == 'L' || mode_steer == 'U') {
    middle_degree = 1 + 0;
  } else {
    beep();
  }
  servo2.write((max(min(middle_degree + degree, 180), 0)) / 2);
}

void steering_servo(int degree) {
  servo1.write((90 + max(min(degree, 45), -45)) / 2);
}

void motor_and_steer(int degree) {
  degree = max(min(degree, 45), -45);
  steering_servo(degree);
  motor(map(abs(degree), 0, 45, 35, 40));
}

void beep() {
  digitalWrite(BUZZER, HIGH);
  delay(100);
  digitalWrite(BUZZER, LOW);
}

void line_detection() {
  int blue_value = analogRead(BLUE_SEN);
  if (TURN == 'U') {
    int red_value = analogRead(RED_SEN);
    if (blue_value < 600 || red_value < 600) {
      int lowest_red_sen = red_value;
      long timer_line = millis();
      while (millis() - timer_line < 100) {
        int red_value = analogRead(RED_SEN);
        if (red_value < lowest_red_sen) {
          lowest_red_sen = red_value;
        }
      }
      if (lowest_red_sen > 600) {
        // Red
        TURN = 'R';
        Blocks_TURN = 'R';
        compass_offset += 90;
        // beep();
      } else {
        // Blue
        TURN = 'L';
        Blocks_TURN = 'L';
        compass_offset -= 90;
        // beep();
        // delay(100);
        // beep();
        // delay(100);
        // beep();
      }
      halt_detect_line_timer = millis();
    }
  } else {
    if (millis() - halt_detect_line_timer > 2000) {
      if (blue_value < 600) {
        if (TURN == 'L') {
          Blocks_TURN = 'L';
          compass_offset -= 90;
        } else {
          Blocks_TURN = 'R';
          compass_offset += 90;
        }
        halt_detect_line_timer = millis();
      }
    }
  }
}

void check_leds() {
  while (true) {
    Serial.print("Blue: ");
    Serial.print(analogRead(BLUE_SEN));
    Serial.print("   Red: ");
    Serial.println(analogRead(RED_SEN));
    line_detection();
  }
}

float calculate_avoidance() {
  int blocks = pixy.ccc.getBlocks();

  found_block = false; //TODO: I wrote a bug and it works.

  if (blocks) {
    int signature = -1;       // Signature of the object you want to detect
    int targetHeight = 10;    // Height of the object in centimeters
    float focalLength = 2.3;  // Focal length of the camera in centimeters
    float cameraFOV = 80.0;   // Field of view of the camera in degrees

    int largestBlockIndex = -1;
    int largestBlockArea = 0;

    for (int i = 0; i < blocks; i++) {
      if (pixy.ccc.blocks[i].m_height > 1.15 * pixy.ccc.blocks[i].m_width) {
        int objectArea = pixy.ccc.blocks[i].m_width * pixy.ccc.blocks[i].m_height;
        found_block = true;
        if (objectArea > largestBlockArea) {
          largestBlockIndex = i;
          largestBlockArea = objectArea;
          signature = pixy.ccc.blocks[i].m_signature;
        }
      }
    }

    if (signature == -1) {
      return 0;
    }

    int objectHeight = pixy.ccc.blocks[largestBlockIndex].m_height;
    float distance = (targetHeight * focalLength * 100) / objectHeight;

    float blockCenterX = pixy.ccc.blocks[largestBlockIndex].m_x;
    float blockCenterY = pixy.ccc.blocks[largestBlockIndex].m_y;

    float deltaX = blockCenterX - pixy.frameWidth / 2;
    float deltaY = blockCenterY - pixy.frameHeight / 2;

    float detected_degree = deltaX * 40 / pixy.frameWidth;

    float blockPositionX = distance * sin(degreesToRadians(detected_degree));
    float blockPositionY = distance * cos(degreesToRadians(detected_degree)) - 17;

    if (signature == 1) {
      avoidance_degree = max(radiansToDegree(atan2(blockPositionX + 9, blockPositionY)), 0);
      Blocks_TURN = 'R';
    } else {
      avoidance_degree = min(radiansToDegree(atan2(blockPositionX - 9, blockPositionY)), 0);
      Blocks_TURN = 'L';
    }
    return avoidance_degree;
    // Serial.print("Detected degree: ");
    // Serial.print(detected_degree);
    // Serial.println(" degree ");
    // Serial.print("Position (X, Y): ");
    // Serial.print(blockPositionX);
    // Serial.print(", ");
    // Serial.print(blockPositionY);
    // Serial.print(" cm   Degree rotate: ");
    // Serial.println(avoidance_degree);
  } else {
    return 0;
  }
}

float degreesToRadians(double degrees) {
  return degrees * PI / 180.0;
}

float radiansToDegree(double raidans) {
  return raidans / PI * 180.0;
}