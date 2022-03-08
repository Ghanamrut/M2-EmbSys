|**S.No.**|**High Level Test Plan**|**Low Level Test Plan**|
| :- | :-: | :-: |

|Input |Output|
| :-: | :-: |

||||
| :- | :-: | :-: |
|1|**DC Motor 1 and 2 should move according to the movement of the Joystick sensor**||

|Joystick at Centre(No Input)|No motion in DC motor 1 and 2|
| :- | :- |
|Joystick Moves Up|DC motor 1 clockwise and DC motor 2 anti-clockwise hence UGV moves forward|
|Joystick Moves Down|DC motor 1 anti-clockwise and DC motor 2 clockwise hence UGV moves backward|
|Joystick Moves to the Right |DC motor 1 and 2 both move clockwise hence UGV moves to the right |
|Joystick Moves to the Right|DC motor 1 and 2 both move anti- clockwise hence UGV moves to the left|
|When Joystick returns to the center position|DC motors in motion should get reset (Stop)|

||||
| :-: | :- | :- |
|2|<p>**Ultrasonic Sensor** </p><p>**Displays distance between UGV and nearest object**</p>||

|Potentiometer value less than 20 and not equal to zero|Distance to be displayed in centimeters and display message “Warning : Obstacle”|
| :- | :- |
|Potentiometer value more than 20 |Distance to be displayed in centimeters and display message “Path Clear”|
|No input from potentiometer|Distance displayed 0 cm and no message displayed|

||||
| :-: | :- | :- |
|3|**Servo motor should move according to user requirement for wrist and for each finger**||

|Potentiometer is at max voltage input |Vertically upward movement of wrist or fingers|
| :- | :- |
|Potentiometer is at min voltage input |Vertically downward movement of wrist or fingers|
|No input from potentiometer |Vertically downward position (default position)of wrist or fingers|
|Potentiometer at any voltage between min and max|Corresponding angle movement achieved by servo|

||||
| :-: | :- | :- |






|Symbols Used|Amount|Components|
| :-: | :-: | :-: |
|U1|1|Arduino Uno|
|M1,M2|2|DC Motor|
|U2|1|L293 Quadruple Half- H Driver|
|JSS|1|<p>`  `Joystick (KY023) Sensor</p><p></p>|
|US|1|Ultrasonic(HC-SR04) Sensor|
|DISP|1|Hd44780 LCD Display|
|R|1|1K|
|P|1|<p>Potentiometer</p><p>(10 k ohm)</p>|





|Symbols Used|Amount|Components|
| :- | :- | :- |
|U1,U2|2|Arduino Uno|
|P1,P2,P3,P4,P5,P6|6|Potentiometer|
|Servo1, Servo2, Servo3, Servo4, Servo5,Servo6|6|Servo Motor|

