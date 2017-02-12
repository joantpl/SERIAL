/*************************************************************************
**                                                                      **
**                                  Serial                              **
**       Joan torrescasana                             12/02/2017       **
*************************************************************************/

//****** Includes  *******************************************************
int drive_gb = 100;
long drive_mb;   // aquesta variable serveix per expressar els mb teorics
long drive_kb;   //expressa kb teorics
long real_drive_mb; //expressa mb reals
long real_drive_kb; //expressa kb reals
long missed_drive_kb; //JO HE AFEGIT AQUESTA VARIABLE, que expressara els kb prduts.
//****** Variables *******************************************************

void setup()              // run once, when the sketch starts
{
 Serial.begin(9600);       //set up Serial library at 9600 bps
 Serial.print("your hd is ");
 Serial.print(drive_gb);
 Serial.println(" gb large");    // aixo funciona com sempre

 
 drive_mb=drive_gb;           // igualem les variables
 drive_mb=drive_mb * 1024;    // diem que drive_mb = 100 *1024

 Serial.print("In theory, it can store ");   //imprimeix el mateix que hi ha entre les cometes
 Serial.print(drive_mb);                    // imprimeix el valor obtingut de la operaci´´o anterior
 Serial.print(" Megabytes, ");

 drive_kb=drive_gb;            // igualem les variables
 drive_kb=drive_kb * pow(1024,2);     // significa que drive_kb=100*1024^2

 Serial.print(drive_kb);
 Serial.println(" kilobytes.");

real_drive_mb=drive_gb;            // igualem les variables
real_drive_mb=real_drive_mb * 1000;       //fem la operacio

Serial.print("But really it only stores ");
 Serial.print(real_drive_mb);
 Serial.print(" Megabytes,");

 real_drive_kb=drive_gb;            // igualem les variables
 real_drive_kb=real_drive_kb * 1000000;  fem la operacio

 Serial.print(real_drive_kb);
 Serial.println(" kilobytes.");

 missed_drive_kb=drive_kb-real_drive_kb;    //utilitzem la varaiable que he creat per fer la resta entre valors reals i teoriics.
 
Serial.print("You are missing ");
Serial.print(missed_drive_kb);          //utilitza el resultat de la operació anterior per expressar els kb perduts. 
 Serial.print(" kilobytes.");
 
}

void loop()   // we need this to be here even though its empty
{
}


