// Faça um programa que receba a medida em centímetros e exiba esse
//número em polegadas. OBS: Uma polegada equivale a 2.54
//centímetros.
float medida = 0;



void setup()
{
  Serial.begin(9600);
}

void loop()
{
  //entrada
  Serial.println("digite uma medida em centimetros");
  while( ! Serial.available());
  medida = Serial.parseFloat();
  
  //processamento 
  medida = medida / 2.54;
    
  //saída 
    Serial.println("a medida em polegadas eh: " + String(medida) );
 
  delay(1000); // Wait for 1000 millisecond(s)
}