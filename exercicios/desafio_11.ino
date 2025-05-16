/*
While - é uma estrutura de repetição que só executa a repetição quando
a condição for verdadeira
*/




void setup()
{
  Serial.begin(9600);
  
  int contadorWhile = 5;
  
  while (contadorWhile >= 1){
    Serial.println(contadorWhile);
    contadorWhile--;
  }

}
void loop()
{
    

}