#include "Mapf.h"
#include <Servo.h>
#include <PID_v2.h>

Servo servo1;
Servo servo2;

//  Compass Variables
float pvYaw, pvRoll, pvPitch;
uint8_t rxCnt = 0, rxBuf[8];

//  Motor B
int const ENB = 11;
int const INB = 13;

//  Buzzer
int const BUZZER = 4;

//  Servos
int const STEER_SRV = 9;
int const ULTRA_SRV = 8;

//  Ultrasonic Sensor
int const ULTRA_PIN = 2;

//  Light Sensors
int const RED_SEN = 0;
int const BLUE_SEN = 1;

//  Button
int const BUTTON = 3;

//  Field Config
char TURN = 'U';
int compass_offset = 0;
long halt_detect_line_timer;
int lines_detect_num = 0;

// Specify the links and initial tuning parameters
PID_v2 compassPID(0.4, 0.001, 0.04, PID::Direct);

void setup() {
  compassPID.Start(0, 0, 0);
  compassPID.SetOutputLimits(-180, 180);
  compassPID.SetSampleTime(10);
  pinMode(BUZZER, OUTPUT);
  pinMode(ENB, OUTPUT);
  pinMode(INB, OUTPUT);
  pinMode(STEER_SRV, OUTPUT);
  pinMode(ULTRA_SRV, OUTPUT);
  pinMode(ULTRA_PIN, INPUT);
  pinMode(RED_SEN, INPUT);
  pinMode(BLUE_SEN, INPUT);
  pinMode(BUTTON, INPUT);
  Serial.begin(115200);
  while (!Serial)
    ;
  servo1.attach(STEER_SRV, 500, 2500);
  servo2.attach(ULTRA_SRV, 500, 2500);
  steering_servo(0);
  ultra_servo(0, 'L');
  // check_leds();
  while (analogRead(BUTTON) > 500)
    ;
  while (analogRead(BUTTON) <= 500)
    ;
  zeroYaw();
  beep();
}

void loop() {
  // motor(60);
  long countdown_stop = millis();
  while (analogRead(BUTTON) > 500) {
    getIMU();
    line_detection();
    // steering_servo(-1 * compassPID.Run(pvYaw + ((getDistance() - 20) * 1) * ((float(TURN == 'R') - 0.5) * 2)));
    ultra_servo(pvYaw, TURN);
    int wall_distance = getDistance();
    motor_and_steer(-1 * compassPID.Run(pvYaw + ((wall_distance - 25) * 1) * ((float(TURN == 'R') - 0.5) * 2)));
    if (millis() - countdown_stop > 1200) {
      // Stops everything
      motor(0);
      while (true)
        ;
    }
    if (lines_detect_num < 12) {
      countdown_stop = millis();
    }
  }
  while (analogRead(BUTTON) <= 500)
    ;
  motor(0);
  while (analogRead(BUTTON) > 500)
    ;
  while (analogRead(BUTTON) <= 500)
    ;
}