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
    Serial.println(" ");
    Serial.println(numero);   
    Serial.println("eh maior que");               
    Serial.println(numero2);
    Serial.println(" ");
                   
  }else{
    Serial.println(" ");
   Serial.println(numero2);   
    Serial.println("eh maior que");               
    Serial.println(numero);
   Serial.println(" ");
  }
  
  delay(1000); // Wait for 1000 millisecond(s)
}
