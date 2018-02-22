#ifndef AFFICHEUR_H
#define AFFICHEUR_H

//#include "SoftwareSerial.h"
#include <Arduino.h>

#define STX           0x02
#define ETX           0x03
#define ENQ           0x05
#define ACK           0x06
#define ZERO          0x00

#define BUFF_MAX_SIZE 512

#define EAINVALID     1


class Afficheur 
{

  private:
  	  int m_identifiant;              // Numero de l'afficheur sur le reseau
      unsigned m_inc;                 // Facteur incremental des trames
      
      char m_texte[50];               // Buffer contenant les caracteres du texte a afficher
      
      char m_txBuff[BUFF_MAX_SIZE];   // Buffer d'envoi des donnees serielles a envoyer a l'afficheur
      int  m_txLen;                   // Longueur des datas dans ce buffer
      
      char m_csum;
 
      //SoftwareSerial * m_serial;  //SoftwareSerial

      
  public:
      
      Afficheur(int identifiant);
      
      
      int cmd_dimmer(int luminosite);   // Reglage de la luminosité du pavé de leds
      int cmd_modeTest();               // Mise en mode Test de l'afficheur
      int cmd_reset();                  // Reset et clear de l'affichage
      int cmd_requestStatus();
      int cmd_toto();
      int cmd_toto2();
      int cmd_toto3();
      int cmd_sendText( int posX, int posY, int width, int policeSize, String text);
      
      char calcul_csum(); //Calcul du checksum
      int envoiCmd();  //Transmission des donnees a l'afficheur
      
};

#endif
