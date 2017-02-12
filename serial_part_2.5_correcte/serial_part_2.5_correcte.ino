/*************************************************************************
**                                                                      **
**                                  Serial                              **
**       Joan torrescasana                             12/02/2017       **
*************************************************************************/

//****** Includes  *******************************************************


//****** Variables *******************************************************
int drive_gb = 100;
long drive_mb;

//****** Setup  **********************************************************

void setup()               //run once, when the sketch starts
{
  Serial.begin(9600);       //set up Serial library at 9600 bps

  Serial.print("Your HD is ");
  Serial.print(drive_gb);
  Serial.println(" GB large.");    //escriuen el que està entre cometes en una linia i baixa a una linia nova.

  drive_mb = drive_gb;
  drive_mb = drive_mb * 1024;      //Per que dongui 102400 s'ha de posar que drive _mb= drive gb d'aquesta manera el programa dona de la forma correcte, tot i que si es posa long a les dues variables tambè funciona.

  Serial.print("It can store ");
  Serial.print(drive_mb);
  Serial.println(" Megabytes!");
}

void loop()      //we need this to be here even though its empty
{
}


