/*************************************************************************
**                                                                      **
**                                  Serial                              **
**       Joan torrescasana                             27/02/2017       **
*************************************************************************/

//****** Includes  *******************************************************


//****** Variables *******************************************************
int sensorReading = 3;

//****** Setup ***********************************************************
void setup()
{
  Serial.begin(9600);
  Serial.print("The day is ");     // La diferencia del switch respecte del if es que pots triar els diferents valors de la variable i que per cada variable tingui un resultat diferent.
   
  switch (sensorReading) {        //amb if tambè es podria fer el mateix programa pero amb aquesta manera es mes fàcil.
    Serial.println("dark");     
    break;
  case 1:    
    Serial.println("dim");
    break;
  case 2:    
    Serial.println("medium");
    break;
  case 3:
    Serial.println("bright");
    break;
  default:
    Serial.println("... I don't know!!!");
  } 
}
void loop()
{
}

