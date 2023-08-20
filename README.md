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

<br>

Designing a robot is not easy. We will need to plan ahead about what you will use in your robot.

For WRO Future Engineer, it is mandatory that the robot uses one driving motor and one steering 
actuator of any type, and it is highly reccommended that your robot also have **a camera.** 📸

While also,

The robot’s dimensions **must not exceed 300x200 mm and 300 mm in height.**
The weight of the robot **must not exceed 1.5 kilograms.** ⚖️

(according to the rules)

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

- **Custom-made PCB expansion board** (Made specifically for the WRO Competition)

<img src="https://scontent.fbkk12-3.fna.fbcdn.net/v/t1.15752-9/312543477_864323261402550_2361715707743165031_n.jpg?_nc_cat=102&ccb=1-7&_nc_sid=ae9488&_nc_eui2=AeGju0acivL3LPg1NlmJw5rpRxLs4MrNLuBHEuzgys0u4LFIHrDd4z6OHS7dHHK75xqp_KBudy6_cpprQu0Z7R7e&_nc_ohc=j5MAHyUpj9gAX-UmlOI&_nc_ht=scontent.fbkk12-3.fna&oh=03_AdQAZk8ulJzKZ_N_6Wscwp2P_Fpbmhr20Phe64shOJHqJQ&oe=639A841E"  width="400"/>
  
**Wire connections for our robot**

![](https://lh3.googleusercontent.com/fife/AAbDypBMpb49LbKQ5uKGLfBDmphj8Q8arFVbUlOLNF8VVuXZUzkWvl3eadt5nIXetApAGM7xuwYlJYdm-KfruJEWDW08ieDruFHPaADXrP7M5XFcIfTFgCtY1fjK248FAwB_7itTqeUqzz8pINb41MQSfPzSzkifoEEMkDSyi1I-xJGw0YoBDbfG9zFeddrwtirY0IhSuuieEyrTlboi465iIsCqC__VBJN0-RV1PZkTUowbddHRlyaFzzxbg7O-Jov3FQW7jEgIFs0O2N1yQPx4CO8iDaT0TOcZ1_F7_eemipeXO4S4E6m0oJfD1PPAM21phtAkt1eKt8yExGOCzG3ldnAfriJ87OFrO_T0MO6mjr4OHHut8QX6QlA9YFfd1lUWe9POO6wRtRw-sgNifQiTRhEBlmrgXWLpPbZ0hRhcZYgA7tPZLdf0NT4UTS3-fbQSNGOIUq_ymm8Gx5ijanCEv4of1LiZajwnGiM-FbypDGq1SEkXtfCRteScp8EkKMZRXxhc3aLF2WPfy5UFPwGRDMAdBydtPxS6vD59GdavwcT2wM0_KaMOVXi_bt4DuZG5uf1BWUjaZsJMuJi8ep2sVsNUydBfVH7GA_FGagEzsXjmVWXOPzN4mLbx8haLA8274SpNiXhLMwLUam78VUcSefPEwddz6qgcSfW9c38OUQM03DozOGG3lE8nlZVFuu34VbXgZ8JWC1oPFVYxpYdMX1uQuENEolRZLeBf9sLs4i6UjiRAc-Btg6yNIvgf6CE30h-MIxXZP_CzLSxrODLrGQ3JfhYhH6h9DbrDEqD1pzlYd6HwN8QLn2BRTaJ3SNkk-Tw5X4YlSjZ-BdXg5h5t8j5lQq5Bku3wTZZ7ko15zrIhn_KO2Khng5n6a3ZsXnzQ6rLfF4_KyWNc7id1gsK8KbAWzRpw2AFXCg7J0mUvOmT2wbMUgJLRstg56BeaUlR1xZEQj-dMW8avdAiY0MJnnNpAz7QgXOLF-1UgCnmjKFx5rBme2_4KOm02dMK3lPYj1iV_REC5tAvsLiW4PKRkK6pgRKA_UWmDZiGZTorhgJcVrHkbaeyVv7oI31QaOPY4ULHsYju2wQRvFyWVeWqs5aMI0TRtCV72LUWD1kFNwv89BkGQWG-RRzy5oaxuqUjjrEll-fXJ9713vTQudQbFeSJgInNSrL6URnIIbswHI6UHWtb6ngPBqpmc_I5vtKsSB0Nz8LublM7z5L1st0ipVBGiEdzOLmtNY2P5TjpzVuQp1BeVMTFz9hoh4Mw7k2N9WQ6MN5EnKXEihFJDayxoqXcQYlAfnT-nycc0X8_VMKgcp_BbtZDKjNSZLS-3P9kW6iJQZ-svLY-Kgk1fj6WakgY1gD_dJBEikCEsC6Xg3xRZ0m75TbM-XgiBCYJun125R1O8SiooYNDEDzBQkEclHLUtWslDrk6fyHvGTah7XUi6VBy-ZvxaCCGKSGZ5y7_hiDPAFMNbYElfjDyPHmzphBHIXzpD17WWDNppPShQ0lq32baZH7wJpz7RYXy8GUUJY3-pWqFe1nv2C6-V-6pPQYzPuNusvADoTesBf1jDZtpq0cXsnKuOVTBUcc7a3pai9Sk5pePf14ab34IXVvzUipNU9P8xd653gCYYeh9qnW9DJgX8KiSAKvAuFn17jcAXdeDG=w1920-h929)  


# **Part 2 : Programming**
 
## Setting up your Board and Arduino Software 🤖
<br>
⚠️ **Please Note that** ⚠️
> We are using **Maker nano RP2040** from Cytron Technologies which would need a custom board library

<br>

For more information: [Arduino-pico Github]

### **Required Programs**

- **[Arduino IDE 2.0.1]** - For Programming your Maker nano RP2040
- **[Pixymon V2]** - For displaying and configuring your Pixy

<br>

### **Required Libraries**

To be able to communicate with the sensors, many libraries need to be downloaded and included in this project. The libraries that will need to be downloaded will depend on what sensors you use. Most of these library are very crutial for completing the **Qualification rounds** and **Final rounds**.

All the libraries we use can be found using the **Library Manager** in **Arduino IDE.**

```
// Adafruit TCS34725 Color Sensor
#include <ColorSensorTCS34725.h>
...

// Ultrasonic Sensor
#include <NewPing.h>
...


// Compass
#include <Wire.h>
...

// Servo (Ultrasonic and Steering)
#include <Servo.h>
...

// Neopixel LEDs
#include <Adafruit_NeoPixel.h>
...

// Pixy Camera
// #define UART
#include <Pixy2UART.h>
...
```

## Setup() and Loop() 💻

Finally we got to the interesting part ✨
Please, download our Arduino program, and use it as a reference, so you can better understand our explainations.

It is worth mentioning that the fact that by using Maker Nano RP2040 as our microcontroller board which has 2 cores, we can use **2 setups and 2 loops!** It's the real **multi-tasking.**

To run our program in the first core, we must use ```setup()``` and ```loop()```.

And to run our program in the second core, we must use ```setup1()``` and ```loop1()```.

<br>

### Setup()

For the ```setup()``` and ```setup1()```, each of them is mostly the same in the Qualification Round program and the Final Round program. The difference takes place in the ```loop()``` and ```loop1()``` as they contain program that the robot will follow after pressing the **Start Button.**

```
void setup() {
  delay(1000);
  pinMode(26, INPUT);  // Set START button pin mode
  pinMode(28, INPUT);
  pinMode(29, INPUT);
  myservo1.attach(15, 600, 2400); // Atach Servos
  myservo2.attach(14, 600, 2400);
  ...

  while (analogRead(26) != 1023);  // Wait until START button is pressed
  initial_deg = bearing;  // Set initial heading of the robot
```

<br>

```
void setup1() {

  strip.begin(); // Neopixels Setup
  strip.show();
  strip.setBrightness(30);
  
  Wire1.setSDA(6);     // Set SDA pin for I2C communication
  Wire1.setSCL(7);     // Set SCL pin for I2C communication
  Wire1.begin();       // Begin Communication with CMPS-03 compass
  Serial.begin(57600);  // Begin Serial communication for debugging

  ...

  colorSensor.setWaitTime(0);         //Set Wait Time for Color sensor
  colorSensor.setIntegrationTime(5);  //Set Wait Time for Color sensor
  colorSensor.setGain(CS_GAIN_16);    //Set Wait Time for Color sensor
  if (!colorSensor.begin()) {         
    Serial.println("RGB ERROR");      //Begin communication with Color sensor
    while (true)
      ;
  }

  Serial1.setRX(17);                  // Set Rx pin for the UART communication
  Serial1.setTX(16);                  // Set Tx pin for the UART communication

  Serial.print("Starting...\n");
  // Serail1
  pixy.init();                        // Begin communication with the Pixy camera

  while (analogRead(26) != 1023) {
    ...                               // Wait until START button is pressed
  }
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

<br>

### 🛣️ Changing the Speed of the Driving Motor - Communicate with L298n to drive the motor at a specified speed with a specified acceleration.

Variables that affect the speed of the motor includes:

- The direction of the robot measured by **the compass sensor** [ If the robot is facing in the wrong way, reduce the speed ]
- The acceleration [ Time it takes to update the speed ]

<br>

### 🔴 Turn the robot when a line is detected - There are 2 lines on each corner of the field. This program detects those lines and adjusts the robot heading. 

Variables that affect the turning of the robot includes:
- The RGB values measured by the **Color Sensor**

<br>

**This program ends after turning at the corners of the field 12 times.**

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

<img src="https://lh3.googleusercontent.com/fife/AAbDypDAMWveU2Jn_tNErXpLFKThiTEFp8UaaCS-FhQRa7MCt7lQyf8qnEGoLuunH8VuOOTt_DcB_7IdZC9x-ejX6VenEZGjx1oavyO-VwAok2_8s6zkEdiX2gOoWBke9DC869z4hHrWAhpukleDhuvWBE5gWe_RNJm43PDpA9_DKEa5bG2nA8Q8idtJ__ueqJLU7ZBclE2RU5RHXlXnThLackJVZwJOrNsbBUO7VAufXMKLAFmB0YmXLoWJzuTjySnlEWRETLPZEXSwOGPz6xHHzOtCvPMtuf2gwOdjCcOdn2rK0f7wJ7A4TN1dNuwCSa3ChItLWd-QZd_v8x1_UYM9B8AvL94_9azILVtHN7C6bZvupc9Khel-0adNJ3sW1_39QNMg4mJNHP-dgiPJczYF1brgUaowiHqDQB2mBgn3yA7GYDOnVsOxfX6pD3fkCn2b6qdx9Cr85gn3_E0jucaILVlGVRGmst1WDFgj701Kg4A6vTDrvHvbfp3J_04I3I_JYnMp7xmz0wE8vGwbt9cRW4ExHOHRp08ZtXxozwujPew6Q1iQfe_0Q4uMgs0PbKqNmporWKZGD6M-ZZ7EQd-L_ocwnwU1Hso_-Pqli30z1UTXbHDrH4WjfCaG5L83G2uqKRJWZoGhSWW3NtqEG-PCvxkonjc4_m171XmkP0mK32UuwGKwR1Y2Vbs9tAQ2C0667fa11gxauxt-LBEi5Z71UZqp8aCPkLDERBDAj8DD3_TnWiPLtZwYWttuBgo-bshrLWALpAlbdsIXlJn_NzPmUUvvhHJX59H8xm9SnHt6WuEGhMLLvtjRYoRQCXVWmCoPaXk3QY3gdzPtatx_L5lpGexl4PEqGmRElTPuqzwVNMuzz1rUa73Y9oGUkGtDgNSnUWJ7EP23l13it03Jzfe9vw9A5G7mwGihuzCRibjPNAhGMUnQrCxmPKfJZp5oOpnl_B56fF05rhvC1TS9DQO70VvUNnIwhjz_GPRuFeKWkKg_yhrcxYoje1HzMQQmqtnVSz755WyvUmyvoiAZj9ERAK8AQyQgyiEWtQUwAMqnZxEWWETMevwtsw9fK5G9T_QcPwfek5A5CskUbBCKisFBYH8O_YJ_qu4KKVeN7S-ghYMJ89DcHuuSa7P_2Uahocgmrs-q_64d2_S-NrMKr44XSv4mbgHYnlrrVhqXRTJBtt3M2_J9QBref78vWLQs7ZIVJSgrMtDRfjr9lSJ44eJaozfFMBqrMW8_VYz9xjC_Syndv2md_faKXSoWIiDhZGhSJnGpJm_eDvf_qR4Yz8z2BkLnPHc7auBxQpLlwff4w8c6C_WknG90zx7YguItm975BsFHf8QOaShso8oVg2banqH9DHAcVFIBLi35ZJyoZSIx4-Y4q9eJfMPPuvGbkuPVkNuTfVhFlrgvDVtMEgIB-zrIFKpyWofqXcZQ7sAieEZfaQ-dmC0LDQox=w1920-h929"  width="600"/>

For calculating the degree in which the robot needs to turn to avoid the color blocks, the program can be simplified as follows:

- Calculating the distace between the camera and the object using the following formula:
> distance = size_obj * focal_length / size_obj_on_sensor

After calculating the distace, we need to calculate the position of the block using Trigonometry.

```
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
- The acceleration [ Time it takes to update the speed ]

<br>

### 🔴 Turn the robot when a line is detected - There are 2 lines on each corner of the field. This program detects those lines and adjusts the robot heading. 

Variables that affect the turning of the robot includes:
- The number of color blocks detected by **the camera** [ To ensure that the robot turns at the corner of the field AFTER successfully avoiding the objects on the field ]
- The RGB values measured by the **Color Sensor**

<br>

**This program ends after turning at the corners of the field 12 times.**

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

