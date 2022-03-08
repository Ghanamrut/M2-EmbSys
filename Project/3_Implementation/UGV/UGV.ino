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
