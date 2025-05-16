/*
While - é uma estrutura de repetição que só executa a repetição quando
a condição for verdadeira
*/




void setup()
{
  Serial.begin(9600);
  
  int contadorWhile = 0;
  
  while (contadorWhile <= 100){
    Serial.println(contadorWhile);
    contadorWhile += 2 ;
  }

}
void loop()
{
    

}