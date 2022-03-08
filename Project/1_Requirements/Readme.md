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

**6) Applications**

**7) Modifications According To Application**

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

2.  UGV simulation:-
![Screenshot (1141)](https://user-images.githubusercontent.com/98812321/157239055-c3db479e-e0d9-49cf-894d-e71ea4b930f5.png)


1.  Arm simulation:-

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

1.  **Reduced Task Time: -** The required time for a simple pick and place task
    or a weed plugging task or any other simple task that the system is used for
    is very less compared to a human being involved in the same.

2.  **Cost Effective: -** The embedded system design is very cost effective as
    microcontrollers demand increases and cost decreases day by day giving
    further advantage over high cost and complex machinery.

3.  **Greater Precision: -** A robotic arm gives higher precision than a human
    arm in various tasks such as minute incisions for surgeries, bomb defusal,
    in firecracker industry, etc where the slightest error of a human hand can
    pose a greater risk.

4.  **Adaptability: -** The system can be fitted with the necessary sensors and
    actuators and can be used for various task specific applications just by
    making small changes.

5.  **User Friendly: -** Every attempt of making an embedded system is always
    towards creating a automatic more user friendly tool.

-   **Weakness: -**

1.  **Limitations: -** The System has its limitations when it comes to handling
    a certain amount of weight for carrying an object and in certain cases power
    autonomy issues might be faced but these can be solved through making
    application specific system.

2.  **Supervision Required: -** In certain situations like medical surgeries
    there is always a certain amount of risk and therefore robotic arm systems
    cannot be left fully on their own and need supervision.

3.  **Movement Restriction: -** The system when made with certain limitations
    such as non-inclusion of certain actuators or sensors can deprive it of
    certain movements for example the actual degree of freedom of a human arm is
    difficult to achieve without using certain rotary actuators.

-   **Threat: -**

1.  **Competition to Human Labor: -** As technology advances the human labor
    need reduces and leads to unemployment in various sectors of certain
    industries which is in a way inevitable.

2.  **Human Robot Work Safety: -** The risks of hardware failure or wiring
    issues, etc could lead to different scenarios that pose certain safety
    concerns.

-   **Opportunities: -**

1.  **Boom In Automation Industry: -** The advancement in technology promoting
    more use of automation and robotics is a golden opportunity for such
    projects.

2.  **Increased Availability: -** The demand in robotic equipment and embedded
    system hardware and software required has risen highly leading to their
    availability in the market at low costs.

# 5.  **5 Ws And 1 H: -**

1.  **Why: -** The Project is made to achieve the embedded system design for a
    robotic arm mounted on a UGV used for various functions and applications.

2.  **What: -** The Project utilizes Microcontrollers, various types of analog
    and digital sensors such as Joystick sensor and Ultrasonic sensor to actuate
    different motors which facilitate the movement of the UGV as well as the
    robotic arm.

3.  **Who: -** The Project is aimed for application in sectors such as Medical,
    Military, Industrial, Agriculture and Transport.

4.  **When: -** The Project shall be completed in 4 weeks’ time.

5.  **Where: -** The Project shall be made on Simulide software and visual
    studio code.

6.  **How: -** The Project shall be completed step by step capturing the
    requirements, sketching out the block diagrams and flowchart, deciding the
    components and code design, building the circuit, utilize the code for the
    circuit and upon completion of these steps finally the project shall achieve
    a successful simulation of an embedded system design for a robotic arm
    mounted on a UGV.

# **6. Applications**: -

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

# 7.  **Modifications According to Application: -**

1.  Moisture Sensor: - Can be added to below UGV to detect soil moisture if the
    project is to be applied for agricultural purposes.

2.  Sanitizer Spray: - Can be added if project is to be applied in hospitals,
    offices for sanitization processes.

3.  Accelerometers and Gyroscope: - Can be added when the arm is needed for
    higher accuracy purposes such as medical surgery then wrist will require all
    around movement exactly replicating human wrist.
