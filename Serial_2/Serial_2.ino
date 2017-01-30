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
  
}

//**** Loop  *************************************************************
void loop()                 // run over and over again
{
  Serial.println( "Hello world!" );  // Serial println significa escriure en aquest cas hello world en una nova linia.
  Serial.println( "new line" ); //perque es veigui mès clar afegeixo un Serial.println que digui new line.
  delay(1000);                  // Delay significa el temps que tardara en repetir-se la acció expressat en mil·lisegons,en aquest cas 1 seg.
}











