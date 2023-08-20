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
  return min(mapf(analogRead(ULTRA_PIN), 0, 1023, 0, 500), 50);
}

void motor(int speed) {
  if (speed > 0) {
    digitalWrite(INB, LOW);
  } else {
    digitalWrite(INB, HIGH);
  }
  analogWrite(ENB, map(abs(speed), 0, 100, 0, 225));
}

void motor_and_steer(int degree) {
  degree = max(min(degree, 45), -45);
  steering_servo(degree);
  motor(map(abs(degree), 0, 45, 80, 40));
}

void ultra_servo(int degree, char mode_steer) {
  int middle_degree = 0;
  if (mode_steer == 'F') {
    middle_degree = 90;
  } else if (mode_steer == 'R') {
    middle_degree = 180;
  } else if (mode_steer == 'L' || mode_steer == 'U') {
    middle_degree = 0;
  } else {
    // beep();
  }
  servo2.write((max(min(middle_degree + degree, 180), 0)) / 2);
}

void steering_servo(int degree) {
  servo1.write((90 + max(min(degree, 45), -45)) / 2);
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
        TURN = 'L';
        compass_offset += 90;
        // beep();
      } else {
        // Blue
        TURN = 'R';
        compass_offset -= 90;
        // beep();
        // delay(100);
        // beep();
        // delay(100);
        // beep();
      }
      lines_detect_num++;
      halt_detect_line_timer = millis();
    }
  } else {
    if (millis() - halt_detect_line_timer > 1000) {
      if (blue_value < 600) {
        if (TURN == 'R') {
          compass_offset -= 90;
        } else {
          compass_offset += 90;
        }
        halt_detect_line_timer = millis();
        lines_detect_num++;
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