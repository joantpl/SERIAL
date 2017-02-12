/*************************************************************************
**                                                                      **
**                                  Serial                              **
**       Joan torrescasana                             06/02/2017       **
*************************************************************************/

//****** Includes  *******************************************************


//****** Variables *******************************************************


//****** Setup  **********************************************************
long drive_gb = 100;      // per que ens dongui el resultat correcte s'ha de canviar el format de les variables, treure int i posar long per augmentar el rang de numeros permesos.
long drive_mb;
void setup()             // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps
  Serial.print("Your HD is "); //Aquest segment escriu exactament el mateix que hi ha entre les cometes
  Serial.print(drive_gb);        //escriura a la mateixa linia el valor de drive_gb que sera 5
  Serial.println(" GB large.");  // escriura gb large i anira a una linia nova.

  drive_mb = drive_gb;
  drive_mb = 1024 * drive_gb;   
  Serial.print("It can store ");  // En a
  Serial.print(drive_mb);
  Serial.println(" Megabytes!");
}

void loop()     // we need this to be here even though its empty
{
}


