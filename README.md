
# The Ultimate Documentation to WRO Future Engineer 2023
### [YBR-Tawan] ✨


![](https://lh3.googleusercontent.com/u/0/drive-viewer/AJc5JmS-gvzix8rqHiP9ptq7tHeZygsObiNOmIOgPZ77TDPFEsBTKvNW-LatH-ngLn_0nhACZ-FHElf1pMwIivX24kCyNMjfTw=w1920-h929)


<p align="center">
  <img src="https://ybrobot.club/image/YB%20Robot%20logo.png" width="200"/>
</p>
<p align="center">
<b>By Yothinburana School Robot Club</b>
</p>
<br><br><br><br>

## Our works (Youtube Links): 
Qualification round: https://youtu.be/Iuq2aRa-G8A

Final round: https://youtu.be/I5dHPB5TrM8


<br>


### This Github repository contains:

- Design process
- Program explaination

<br><br><br><br>

# **Part 1 : Robot Designs** ✨

<br>

### **The Robot** 💻

![robot](https://raw.githubusercontent.com/natapol2547/YBR-Tawan/main/Robot%20Picture/Robot%20Right.jpg?token=GHSAT0AAAAAACFBWY6HQCRKNS7HOLHY6WFWZHCE2QA)

<br>

Designing a robot is not easy. We will need to plan ahead about what you will use in the robot.

For WRO Future Engineer, it is mandatory that the robot uses one driving motor and one steering 
actuator of any type, and it is highly reccommended that our robot also have **a camera.** 📸

<br>

## **Choosing components of our robot:**

<br>

- **Driving Motor** ( Power Functions L-Motor )

![](https://www.lego.com/cdn/cs/set/assets/blt3289051a0e80fa54/88003.jpg?fit=bounds&format=jpg&quality=80&width=500&height=500&dpr=1)

A simple and fast motor made by **LEGO**. There are many alternatives when it comes to motors for a robot, but we chose this motor because of the ease of connecting this motor to the frame of our robot. We need to make sure that our robot does not break apart while running.

<br>

- **Ultrasonic Sensor** ( SEN0307 ) to measure the distance between the robot and the walls

<img src="https://dfimg.dfrobot.com/store/data/SEN0307/SEN0307.jpg?imageView2/1/w/564/h/376" width="400"/>

An incredible sensor that comes with **built-in temperature compensation**, which can greatly reduce measurement error caused by over high/low temperature. It adopts **analog voltage output**, and provides accurate distance measurement within **2-500cm** with 1cm resolution and **±1% accuracy.**

<br>

- **Servo** ( GEEKSERVO-270 ) one for **steering** our robot and another for rotating **the ultrasonic sensor**

<img src="https://thepihut.com/cdn/shop/products/geekservo-building-brick-180-rotation-block-servo-geekservo-104134-28717055836355_1500x.jpg?v=1646531299"  width="400"/>

- **Color Sensor** - We use **ZX-03** to detext the color of the field.

<img src="https://inex.co.th/home/wp-content/uploads/2020/07/zx_03_tcrt.jpg" width="400"/>

- **Compass or Gyro** - We use **GY-25** compass to determine the direction of our robot.

<img src="https://inwfile.com/s-o/q6moq1.jpg"/>

- **Camera** - We use **Pixy 2.1** for our robot because of its functionality along with the existing pre-made library by the developers

<img src="https://www.zagrosrobotics.com/images/pixy2_3.jpg"  width="400"/>

- **Microcontroller Board** - **Arduino UNO**, the brain for our robot

<img src="https://www.warf.com/imagesitem/original/6534_3736.jpg" width="400"/>

- **Shield L298P Motor Driver with GPIO**, enables arduino UNO to drive motors

<img src="https://static.cytron.io/image/cache/catalog/products/SHIELD-L298P-BUZZ/Shield-L298P-BUZZ%20(1)-800x800.jpg"  width="400"/>
  
**Wire connections for our robot**
```c
//  Motor B
int const ENB = 11;
int const INB = 13;

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

//  Pixy Camera
int const PIXY_SDA = 4
int const PIXY_SCL = 5

//  Gryo
// Connect to TX RX
```

![](https://lh3.googleusercontent.com/fife/AAbDypBMpb49LbKQ5uKGLfBDmphj8Q8arFVbUlOLNF8VVuXZUzkWvl3eadt5nIXetApAGM7xuwYlJYdm-KfruJEWDW08ieDruFHPaADXrP7M5XFcIfTFgCtY1fjK248FAwB_7itTqeUqzz8pINb41MQSfPzSzkifoEEMkDSyi1I-xJGw0YoBDbfG9zFeddrwtirY0IhSuuieEyrTlboi465iIsCqC__VBJN0-RV1PZkTUowbddHRlyaFzzxbg7O-Jov3FQW7jEgIFs0O2N1yQPx4CO8iDaT0TOcZ1_F7_eemipeXO4S4E6m0oJfD1PPAM21phtAkt1eKt8yExGOCzG3ldnAfriJ87OFrO_T0MO6mjr4OHHut8QX6QlA9YFfd1lUWe9POO6wRtRw-sgNifQiTRhEBlmrgXWLpPbZ0hRhcZYgA7tPZLdf0NT4UTS3-fbQSNGOIUq_ymm8Gx5ijanCEv4of1LiZajwnGiM-FbypDGq1SEkXtfCRteScp8EkKMZRXxhc3aLF2WPfy5UFPwGRDMAdBydtPxS6vD59GdavwcT2wM0_KaMOVXi_bt4DuZG5uf1BWUjaZsJMuJi8ep2sVsNUydBfVH7GA_FGagEzsXjmVWXOPzN4mLbx8haLA8274SpNiXhLMwLUam78VUcSefPEwddz6qgcSfW9c38OUQM03DozOGG3lE8nlZVFuu34VbXgZ8JWC1oPFVYxpYdMX1uQuENEolRZLeBf9sLs4i6UjiRAc-Btg6yNIvgf6CE30h-MIxXZP_CzLSxrODLrGQ3JfhYhH6h9DbrDEqD1pzlYd6HwN8QLn2BRTaJ3SNkk-Tw5X4YlSjZ-BdXg5h5t8j5lQq5Bku3wTZZ7ko15zrIhn_KO2Khng5n6a3ZsXnzQ6rLfF4_KyWNc7id1gsK8KbAWzRpw2AFXCg7J0mUvOmT2wbMUgJLRstg56BeaUlR1xZEQj-dMW8avdAiY0MJnnNpAz7QgXOLF-1UgCnmjKFx5rBme2_4KOm02dMK3lPYj1iV_REC5tAvsLiW4PKRkK6pgRKA_UWmDZiGZTorhgJcVrHkbaeyVv7oI31QaOPY4ULHsYju2wQRvFyWVeWqs5aMI0TRtCV72LUWD1kFNwv89BkGQWG-RRzy5oaxuqUjjrEll-fXJ9713vTQudQbFeSJgInNSrL6URnIIbswHI6UHWtb6ngPBqpmc_I5vtKsSB0Nz8LublM7z5L1st0ipVBGiEdzOLmtNY2P5TjpzVuQp1BeVMTFz9hoh4Mw7k2N9WQ6MN5EnKXEihFJDayxoqXcQYlAfnT-nycc0X8_VMKgcp_BbtZDKjNSZLS-3P9kW6iJQZ-svLY-Kgk1fj6WakgY1gD_dJBEikCEsC6Xg3xRZ0m75TbM-XgiBCYJun125R1O8SiooYNDEDzBQkEclHLUtWslDrk6fyHvGTah7XUi6VBy-ZvxaCCGKSGZ5y7_hiDPAFMNbYElfjDyPHmzphBHIXzpD17WWDNppPShQ0lq32baZH7wJpz7RYXy8GUUJY3-pWqFe1nv2C6-V-6pPQYzPuNusvADoTesBf1jDZtpq0cXsnKuOVTBUcc7a3pai9Sk5pePf14ab34IXVvzUipNU9P8xd653gCYYeh9qnW9DJgX8KiSAKvAuFn17jcAXdeDG=w1920-h929)  


# **Part 2 : Programming**
 
## Setting up your Board and Arduino Software 🤖
<br>
⚠️ **Please Note that** ⚠️
> We are using **Arduino UNO** fIf you are to replicate our project and use some other board, there maybe some fixes you need to implement in the code provided in this repo.

<br>

### **Required Programs**

- **[Arduino IDE 2.1.1]** - For Programming your Arduino UNO
- **[Pixymon V2]** - For displaying and configuring your Pixy

<br>

### **Required Libraries**

To be able to communicate with the sensors, many libraries need to be downloaded and included in this project. The libraries that will need to be downloaded will depend on what sensors you use. Most of these library are very crutial for completing the **Qualification rounds** and **Final rounds**.

All the libraries we use can be found using the **Library Manager** in **Arduino IDE.** except for the Pixy library which you need to download from [this website.](https://pixycam.com/downloads-pixy2/)

```
#include  "Mapf.h"

#include  <Servo.h>

#include  <PID_v2.h>

#include  <Pixy2I2C.h>
```

## Setup() 💻

Finally we got to the interesting part ✨
Please, download our Arduino program, and use it as a reference, so you can better understand our explainations.

<br>

### Setup()

For the ```setup()```, we have to include some libraries and initialize the sensors in order for the robot to work as intended.

```c
#include  "Mapf.h"
#include  <Servo.h>
#include  <PID_v2.h>
#include  <Pixy2I2C.h>

Pixy2I2C pixy;
PID_v2 compassPID(0.75, 0.001, 0.035, PID::Direct);

void  setup() {

	compassPID.Start(0, 0, 0);
	compassPID.SetOutputLimits(-180, 180);
	compassPID.SetSampleTime(10);

	// pinMode(BUZZER, OUTPUT);
	pinMode(ENB, OUTPUT);
	pinMode(INB, OUTPUT);
	pinMode(STEER_SRV, OUTPUT);
	pinMode(ULTRA_SRV, OUTPUT);
	pinMode(ULTRA_PIN, INPUT);
	pinMode(RED_SEN, INPUT);
	pinMode(BLUE_SEN, INPUT);
	pinMode(BUTTON, INPUT);

	Serial.begin(115200);
	pixy.init();
	while (!Serial);

	servo1.attach(STEER_SRV, 500, 2500);
	servo2.attach(ULTRA_SRV, 500, 2500);
	steering_servo(0);
	ultra_servo(0, 'L');

	// check_leds();
	while (analogRead(BUTTON) > 500);
	zeroYaw();
	while (analogRead(BUTTON) <= 500);
}
```


<br><br>

## Qualification Round Program explaination

The program can be simplified to the following parts:

<br>

### 🛞 Steering of the Robot - Turns the servo used for steering the robot to a specified degree.

Variables that affect the steering incudes:

- The input degree [ The direction we want to robot to steer to ]
- The direction of the robot measured by **the compass sensor** [ The direction that the robot is currently facing ]
- The distance between the wall and the robot measured by **the ultrasonic sensor** [ Preventing the robot from ramming into the wall ]

```c
void  loop() {

	long countdown_stop = millis();
	while (analogRead(BUTTON) > 500) {
	getIMU();
	line_detection();
	ultra_servo(pvYaw, TURN);
	int wall_distance = getDistance();
	motor_and_steer(-1 * compassPID.Run(pvYaw + ((wall_distance - 25) * 1) * ((float(TURN == 'R') - 0.5) * 2)));
	
	if (millis() - countdown_stop > 1200) {
		// Stops everything
		motor(0);
		while (true);
	}

	if (lines_detect_num < 12) {
		countdown_stop = millis();
		}
	}

	while (analogRead(BUTTON) <= 500);
	...
}
```

<br>

### 🛣️ The Speed of the Driving Motor

Variables that affect the speed of the motor includes:

- The direction of the robot measured by **the compass sensor** [ If the robot is facing in the wrong way, reduce the speed (give it more time to think) ]

```c
void  motor_and_steer(int degree) {
	degree = max(min(degree, 45), -45);
	steering_servo(degree);
	motor(map(abs(degree), 0, 45, 80, 40));
}
```

<br>

### 🔴 Turn the robot when a line is detected - There are 2 lines on each corner of the field. This program detects those lines and adjusts the robot heading. 

Variables that affect the turning of the robot includes:
- The Reflected light values measured by the **Light Sensors**

```c
void  line_detection() {
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
			} else {
				// Blue
				TURN = 'R';
				compass_offset -= 90;
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
```
<br>

**This program ends after turning at the corners of the field 12 times (3 rounds).**

<br><br>

## Final Round Program explaination

The program can be simplified to the following parts:

<br>

### 🛞 Steering of the Robot - Turns the servo used for steering the robot to a specified degree.

Variables that affect the steering incudes:

- The color and position of the color blocks detected by **the camera** [ Adjusts the heading of the robot to avoid hitting the detected objects on the field ]
- The input degree [ The direction we want to robot to steer to ]
- The direction of the robot measured by **the compass sensor** [ The direction that the robot is currently facing ]
- The distance between the wall and the robot measured by **the ultrasonic sensor** [ Preventing the robot from ramming into the wall ]


```c
void  loop() {
	long countdown_stop = millis();
	while (analogRead(BUTTON) > 500) {
		getIMU();
		ultra_servo(pvYaw, Blocks_TURN);
		line_detection();
		float distance_wall = getDistance();
		float steering_degree = -1 * compassPID.Run(pvYaw + ((distance_wall - 27)) * ((float(Blocks_TURN == 'R') - 0.5) * 2));
		if (millis() - pixy_timer > 50) {
			avoidance_degree = calculate_avoidance();
			pixy_timer = millis();
		}
		int final_degree = map(max(found_block, found_block_factor), 1, 0, mapf(min(max(distance_wall, 5), 40), 5, 40, steering_degree, avoidance_degree), steering_degree);
		if (millis() - halt_detect_line_timer > 2000 && lines_detect_num >= 12) {
			// Stops everything
			motor(0);
			while (true);
		}
	}

	motor_and_steer(final_degree);
	}
	motor(0);
	while (analogRead(BUTTON) <= 500);
	...
}
```
<br>

For calculating the degree in which the robot needs to turn to avoid the color blocks, the program can be simplified as follows:

- Calculating the distace between the camera and the object using the following formula:
> distance = size_obj * focal_length / size_obj_on_sensor

<br>
After calculating the distace, we need to calculate the position of the block using **Trigonometry**.

```c
pixy.ccc.getBlocks();
...

float(atan2(1000 * 2 / pixy.ccc.blocks[nearest_index].m_height * tan(float(map(pixy.ccc.blocks[nearest_index].m_x, 0, 316, -30, 30) + Wrap(bearingPID - initial_deg, -180, 179)) / 180 * PI) - 20, 1000 * 2 / pixy.ccc.blocks[nearest_index].m_height - 10)) * 180 / PI
```

> But what is atan2? 
> It is the 2-argument arctangent. By definition, degree (radians) = atan2(y,x)

> Find out more about atan2: [atan2 - Wikipedia]

As shown in the program above, we can calculate the steering degree using the **atan2 function**. Setting the **y position** by measuring the position of the color blocks in 3D space using **the Pixy camera** then **minus or plus 20 (cm)** to **offset the y position**, so that the robot won't hit the detected block. The same goes for the **x position**, and then we get the final steering degree! ✨

<br>

### 🛣️ Changing the Speed of the Driving Motor - Communicate with L298n to drive the motor at a specified speed with a specified acceleration.

Variables that affect the speed of the motor includes:

- The direction of the robot measured by **the compass sensor** [ If the robot is facing in the wrong way, reduce the speed ]

**Uses the same code previously mentioned**

<br>

### 🔴 Turn the robot when a line is detected - There are 2 lines on each corner of the field. This program detects those lines and adjusts the robot heading. 

Variables that affect the turning of the robot includes:
- The number of color blocks detected by **the camera** [ To ensure that the robot turns at the corner of the field AFTER successfully avoiding the objects on the field ]
- The Reflected light values measured by the **Light Sensors**


**Uses mostly the same code previously mentioned**

<br>



**This program ends after turning at the corners of the field 12 times (3 rounds).**

<br>


# **THE END**
For further questions please email robloxplay41@gmail.com

   [Yothinburana School Robot Club]: <https://ybrobot.club/>
   [Original Flipped Digital Lab]: <https://ofdl.tw/en/>
   [EV3FW-V1.21C-OFDL.bin]: <https://github.com/a10036gt/EV3-BatteryInfo-Block/releases/download/v1.2/EV3FW-V1.21C-OFDL.bin>
   [OFDL-EV3_Blocks-Collections]: <https://github.com/a10036gt/OFDL-EV3_Blocks-Collections/releases/tag/2020.09.12>
   [Pixy Blocks and Examples]: <https://github.com/charmedlabs/pixy/raw/master/releases/lego/lego_pixy-1.1.4.zip>
   [EV3 Education Lab]: <https://e498eb58-16e9-491c-8ce4-828510ab7c41.filesusr.com/archives/1f66bb_4708cf7510f64585bd447c26a4110fc5.zip?dn=LME-EV3_Full-setup_1.4.5_en-US_WIN32.zip>
   [Pixymon V2]: <https://github.com/charmedlabs/pixy/raw/master/releases/pixymon_windows/pixymon_windows-2.0.9.exe>
   [Wikipedia - Bezier Curve]: <https://en.wikipedia.org/wiki/B%C3%A9zier_curve>
   [Arduino-pico Github]: <https://github.com/earlephilhower/arduino-pico>
   [Arduino IDE 2.0.1]: <https://www.arduino.cc/en/software>
   [atan2 - Wikipedia]: <https://en.wikipedia.org/wiki/Atan2>

