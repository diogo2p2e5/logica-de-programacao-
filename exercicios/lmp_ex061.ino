//Faça um programa que receba a medida em polegadas e exiba esse número em
//centímetros.
float  medida = 0;

void setup()
{
 Serial.begin(9600);
}

void loop()
{
 //entrada
  Serial.println("digite uma medida em polegadas");
  while ( ! Serial.available());
  medida = Serial.parseFloat();
  
  //processamento 
  medida = medida * 2.54;
  
  //saida
  Serial.println("sua medida em polegadas eh: " + String(medida));
  
  
  delay(1000); // Wait for 1000 millisecond(s)
}