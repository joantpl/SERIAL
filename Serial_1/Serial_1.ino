/*************************************************************************
**                                                                      **
**                                  SERIAL                              **
**       Joan torrescasana                             30/01/2017       **
*************************************************************************/

//****** Includes  *******************************************************


//****** Variables *******************************************************


//****** Setup  **********************************************************
void setup()                // run once, when the sketch starts- significa que el projecte comença estarà sempre entre les claus. Seria com un OB100 en plc.
{
  Serial.begin(38400);       // set up Serial library at 9600 bps,9600 bps significa els bites per segon que el programa s'ha de connectar amb l'ordinador, a travès del terminal es pot canviar.
  Serial.println("Hello world!"); // prints Hello world! with brake line 
}

void loop()   // run over and over again
{
       // do nothing ,no fa res perque no hem posat res en l'espai entre les claus, si posesim algu S'aniria rpetin el programa infinites vegades,es com un OB1 en plç.
}
  
//****** Loop  ***********************************************************

