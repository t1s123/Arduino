
#include "MeMCore.h"

MeDCMotor motor1(M1);

MeDCMotor motor2(M2);

uint8_t motorSpeed = 255;

void setup()  
{
}

void loop()
{
  motor1.run(-motorSpeed); 
  motor2.run(motorSpeed); 
  delay(2000);
  motor1.run(motorSpeed); 
  motor2.run(motorSpeed); 
  delay(1000);
  motor1.run(-motorSpeed); 
  motor2.run(-motorSpeed); 
  delay(1000);


}

