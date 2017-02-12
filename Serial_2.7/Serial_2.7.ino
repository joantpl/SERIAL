/*************************************************************************
**                                                                      **
**                                  Serial                              **
**       Joan torrescasana                             12/02/2017       **
*************************************************************************/

//****** Includes  *******************************************************
int drive_gb = 100;
long drive_mb;
long drive_kb;
long real_drive_mb;
long real_drive_kb;
long missed_drive_kb;
//****** Variables *******************************************************

void setup()              // run once, when the sketch starts
{
 Serial.begin(9600);       //set up Serial library at 9600 bps
 Serial.print("your hd is ");
 Serial.print(drive_gb);
 Serial.println(" gb large");

 
 drive_mb=drive_gb;
 drive_mb=drive_mb * 1024;

 Serial.print("In theory, it can store ");
 Serial.print(drive_mb);
 Serial.print(" Megabytes, ");

 drive_kb=drive_gb;
 drive_kb=drive_kb * pow(1024,2);

 Serial.print(drive_kb);
 Serial.println(" kilobytes.");

real_drive_mb=drive_gb;
real_drive_mb=real_drive_mb * 1000;

Serial.print("But really it only stores ");
 Serial.print(real_drive_mb);
 Serial.print(" Megabytes,");

 real_drive_kb=drive_gb;
 real_drive_kb=real_drive_kb * 1000000;

 Serial.print(real_drive_kb);
 Serial.println(" kilobytes.");

 missed_drive_kb=drive_kb-real_drive_kb;
 
Serial.print(" You are missing ");
Serial.print(missed_drive_kb);
 Serial.print(" kilobytes.");
 
}

void loop()   // we need this to be here even though its empty
{
}


