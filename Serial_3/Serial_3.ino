/*************************************************************************
**                                                                      **
**                                  SERIAL                              **
**       Joan torrescasana                             30/01/2017       **
*************************************************************************/

//****** Includes  *******************************************************


//****** Variables *******************************************************


//****** Setup  **********************************************************
 void setup()                // run once, when the sketch starts
{
  Serial.begin(9600);       // set up Serial library at 9600 bps
  
  Serial.println( "Escull el numero de l'operacio que vol realitzar" );  // Per fer aquest programa fiquem serial begin 9800 per comunicar amb l'ordinador, i a cada frase que volem fer sortir la posem en un print ln per que ho faci en una linia nova i entre cometes i parentesis
Serial.println( "1.Comprovar numero de tarjeta de credit? " ); 
 Serial.println( "2.Comprovar numero de compte bancari?");
Serial.println( "3.Buscar un digit perdut de la tarjeta de credit?");
                   
}

//**** Loop  *************************************************************
void loop()   {
               
}












