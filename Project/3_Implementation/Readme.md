# Implementation: -
## The Project simulation is done in Simulide software using Arduino code written in Arduino Ide. There are three code files for each Arduino Uno 
## 1) For UGV Simulation 
## 2)For Wrist Movement Simulation 
## 3)Finger Movement Simulation.
## The UGV , Wrist Movement , and Finger movement folders respectively have the .ino, .hex, and .ino files for the codes inside them
## Circuit Diagrams And Code: -
### 1)	UGV
#### Circuit Diagram: -
 ![image](https://user-images.githubusercontent.com/98812321/157229075-587cff09-bda4-4432-950c-0c2f705bdb54.png)



#### Code:- 
#include <LiquidCrystal.h> 

#include <DC_Motor.h>

#define echoPin 2 // attach pin D2 Arduino to pin Echo of HC-SR04 

#define trigPin 3 //attach pin D3 Arduino to pin Trig of HC-SR04

LiquidCrystal lcd(0,1,4,7,8,10);

// defines variables

const int pwm = 13;

const int in_1 = 9;

const int in_2 = 11;

const int pwm1 = 12 ;

const int in_3 = 5 ;

const int in_4 = 6;

//For providing logic to L298 IC to choose the direction of the DC motor 


void setup()

{

  lcd.begin(16,2);
  
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an OUTPUT
  
  pinMode(echoPin, INPUT); // Sets the echoPin as an INPUT
  
  Serial.begin(9600);
  
  Serial.println("Ultrasonic Sensor HC-SR04 Test"); // print some text in Serial Monitor
  
  Serial.println("with Arduino UNO R3");
  
  pinMode(A0,INPUT);
  
  pinMode(A1,INPUT);
 
  pinMode(pwm,OUTPUT) ; 
  
  pinMode(pwm1,OUTPUT);//we have to set PWM pin as output
  
  pinMode(in_1,OUTPUT) ;   //Logic pins are also set as output
  
  pinMode(in_2,OUTPUT) ;
  
  pinMode(in_3,OUTPUT);   //Logic pins are also set as output
  
  pinMode(in_4,OUTPUT);
  
  
}

long duration; // variable for the duration of sound wave travel

int distance; // variable for the distance measurement

void loop()

{

   lcd.clear();
   
   lcd.setCursor(0, 0);
   
   lcd.print("Distance : ");
   
   lcd.print(distance);
   
   lcd.println("cm\n ");
   
   if(distance<=20 && distance>0)
   
     lcd.print("\n Warning : Obstacle");
     
   else if(distance>20 && distance>0)
   
     lcd.print("\n Path Clear");
     
   delay(1000);
   
   digitalWrite(trigPin, LOW);
   
   delayMicroseconds(2);
   
// Sets the trigPin HIGH (ACTIVE) for 10 microseconds

   digitalWrite(trigPin, HIGH);
   
   delayMicroseconds(10);
   
   digitalWrite(trigPin, LOW);
   
// Reads the echoPin, returns the sound wave travel time in microseconds

   duration = pulseIn(echoPin, HIGH);
   
// Calculating the distance

   distance = (duration/2)/29.1; //Calculate Distance of object 
   
   int x_value,y_value; //xvalue for up and down movement and y value for left and right movement of josytick 
   
   x_value = analogRead(A0);
   
  
   if((x_value>=490) && (x_value<=530)) //when joystick is in the centre
   
   {
   
//For no movement, in_1= High, in_2= High

//DC Motor 1

    digitalWrite(in_1,HIGH) ;
    
    digitalWrite(in_2,HIGH) ;
    
    digitalWrite(pwm,255) ;
    
    
//DC Motor 2

    digitalWrite(in_3,HIGH) ;
    
    digitalWrite(in_4,HIGH) ;
    
    digitalWrite(pwm1,255) ;
    
  }
  
  if(x_value>550) //when joystick is moved Up
  
   {
   
//For Clock wise motion , in_1 = High , in_2 = Low

//DC Motor 1

    digitalWrite(in_1,HIGH) ;
    
    digitalWrite(in_2,LOW) ;
    
    digitalWrite(pwm,255) ;    
    
//For Anti-clock wise motion , in_1 = High , in_2 = Low

//DC Motor 2

    digitalWrite(in_3,LOW) ;
    
    digitalWrite(in_4,HIGH) ;
    
    digitalWrite(pwm1,255) ;
    
  }
  
  
 if(x_value<470) //when joystick is moved down
 
  {
  
//For Clock wise motion , in_1 = High , in_2 = Low

//DC Motor 1

    digitalWrite(in_1,LOW) ;
    
    digitalWrite(in_2,HIGH) ;
    
    digitalWrite(pwm,255) ;
    
//For Anti-clock wise motion , in_1 = High , in_2 = Low

//DC Motor 2

    digitalWrite(in_3,HIGH) ;
    
    digitalWrite(in_4,LOW) ;
    
    digitalWrite(pwm1,255) ;
    
  }
  
/*setting pwm of the motor to 255
we can change the speed of rotaion
by chaning pwm input but we are only
using arduino so we are using higest
value to driver the motor  */

y_value = analogRead(A1);


 if(y_value<250) //when joystick is moved to the left
 
  {
  
//For Anti Clock-wise motion - IN_1 = LOW , IN_2 = HIGH

//DC Motor1

   digitalWrite(in_1,LOW) ;
   
   digitalWrite(in_2,HIGH) ;
   
   digitalWrite(pwm,255) ;
   
//DC Motor 2

   digitalWrite(in_3,LOW) ;
   
   digitalWrite(in_4,HIGH) ;
   
   digitalWrite(pwm1,255) ;
   
 }
 
 if(y_value>750) ////when joystick is moved to the right
 
  {
  
 //DC Motor 1
 
   digitalWrite(in_1,HIGH) ;
   
   digitalWrite(in_2,LOW) ;
   
   digitalWrite(pwm,255) ;
      
//DC Motor 2
   digitalWrite(in_3,HIGH) ;
   digitalWrite(in_4,LOW) ;
   digitalWrite(pwm1,255) ;
   
 }
 
}

















### 2)	 Wrist Movement: -
#### Circuit Diagram: -
 ![image](https://user-images.githubusercontent.com/98812321/157229184-3ac001f8-3851-4876-a180-313e4a85ced1.png)


#### Code : - 
#include <Servo.h>

Servo wrist;  

int potpin1 = 0;  

int val1; 

void setup()

{

  wrist.attach(3);  
  
}



void loop()

{

  //Mapping the servo motor motion according to the voltage value from potentiometer and achieve accurate angle movement
  
  val1 = analogRead(potpin1);      
  
  val1 = map(val1, 0, 1023, 0, 185 );
  
  wrist.write(val1);    
  
}

### 3)	Finger Movement: -
#### Circuit Diagram: -
 ![image](https://user-images.githubusercontent.com/98812321/157229224-9097c90d-46f5-4684-870f-fd6219915c04.png)


#### Code : - 
#include <Servo.h>

//Declaring Variables for servo motors, potentiometers and the value from the potentiometer

Servo index_finger;  

int potpin1 = 0;  

int val1;    

Servo middle_finger;  

int potpin2 = 1;  

int val2;    

Servo ring_finger;  

int potpin3 = 2;  

int val3;    

Servo little_finger;

int potpin4 = 3;  

int val4;    

Servo thumb;

int potpin5 = 4;  

int val5;

void setup()

{

  index_finger.attach(3);  
  
  middle_finger.attach(5);  
  
  ring_finger.attach(6);  
  
  little_finger.attach(9);  
  
  thumb.attach(10);  
  
}


void loop()

{

  //Mapping the servo motor motion according to the voltage value from potentiometer and achieve accurate angle movement
  
  val1 = analogRead(potpin1);      
  
  val1 = map(val1, 0, 1023, 0, 185 );
  
  index_finger.write(val1);    
  
  val2 = analogRead(potpin2);      
  
  val2 = map(val2, 0, 1023, 0, 185 );
  
  middle_finger.write(val2);   
  
  val3 = analogRead(potpin3);    
  
  val3 = map(val3, 0, 1023, 0, 185 );
  
  ring_finger.write(val3);        
  
  val4 = analogRead(potpin4);      
  
  val4 = map(val4, 0, 1023, 0, 185 );
  
  little_finger.write(val4);          
  
  val5 = analogRead(potpin5);  
  
  val5 = map(val5, 0, 1023, 0, 185 );
  
  thumb.write(val5);          
  

}

•	These Codes are loaded onto the respective three Arduinos by “Load Firmware” Option on Simulide and then the Simulations are run to derive needed output.



