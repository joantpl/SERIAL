/*************************************************************************
**                                                                      **
**                                  Serial                              **
**       Joan torrescasana                              5/03/2017       **
*************************************************************************/

//****** Includes  *******************************************************


//****** Variables *******************************************************
int comptar = 21;
int i = 0;
//****** Setup ***********************************************************

void setup()               // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps
  Serial.print("Ara comptare de 0 a ");
  Serial.println(comptar);  
   while(i <= comptar)      // EL WHILE VA ACOOMPANYAT D'UNA CONDICIÓ, MENTRES AQUESTA ES COMPLEIXI, TOT EL QUE HI HAIGUI ENTRE LES CLAUS EL PROGRAMA HO FARA.
  {
    Serial.print(i);       //A diferencia del for que el que fa es cear un cicle dins de les claus fins que es compleixi la condició
    Serial.print("-");
    i++;
  } 
}
void loop()   // we need this to be here even though its empty
{
}

