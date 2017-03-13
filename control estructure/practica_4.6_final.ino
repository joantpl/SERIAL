/*************************************************************************
**                                                                      **
**                                  Serial                              **
**       Joan torrescasana                              5/03/2017       **
*************************************************************************/

//****** Includes  *******************************************************


//****** Variables *******************************************************
int comptar = 11;

//****** Setup ***********************************************************

void setup()                    // run once, when the sketch starts
{
  Serial.begin(9600);          //  Conecta amb el terminal 
  Serial.print("Ara comptare de 0 a ");   // escriu literalment el text que hi ha entre cometes
  Serial.println(comptar);               //escriu el numero que està definitla variable 
  for (int i=0; i <= comptar; i++)      //diu que mentres la variable i sigui inferior a la variable comptar(11) i incrementara, 
  {                                    
    Serial.print(i);    //cada cop que incrementa escriu el numero
    if ( i<11){
    Serial.print("-");//cada cop que incrementa escriu - , ja que el for indica que s'inicia un cicle que no para fins que es compleix la condició en aquest cas i<11
    }
    }
  } 
  

void loop()     // we need this to be here even though its empty
{
}


