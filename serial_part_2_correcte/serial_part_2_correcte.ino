/*************************************************************************
**                                                                      **
**                                  Serial                              **
**       Joan torrescasana                             30/01/2017       **
*************************************************************************/

//****** Includes  *******************************************************


//****** Variables *******************************************************


//****** Setup  **********************************************************
int a = 5;
int b = 10;
int c = 20;

void setup()              // run once, when the sketch starts, comença el programa
{
  Serial.begin(9600);     // set up Serial library at 9600 bps,el terminal del nostre ordinador funciona a aquests bats per minut

  Serial.println("Here is some math: ");

  Serial.print("a = ");    // Escriu a =
  Serial.println(a);       // Escriu el valor que te la variable
  Serial.print("b = ");    // Escriu b =
  Serial.println(b);       // Escriu el valor que te la variable
  Serial.print("c = ");    // Escriu c =
  Serial.println(c);      // Escriu el valor que te la variable es fica ln al final perque es faci en una nova linia

  Serial.print("a + b = ");       // escriu a+b=
  Serial.println(a + b);     // ens dona el resultat de la suma de a+b

  Serial.print("a * c = ");       // escriu la operació anterior
 // put your setup code here, to run once:


  Serial.println(a * c);     //escriu el resultat de la multilplicació i acaba la linea
  
  Serial.print("c / b = ");       // divide
  Serial.println(c / b);           //

  Serial.print("c % b = ");       // module
  Serial.println(c % b);          //Ens dona el resultat
  
  Serial.print("b - c = ");       // subtract
  Serial.println(b - c);          
}

void loop()  // we need this to be here even though its empty
{
}
