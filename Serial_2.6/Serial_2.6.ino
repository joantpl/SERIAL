/*************************************************************************
**                                                                      **
**                                  Serial                              **
**       Joan torrescasana                             12/02/2017       **
*************************************************************************/

//****** Includes  *******************************************************
int test = 32767;       // LES VARIABLES EXPRESSADES AMB INT TENEN EL RANG DE NUMEROS DE -32,768 to 32,767 D'AQUESTA MANERA AL SUMAR 1 A 32,767 EL CICLE TORNA A COMENÇAR I EL PRIMER VALOR ES -32,768. 

//****** Variables *******************************************************

void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     //set up Serial library at 9600 bps
  Serial.print("Test value is: ");
  Serial.println(test);

  test = test + 1;
 
  Serial.print("Now it is ");
  Serial.println(test);
}

void loop()   // we need this to be here even though its empty
{
}


