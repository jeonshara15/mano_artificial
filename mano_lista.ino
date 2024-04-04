#include "HCPCA9685.h"
 
/* I2C slave address for the device/module. For the HCMODU0097 the default I2C address
 
is 0x40 */
 
#define  I2CAdd 0x40
 
/* Create an instance of the library */
 
HCPCA9685 HCPCA9685(I2CAdd);
 
void setup()
 
{
 
  /* Initialise the library and set it to 'servo mode' */
 
HCPCA9685.Init(SERVO_MODE);
 
  /* Wake the device up */
 
HCPCA9685.Sleep(false);
 
}

void dobraDedo(int dedo){

 for(int Pos = 270; Pos >= 50; Pos--)
  {
    HCPCA9685.Servo(dedo, Pos);
    delay(10);
  }
  

}

void esticaDedo(int dedo){
  for(int Pos = 50; Pos < 270; Pos++)
  {
   
    HCPCA9685.Servo(dedo, Pos);
    delay(10);
  }
}

void loop(){
  dobraDedo(9);

  esticaDedo(9);


}
 

 