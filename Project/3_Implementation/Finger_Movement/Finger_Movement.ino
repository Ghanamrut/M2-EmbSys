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
