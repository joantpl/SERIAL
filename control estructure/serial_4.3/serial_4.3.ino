/*************************************************************************
**                                                                      **
**                                  Serial                              **
**       Joan torrescasana                             27/02/2017       **
*************************************************************************/

//****** Includes  *******************************************************


//****** Variables *******************************************************

int tempAigua = 95;
//****** Setup ***********************************************************

void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps  
  
  if ( tempAigua <90)    //  SI LA TEMPERATURA ES INFERIOR A 90 ESCRIURA :AIGUA ENCARA NO BULL
  {
    Serial.print("Aigua encara no bull!");   
  }
  else if (tempAigua >=90 && tempAigua <100)     //SI LA TEMPERATURA ES >O=90 I <100 ESCRIURA EN EL TERMINAL AIGUA A PUNT DE BULLIR, EL SIGNE &&(AND) SIGNIFICA QUE LA VARIABLE POT ESTAR ENTRE LES DUES DEFINICIONS DE VALORS. 
  {
    Serial.print ( "Aigua apunt de bullir ");
  }
  else if (tempAigua == 100)     // SI LA TEMPERATURA ES IGUAL A 100 L'AIGUA ESCRIU: AIGUA A 100 GRAUS.
  { 
    Serial.print(" aigua a 100 graus!! ");
  }
  else if (tempAigua>100)
   { 
    Serial.print("aigua bullint");  //QUAN LA TEMP ES MES GRAN DE 100 ESCRIU:AIGUA BULLINT
   }
  else
  {
  }
}
//****** loop      *******************************************************
void loop()
{     // we need this to be here even though its empty

}

 

