// Faça um programa que receba um número inteiro do usuário e informe se este
//número é positivo ou negativo.
float numero = 0;


void setup()
{
Serial.begin(9600);
}

void loop()
{
  Serial.println("digite um numero inteiro");
  while(! Serial.available());
  numero = Serial.parseFloat();
  
 if(numero <0){
Serial.println("seu numero eh negativo");
 }else{
   Serial.println("seu numero eh positivo");
 }
  
  
  
  
  delay(1000); 
}