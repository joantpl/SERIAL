/*************************************************************************
**                                                                      **
**                                  Serial                              **
**       Joan torrescasana                             27/02/2017       **
*************************************************************************/

//****** Includes  *******************************************************


//****** Variables *******************************************************

int Co2= 39 ;
//****** Setup ***********************************************************

void setup()
{
  Serial.begin(9600);     
  
  if (Co2 >=0 && Co2 <= 3.5 )
  {
   Serial.print ( " Categoria A");      //s'utilitza la expressió if per dir : si la variable està entre 0 i 3.5 el terminal escriura: CATEGORIA A
   
  }
  else if (Co2 >=3.5 && Co2 <= 6.5)    // aixi en tots els casos
  {
    Serial.print ( " Categoria B ");
  }
  else if (Co2 >=6.5 && Co2 <=11.1) 
  {
    Serial.print(" Categoria C");   
  }
  else if (Co2 >=11.1 && Co2 <=17.7)     
  {
    Serial.print ( "Categoria D");
  }
  else if (Co2 >=17.7 && Co2 <=38.2)
  {
    Serial.print(" Categoria E");
  }
  else if (Co2 >=38.2 && Co2 <=43.2)
  {
  Serial.print(" Categoria F");
  }
   else if (Co2 >43.2)
  {
  Serial.print(" Categoria G");
  }
    else
    {
  
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
