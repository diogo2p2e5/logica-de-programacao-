// Elabore um programa para cálculo de preços de produtos que solicite o preço
//de compra do produto e o percentual a ser aplicado em cima desse valor para
//a venda. Calcule e exiba o preço de venda do produto. Se o percentual a ser
//aplicado for inferior a 50%, exiba uma mensagem informando ao usuário que o
//produto será vendido com uma margem muito pequena de lucro.
float preco = 0;
float percentual = 0;
float valordevenda = 0;


void setup()
{
 Serial.begin(9600);
}

void loop()
{
 
  Serial.println("digite o preco");
  while (! Serial.available());
  preco = Serial.parseFloat();
  
   Serial.println("digite o percentual aplicado");
  while (! Serial.available());
  percentual = Serial.parseFloat();
  
  if(percentual <50){
    Serial.println("o produto a seguir tera baixo lucro");
    
  }else{
  valordevenda = preco + ( preco / 100 * percentual);
    
  }
  Serial.println("percentual aplicado: " + String(percentual));
  Serial.println("novo preco: " + String(valordevenda));
  Serial.println("                     ");
  
  
  
  
  delay(1000); // Wait for 1000 millisecond(s)
}