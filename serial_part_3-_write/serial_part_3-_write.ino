/*************************************************************************
**                                                                      **
**                                  Serial                              **
**       Joan torrescasana                             13/02/2017       **
*************************************************************************/

//****** Includes  *******************************************************

//****** Variables *******************************************************
int thisByte = 33; 

//****** Setup ***********************************************************

void setup() 
{ 
  Serial.begin(9600); 
  Serial.println("ASCII Table ~ Character Map"); // el programa escriu aixo al principi del terminal.
} 

void loop()                   // es repetira infinitament o fins que es compleixi alguna condició.
{ 
  Serial.write(thisByte);    //Serial write serveix per fer el canvi entre numeros normals i binaris.
  
  Serial.print(", dec: ");     // imprimeix el num en decimal.
  Serial.print(thisByte);      
  Serial.print(", hex: ");     // imprimeix el num en decimal.
  Serial.print(thisByte, HEX);    
  Serial.print(", oct: ");     //imprimeix el num en octadecimal.
  Serial.print(thisByte, OCT);   
  Serial.print(", bin: ");       
  Serial.println(thisByte, BIN);   // imprimeix el numero en binari.

  if(thisByte == 126)  // if printed last visible character '~'
  { 
    while(true)         // mentres la condició anterior no es compleix, el programa continua.quan el programa arriba a 126 en decimal deixa de contar
    { 
    } 
  } 
  thisByte++;     // go on to the next character i incrementa el valor de la variable thisByte.

} 

