#include "afficheur.h"
#include <SoftwareSerial.h>



SoftwareSerial serialDisp(2, 3);  //RX, TX
Afficheur aff(0x01, &serialDisp);
  
void setup()
{
  Serial.begin(9600);
  serialDisp.begin(9600);
  serialDisp.listen();
  
  Serial.println("Demarrage du programme!");
}


void loop()
{
  /*
  delay(3000);
  aff.cmd_sendText( 5, 5, 32, 7);
  */
    
  delay(500);
  aff.cmd_dimmer(0x01);

  delay(1000);
  aff.cmd_sendText( 0, 0, 108, 7);
  /*
  delay(500);
  aff.cmd_toto();

  delay(1000);
  aff.cmd_toto2();
*/
//  delay(2000);
 // aff.cmd_toto3();

  delay(2000);
  aff.cmd_reset();
  /*
  
 //mode_test();
  aff.cmd_modeTest();
  aff.cmd_dimmer(0x01);
  
  delay(5000);

  aff.cmd_reset();
  */
  //aff.cmd_dimmer(0x01);
/*
  delay(1000);
  
  aff.cmd_dimmer(0x01);
  */
  delay(5000);
  Serial.println("++++++++++++++++++++++++++++++++++++++++++++++++++++");
  
}

