/*************************************************************************
**                                                                      **
**                                  Serial                              **
**       Joan torrescasana                             13/02/2017       **
*************************************************************************/

//****** Includes  *******************************************************

//****** Variables *******************************************************
int num = 64;

//****** Setup ***********************************************************

void setup()             // run once, when the sketch starts
{
  Serial.begin(9600);    // set up Serial library at 9600 bps

  Serial.println("Different formats for the same number:");

  Serial.write(num);    // fa apareixe un arroba al terminal  ._.
  Serial.println();
  
  Serial.println(num);             // Aquèst programa escriu un mateix numero en diferents formats.
  Serial.println(num,DEC);
  
  Serial.println(num,BIN);
  
  Serial.println(num,HEX);
  
  Serial.println(num,OCT);
}

void loop()   // we need this to be here even though its empty
{
}
