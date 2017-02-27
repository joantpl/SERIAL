/*************************************************************************
**                                                                      **
**                                  Serial                              **
**       Joan torrescasana                             12/02/2017       **
*************************************************************************/

//****** Includes  *******************************************************


//****** Variables *******************************************************

int tempAigua = 199;
//****** Setup ***********************************************************

void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps  
  
  if ( tempAigua >= 100)    // L'estructura "if" serveix per indicar al programa si s'ha de complir la seguent operació que està entre claus despres del if, en aquest cas el programa diu que si la temperatura es superior a 100 (x>100) s'escrigui al terminal "Aigua supera els 100C, esta bullint!" i com que la variable esta a 101 s'activa de seguida,si cambiem la variable per una inferior no escriura res. 
  {
    Serial.print("Aigua supera els 100C, esta bullint!");   
  }
  else 
  {
    Serial.print ( "Aigua encara no bull");
  }
}
//****** loop      *******************************************************
void loop(){     // we need this to be here even though its empty



}

 

