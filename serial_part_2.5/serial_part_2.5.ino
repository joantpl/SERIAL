/*************************************************************************
**                                                                      **
**                                  Serial                              **
**       Joan torrescasana                             12/02/2017       **
*************************************************************************/

//****** Includes  *******************************************************


//****** Variables *******************************************************

long drive_gb = 100;
long drive_mb;     // Es necessari canviar el format de les dades per long, aquestes permeten valors de -2,147,483,648 to 2,147,483,647.
//****** Setup  **********************************************************

void setup()             // run once, when the sketch starts
{
  Serial.begin(9600);    // set up Serial library at 9600 bps

  Serial.print("Your HD is ");
  Serial.print(drive_gb);
  Serial.println(" GB large.");

  drive_mb = 1024 * drive_gb;

  Serial.print("It can store ");
  Serial.print(drive_mb);
  Serial.println(" Megabytes!");
}

void loop()   // we need this to be here even though its empty
{
}


