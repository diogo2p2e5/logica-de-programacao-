/*
While - é uma estrutura de repetição que só executa a repetição quando
a condição for verdadeira
*/




void setup()
{
  Serial.begin(9600);
  
  int contadorWhile = 1;
  
  while (contadorWhile <= 99){
    Serial.println(contadorWhile);
    contadorWhile += 2 ;
  }

}
void loop()
{
    

}