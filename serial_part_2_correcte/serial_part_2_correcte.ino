/*************************************************************************
**                                                                      **
**                                  Serial                              **
**       Joan torrescasana                             06/02/2017       **
*************************************************************************/

//****** Includes  *******************************************************


//****** Variables *******************************************************


//****** Setup  **********************************************************
int a = 3;
int b = 4;
int h;

 void setup()              // run once, when the sketch starts
 {
Serial.begin(9600); 
Serial.println(" lets calculate hipotenusa"); // escriura aixo en el terminal
Serial.println ("a = 3");   //ens escriura que a = 3
Serial.println ("b = 4");   // ens escriura al terminal que b=4

Serial.print ("h =");
Serial.println (sqrt(pow(a,2)+(pow(b,2))));

 

 }

void loop()         // es repeteix infinitament
{
}



