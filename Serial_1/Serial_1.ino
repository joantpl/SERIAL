/*************************************************************************
**                                                                      **
**                                  SERIAL                              **
**       Joan torrescasana                             30/01/2017       **
*************************************************************************/

//****** Includes  *******************************************************


//****** Variables *******************************************************


//****** Setup  **********************************************************
void setup()              
{
  Serial.begin(9600);    
}

//**** Loop  *************************************************************
void loop()                     
{
  Serial.print("Hello world!");  // prints Hello world!
  delay(1000);
}






