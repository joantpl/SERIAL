/*************************************************************************
**                                                                      **
**                                  Serial                              **
**       Joan torrescasana                             06/02/2017       **
*************************************************************************/

//****** Includes  *******************************************************


//****** Variables *******************************************************


//****** Setup  **********************************************************
int drive_gb = 5;
int drive_mb;
void setup()             // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps
  Serial.print("Your HD is "); //Aquest segment escriu exactament el mateix que hi ha entre les cometes
  Serial.print(drive_gb);        //escriura a la mateixa linia el valor de drive_gb que sera 5
  Serial.println(" GB large.");  // escriura gb large i anira a una linia nova.

  drive_mb = 1024 * drive_gb;   //multiplica 1024 per drive gb per calcular els megabytes i ens dona el resultat 

  Serial.print("It can store ");  // un cop tenim el resultat de la operació anterior el podem utilitzar per acabar la frase.
  Serial.print(drive_mb);
  Serial.println(" Megabytes!");   
}

void loop()     // we need this to be here even though its empty
{
}


