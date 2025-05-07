// C++ code
//
int numero = 0;


void setup()
{
  Serial.begin(9600);
}

void loop()
{
 Serial.println("digite um numero inteiro");
  while(! Serial.available());
  numero = Serial.parseInt();
  
  

  if(numero % 2 == 0){
    Serial.println("seu numero eh par");
  }else{
    Serial.println("");
  
  
  
  
  }
  delay(1000); // Wait for 1000 millisecond(s)
}