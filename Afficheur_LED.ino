#include "afficheur.h"
//#include <SoftwareSerial.h>

#include <NTPClient.h>
#include <ESP8266WiFi.h>
#include <WiFiUdp.h>
#include <ArduinoOTA.h>

#include <TimeLib.h>

const char* ssid = "iPhone MNA";
const char* password = "motdepasse";

WiFiUDP ntpUDP;

// You can specify the time server pool and the offset (in seconds, can be
// changed later with setTimeOffset() ). Additionaly you can specify the
// update interval (in milliseconds, can be changed using setUpdateInterval() ).
NTPClient timeClient(ntpUDP, "fr.pool.ntp.org", 3600, 60000);
//NTPClient timeClient(ntpUDP);



//SoftwareSerial serialDisp(2, 3);  //RX, TX
Afficheur aff(0x01);

String jour[7] = {"Lundi", "Mardi", "Mercredi", "Jeudi", "Vendredi", "Samedi", "Dimanche"};
String mois[12] = {"Janvier", "Fevrier", "Mars", "Avril", "Mai", "Juin", "Juillet", "Aout", "Septembre", "Octobre", "Novembre", "Decembre"};
  
void setup()
{
    
  Serial.begin(9600);
  
  WiFi.begin(ssid, password);


  while ( WiFi.status() != WL_CONNECTED )
  {
    delay ( 500 );
    Serial.print ( "." );
  }

  ArduinoOTA.begin();
  

 // serialDisp.listen();

  delay(500);
  aff.cmd_dimmer(0x01);

  
  timeClient.begin();
  
  timeClient.update();
  setTime(timeClient.getEpochTime());
}


void loop()
{
  ArduinoOTA.handle();

  String toto = String(hour()) + ':'+ String(minute()) +':'+ String(second());
  aff.cmd_sendText( 0, 0, 108, 7, toto);//timeClient.getFormattedTime());
  delay(1000);
  
  toto =  jour[weekday()-2] + ' ' + String(day()) + ' ' +  mois[month()-1];
  aff.cmd_sendText( 0, 7, 108, 7, toto);//timeClient.getFormattedTime());
  delay(1000);
 
}

