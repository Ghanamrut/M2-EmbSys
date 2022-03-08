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
