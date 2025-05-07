// C++ code
//
int numero = 0;
int numero2 = 0;


void setup()
{
  Serial.begin(9600);
}

void loop()
{
   Serial.println("digite um numero");
  while (! Serial.available());
  numero = Serial.parseInt();
  
    Serial.println("digite segundo numero");
  while (! Serial.available());
  numero2 = Serial.parseInt();
  
  if(numero > numero2){
    Serial.println("o primeiro numero eh maior que o segundo");
  }else{
    Serial.println("o segundo numero eh maior que o segundo");
  
  }
  
  delay(1000); // Wait for 1000 millisecond(s)
}