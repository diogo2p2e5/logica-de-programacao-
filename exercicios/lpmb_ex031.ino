//Faça um programa que receba um número e exiba o seu dobro.
//variáveis 
long numero = 0;
long dobro = 0;


void setup()
{
 Serial.begin(9600);
}

void loop()
{
  //entrada
   Serial.println("digite um numero");
  while( ! Serial.available());
  numero = Serial.parseInt();
  
  //processamento 
  dobro = numero * 2;
  
  //saída 
  Serial.println("seu numero em dobro eh: " + String(dobro));
  
  
  delay(1000); 
}