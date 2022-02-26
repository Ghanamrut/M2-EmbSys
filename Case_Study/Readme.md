**Contents:-**

[Introduction](#_Toc96252506)

[Block Diagram](#_Toc96252507)

1\. Block Diagram of UGV

2\. Block Diagram of Robotic Arm

[Components Details](#_Toc96252509)

[Requirements](#_Toc96252514)

[High Level Requirements](#_Toc96252515)

[Low Level Requirements](#_Toc96252516)

Applications
The applications of UGVs and Bionic arms can be combined and integrated ahead to be converted into other applications such as:-
 1) Pick and place functions.
2) Fire extinguishing operations.
3) Bomb defusal.
4) Medical surgery for remote use.
5) Sanitization purposes. (UV light spreading or sanitizer spraying)
6) Agricultural functions (weed plucking, pesticide spraying, etc.).
7) Firecrackers industry.
8) Nuclear plant projects, thermal power plants.
9) Military Applications and operations.
10) Waste management.




Embedded System Design for Robotic arm and Unmanned Ground Vehicle

**Introduction**:-

Automation and Robotics sector is an advanced and the fastest growing sector in
the industry. Basic products made in robotics would be manipulators, UAVs
(Drones, Quadcopters), UGVs, Medical imaging devices, surgical tools, etc.

Now, there is a vast market of applications for UGVs of Payloads, macro space
movement use, guiding, military uses, etc. And also for end effectors with
robotic arm designs that replicate certain movements of a human hand.

A simple integration of an Unmanned Ground Vehicle (UGV) and a five finger
independent Robotic Arm can be made using embedded systems circuit design using
various microprocessor and sensors to facilitate wheel and finger, wrist
movement.

**Flowchart and Block Diagram:-**

![image](https://user-images.githubusercontent.com/98812321/154853087-aaf6e6a4-0187-45f9-8f3f-b23dbe8786b5.png)

**UGV:-**

![Screenshot (968)](https://user-images.githubusercontent.com/98812321/154853353-24416dbe-14ec-42d3-be40-dd24aea8ecb0.png)

Using one Arduino UNO for the operation of DC motors attached at the left and
right wheels for their up, down, left, right movement which are controlled by
four tilt sensors.

**Robotic Arm and Wrist:-**
![Screenshot (969)](https://user-images.githubusercontent.com/98812321/154853370-de3f4bb2-7d00-422d-a6f7-9f9b4b400228.png)

Using two Arduino UNO:-

1.  For the operation of the wrist (vertical up and down movement) using two
    tilt sensors and one servo motor.

2.  For the operation of five finger independent movement using five flex
    sensors for every angle movement of a finger and five servo motors variated
    by the use of the flex sensors.

    **Component Details:-**

    Requirement of UGV simulation:-
    

![image](https://user-images.githubusercontent.com/98812321/154853449-76fb8e8b-5120-4203-a4e3-f11c4be46ecf.png)

    Requirement of Arm simulation:-
    

 ![image](https://user-images.githubusercontent.com/98812321/154853460-157c76d4-13c1-4d83-9ac2-d10c0e8d8fe6.png)
1.  Microcontroller: -

    Arduino Uno is a microcontroller board based on the ATmega328P. It has 14
    digital input/output pins (of which 6 can be used as PWM outputs), 6 analog
    inputs, a 16 MHz ceramic resonator (CSTCE16M0V53-R0), a USB connection, a
    power jack, an ICSP header and a reset button. It contains everything needed
    to support the microcontroller; simply connect it to a computer with a USB
    cable or power it with a AC-to-DC adapter or battery to get started.

2.  Tilt Sensor: -

    A tilt sensor, or tilt switch, is a device used for measuring the tilt of an
    object in multiple axes with reference to an absolute level plane. Tilt
    sensors work by detecting changes in angle from a pre-set “zero” state. Here
    it will be used to sense which movement of wheel the user wants in case of
    UGV thereby actuating the dc motor accordingly and up or down movement of
    wrist thereby actuating the servo.

3.  Flex Sensor:-

    A flex sensor or bend sensor is a sensor that measures the amount of
    deflection or bending. Here it will be used to sense the deflection by
    bending each finger and subsequently driving the servo accordingly.

4.  Servo Motor:-

    Used to move the wrist and independent finger movements.

5.  DC Motor:-

    Used to move the wheels of the UGV.

    **Requirements:-**

**High Level Requirements: -**

| ID   | Description                                                                                                                                                                              |
|------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| HR01 | The Tilt Sensor Values read by Arduino should be taken by DC motor and move according to the tilt sensor which is/are activated.                                                         |
| HR02 | Servo Motor Should follow the tilt sensor and start the movement whether up or down depending on the tilt sensor in case of Wrist                                                        |
| HR03 | The Servo Motor should do a full 90 degree movement so the wrist can completely move.                                                                                                    |
| HR04 | The Finger movement will be captured by flex sensor angles and then accordingly the servo motors of each finger should be able to move for the specific angle of flex sensor deflection. |

**Low Level Requirements: -**

| ID   | Description                                                                                                                                                                                                                                                     |
|------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| LH01 | When no tilt sensor is active DC motor should not start. A. For forward motion DC motor 1 anti-clockwise and motor 2 clockwise vice versa for backward motion. B. For moving right both motors move in clockwise direction and anticlockwise for moving left.   |
| LH02 | A. For upward movement when tilt sensor 1 is ON. B. For downward movement when tilt sensor 2 is ON. C. To make the servo return to default position when both tilt sensor are OFF.                                                                              |
| LH03 | Map Flex sensor position with correct range for servo motor and use constrain to keep it in required range (0-180).Keeping a delay to wait till servo motor reaches desired position.                                                                           |

**Applications**:-

The applications of UGVs and Bionic arms can be combined and integrated ahead to
be converted into other applications such as:-

1) Pick and place functions.

2) Fire extinguishing operations.

3) Bomb defusal.

4) Medical surgery for remote use.

5) Sanitization purposes. (UV light spreading or sanitizer spraying)

6) Agricultural functions (weed plucking, pesticide spraying, etc.).

7) Firecrackers industry.

8) Nuclear plant projects, thermal power plants.

9) Military Applications and operations.

10) Waste management.

**Modifications According to Application:-**

1.  Ultrasonic Sensor: - Can be added over the UGV to ensure obstacle sensing.

2.  Moisture Sensor: - Can be added to below UGV to detect soil moisture if the
    project is to be applied for agricultural purposes.

3.  Sanitizer Spray: - Can be added if project is to be applied in hospitals,
    offices for sanitization processes.

4.  Accelerometers and Gyroscope: - Can be added when the arm is needed for
    higher accuracy purposes such as medical surgery then wrist will require all
    around movement exactly replicating human wrist.
