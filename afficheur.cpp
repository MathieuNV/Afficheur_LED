#include "afficheur.h"
//#include "HardwareSerial.h"
#include "EEPROM.h"
#include "Arduino.h"
#include "font.h"


Afficheur::Afficheur(int identifiant)
{
    
    m_identifiant = identifiant;

//    m_serial = serial;
    
    for (int i; i<50; i++)
    {
        m_texte[i]=0x00;
    }
    
    for (int i; i<BUFF_MAX_SIZE; i++)
    {
        m_txBuff[i]=0x00;
    }
    
    m_txLen = 0;

   // m_inc   = EEPROM.read(0); //0x09;
   
    if(m_inc == 0)
    {
      m_inc = 0x09;
    }

    m_csum  = 0;
    
}


int Afficheur::cmd_dimmer(int luminosite)
{
  int i = 0;

  m_txBuff[i++] = 0x00;   //msb nb data
  m_txBuff[i++] = 0x01;   //lsb nb data
  m_txBuff[i++] = m_identifiant;
  m_txBuff[i++] = m_inc++;
  EEPROM.write(0, m_inc);
  m_txBuff[i++] = 'v';    //Identifiant du dimmer
  
  if (luminosite > 0x08)
  {
      return -EAINVALID;
  }
  
  m_txBuff[i++] = luminosite;
  
  m_txLen = i;
  
  envoiCmd();
  
  return 0;
}


int Afficheur::cmd_reset()
{
    int i = 0;
    
    m_txBuff[i++] = 0x00;   //msb nb data
    m_txBuff[i++] = 0x01;   //lsb nb data
    m_txBuff[i++] = m_identifiant;
    m_txBuff[i++] = m_inc++;
    EEPROM.write(0, m_inc);
    m_txBuff[i++] = 'r';    //Identifiant du test

    m_txLen = i;
    
    envoiCmd();
    
    return 0;
}


int Afficheur::cmd_sendText( int posX, int posY, int width, int policeSize, String text)
{
    int i = 0;
    int nbOfBytes = 0;
    
    m_txBuff[0]=0x00;     // msb nb data
    m_txBuff[1]=0x01;     // lsb nb data TODO: count after
    
    m_txBuff[2]=m_identifiant;
    m_txBuff[3]=m_inc++;
    EEPROM.write(0, m_inc);
    m_txBuff[4]='F';      // 'F' Visualisation data, first packet

   // Message display parameters (4 bytes)
    m_txBuff[5] = 0x00;
    m_txBuff[6] = 0xA4;   // Next Page Offset
    m_txBuff[7] = 0x04;   // Duration (*0.5s)
    m_txBuff[8] = 'I';    //'I' Immediate display

    // Area parameters (8 bytes)
    i=9;
    m_txBuff[i]   = 0x00;
    m_txBuff[i+1] = 0x24;   // Nb of bytes until next zone (36)
    m_txBuff[i+2] = posX;
    m_txBuff[i+3] = posY;
    m_txBuff[i+4] = policeSize;
    m_txBuff[i+5] = width;
    m_txBuff[i+6] = 0;
    m_txBuff[i+7] = width;

    nbOfBytes = 0;

    for(int j = 0; j < text.length(); j++)
    {
      char letter = text.charAt(j);
      for(int k = 0; k < 5; k++)
      {
        m_txBuff[i+8+nbOfBytes] = Font5x7[(letter-' ')*5+k];
        nbOfBytes++;
      }
    }
      
    // Set back count numbers
    m_txBuff[i+1] = 8 + nbOfBytes;
    m_txBuff[i+7] = nbOfBytes;

    m_txBuff[i+8+width]   = 0x00;//0x4c;
    m_txBuff[i+8+width+1] = 0x00;//0x10;
    m_txBuff[i+8+width+2] = 0x00;
    m_txBuff[i+8+width+3] = 0x00;
    m_txBuff[i+8+width+4] = 0x00;
    m_txBuff[i+8+width+5] = 0x00;
    m_txBuff[i+8+width+6] = 0x00;
    

    // Set back count numbers
    m_txBuff[1] = 4 + 8 + 7 + nbOfBytes;
    m_txBuff[6] = 4 + 8 + 7 + nbOfBytes - 3;

    // Now finish
    m_txLen = 9 + 8 + 7 + nbOfBytes;
    
    envoiCmd();
    
    return 0;
}


int Afficheur::cmd_modeTest()
{
    int i = 0;
    
    m_txBuff[i++]=0x00;   //msb nb data
    m_txBuff[i++]=0x01;   //lsb nb data
    m_txBuff[i++]=m_identifiant;
    m_txBuff[i++]=m_inc++;
    EEPROM.write(0, m_inc);
    m_txBuff[i++]='t';    //Identifiant du test
    m_txBuff[i++]='1';      // 1: display test
    m_txBuff[i++]='9';      // 9: cycle all tests
    
    m_txLen=i;
    
    envoiCmd();
    
    return 0;
}


int Afficheur::cmd_requestStatus()
{
    int i = 0;
    
    m_txBuff[i++]=0x00;   //msb nb data
    m_txBuff[i++]=0x01;   //lsb nb data
    m_txBuff[i++]=m_identifiant;
    m_txBuff[i++]=m_inc++;
    EEPROM.write(0, m_inc);
    m_txBuff[i++]='s';    //requestStatus
    
    m_txLen=i;
    
    envoiCmd();
    
    return 0;
}


int Afficheur::envoiCmd()
{
    calcul_csum();
    
    //Serial.print("TX:");
    
    Serial.write(STX);
    /*Serial.print(STX, HEX);
    Serial.print(" ");*/
    
    Serial.write(ENQ);
    /*Serial.print(ENQ, HEX);
    Serial.print(" ");*/
    
    //Serial->write(m_txBuff);
    
    for (int i=0; i<m_txLen; i++)
    {
        Serial.write(m_txBuff[i]);
        
        if(m_txBuff[i] == 0x02)
        {
          Serial.write(0x04);
        }
        
        /*Serial.print(m_txBuff[i]& 0xff, HEX);
        Serial.print(" ");*/
    }
    
    Serial.write(STX);
    /*Serial.print(STX, HEX);
    Serial.print(" ");*/
    
    Serial.write(ETX);
    /*Serial.print(ETX, HEX);
    Serial.print(" ");*/
        
    Serial.write(m_csum);
    /*Serial.print(m_csum & 0xff, HEX);
    Serial.print(" ");*/
        
    Serial.write((uint8_t)ZERO);
    /*Serial.print((uint8_t)ZERO, HEX);
    Serial.print(" ");
    
    Serial.println(" ");*/

    
    for(int i=0; i<m_txLen; i++)
    {
        m_txBuff[i]=0x00;
    }
    
    m_txLen = 0;
    
    delay(2);  // milisecondes laissees

  //  delay(1000);
/*
    if(Serial.available()) 
    {
      Serial.print("RX: (len =");
      Serial.print(Serial.available());
      Serial.print(") ");

      while(Serial.available())
      { 
        Serial.print(Serial.read(), HEX);
        Serial.print(" ");
      }
      Serial.println();
      Serial.println();
    }
*/
    
    return 0;
    
}



char Afficheur::calcul_csum()
{
  
    m_csum = ENQ; // ajout direct de l'ENQ
    m_csum ^ m_txBuff[0];
    
    for(int i=1; i< m_txLen; i++)
    {
       m_csum = m_csum ^ m_txBuff[i]; 
    }
    
    m_csum = m_csum ^ ETX;
    
    //sSerial.println(m_csum & 0xff, HEX);
    return m_csum;
    
}
