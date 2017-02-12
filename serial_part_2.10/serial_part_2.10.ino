/*************************************************************************
**                                                                      **
**                                  Serial                              **
**       Joan torrescasana                             12/02/2017       **
*************************************************************************/

//****** Includes  *******************************************************


//****** Variables *******************************************************
float a = 3;   // per aconseguir decimals s'ha de canviar el format de les variables per float, aquest tipus de variables ocupa mes espai que les variables int.
float b = 2;
float d;


//****** Setup  **********************************************************

void setup()               // run once, when the sketch starts
{
  Serial.begin(9600);      // set up Serial library at 9600 bps

  Serial.println("Here is division: ");

  Serial.print("a = ");
  Serial.println(a);
  Serial.print("b = ");
  Serial.println(b);

  d = a / b;
 
  Serial.print("a / b = ");   //no dona 1,5 perque les variables expressades en int no poden tenir decimals.
  Serial.println(d);

}

void loop()    // we need this to be here even though its empty
{
}



