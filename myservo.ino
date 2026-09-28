#include <Servo.h>
Servo myservo;

void setup()
{
myservo.attach(6);
}
void loop()
{.....
myservo.write(45);
delay(500); 
myservo.write(135); 
delay(500);
}
