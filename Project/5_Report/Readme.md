# Project - Embedded System For Robotic Arm And UGV

Prepared By: - Ghanamrut.V.Marathe

Version: - 1.0

# **Contents:-**

**1) Abstract**

**2)** [**Requirements**](#_Toc96252514)

**A)** [**High Level Requirements**](#_Toc96252515)

**B)**  [**Low Level Requirements**](#_Toc96252516)

**3)** [**Components Details**](#_Toc96252509)

**A) UGV Simulation**
**B) Arm Simulation**

**4) S.W.O.T Analysis**

**5) 5 Ws 1H**

**6) Structural Design**

**Block Diagram**

**A)UGV**

**B)Robotic Arm**

**7) Behavioral Design**

**Flowchart**

**A) UGV**

**B) Robotic Arm**

**8) Implementation**

**9) Test Plan and Output**

**10) Applications**

**11) Modifications According To Application**

# 

# 

# 1.  **Abstract**: -

Automation and Robotics sector is an advanced and the fastest growing sector in
the industry. Basic products made in robotics would be manipulators, UAVs
(Drones, Quadcopters), UGVs, Medical imaging devices, surgical tools, etc.

Now, there is a vast market of applications for UGVs of Payloads, macro space
movement use, guiding, military uses, etc. And also for end effectors with
robotic arm designs that replicate certain movements of a human hand.

A simple integration of an Unmanned Ground Vehicle (UGV) and a five finger
independent Robotic Arm shall be made using embedded systems circuit design
using various microprocessor (Arduino Uno)and sensors (Ultrasonic,
Potentiometer, Joystick) to facilitate wheel and finger, wrist movement.

# 2.  **Requirements: -**

# **A) High Level Requirements: -**

| ID   | Description                                                                                                                                                                     |
|------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| HR01 | The Joystick sensor Values read by Arduino shall be taken by DC motor and move according to the direction of joystick movement.                                                 |
| HR02 | Servo Motor shall follow the potentiometer and start the movement whether up or down depending on the potentiometer in case of Wrist                                            |
| HR03 | The Servo Motor should do a full 90 degree movement so the wrist can completely move.                                                                                           |
| HR04 | The Finger movement will be captured by potentiometer and then accordingly the servo motors of each finger shall be able to move for the specific setting of the potentiometer. |
| HR05 | The Ultrasonic Sensor shall measure distance between UGV front part and object as the UGV is set in motion.                                                                     |

# **B) Low Level Requirements: -**

| ID   | Description                                                                                                                                                                                                                                                                                                                                                   |
|------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| LH01 | When joystick is not active DC motor shall not start. A. For forward motion (when Joystick moves upward) DC motor 1 anti-clockwise and motor 2 clockwise vice versa for backward motion. B. For moving right (when Joystick moves to the right) both motors move in clockwise direction and anticlockwise for moving left (when Joystick moves to the left).  |
| LH02 | A. For vertical upward movement when potentiometer is at max voltage input.(5V) B. For resting/horizontal positon when potentiometer is at medium voltage input.(2.5V) C. To make the servo return to default position which is vertically downward w.r.t wrist when potentiometer is at 0 voltage input.                                                     |
| LH03 | W.R.T finger movement: -Map potentiometer value with correct range for servo motor and use constrain to keep it in required range (0-180 degree).Keeping a delay to wait till servo motor reaches desired position.                                                                                                                                           |
| LH04 | The LCD Display shall show the distance between object and UGV front part as measured by Ultrasonic Sensor                                                                                                                                                                                                                                                    |

# 3.  **Component Details: -**

1.  UGV simulation:-

![Screenshot (1141)](https://user-images.githubusercontent.com/98812321/157239055-c3db479e-e0d9-49cf-894d-e71ea4b930f5.png)


2.  Arm simulation:-

![Screenshot (1140)](https://user-images.githubusercontent.com/98812321/157239147-4fc48031-c8a3-4537-93d7-0ce8bca85709.png)

1.  Microcontroller: -

    Arduino Uno is a microcontroller board based on the ATmega328P. It has 14
    digital input/output pins (of which 6 can be used as PWM outputs), 6 analog
    inputs, a 16 MHz ceramic resonator (CSTCE16M0V53-R0), a USB connection, a
    power jack, an ICSP header and a reset button. It contains everything needed
    to support the microcontroller; simply connect it to a computer with a USB
    cable or power it with an AC-to-DC adapter or battery to get started.

2.  Joystick Sensor(KY023): -

    X and Y position of the joystick, are output as analog voltage on the output
    pins. X and Y position of the joystick are output as analog voltage on the
    output pins.Here it will be used to sense which movement of wheel the user
    wants in case of UGV thereby actuating the dc motor accordingly

3.  Potentiometer as a Position Sensor:-

    A potentiometer is a three-terminal resistor with a sliding or rotating
    contact that forms an adjustable voltage divider. If only two terminals are
    used, one end and the wiper, it acts as a variable resistor or rheostat.
    Here it will be used as a position sensor as its voltage input shall decide
    the wrist movement as well as independent finger movement, accordingly
    actuating respective servo motors.

4.  Servo Motor:-

    A servomotor (or servo motor) is a rotary actuator or linear actuator that
    allows for precise control of angular or linear position, velocity and
    acceleration. Here it is used to move the wrist and independent finger
    movements.

5.  DC Motor:-

    A DC motor is a type of electric machine that converts electrical energy
    into mechanical energy and is used to provide rotary actuation for various
    purposes. Here it is used to move the wheels of the UGV.

6.  Ultrasonic Sensor(HC-SR04):-

    An ultrasonic sensor is an instrument that measures the distance to an
    object using ultrasonic sound waves. An ultrasonic sensor uses a transducer
    to send and receive ultrasonic pulses that relay back information about an
    object's proximity. Here it is used to sense obstacle to alert user w.r.t
    the UGV movement.

# 4. S.W.O.T Analysis: -

**![Screenshot (1037)](https://user-images.githubusercontent.com/98812321/155835256-7b936db2-d088-49a0-963b-0f28cf3f5b0a.png)**

-   **Strength: -**

1.  **Reduced Task Time
