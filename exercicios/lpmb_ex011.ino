
//Faça um programa que receba a idade de uma pessoa em anos e
//imprima essa idade em: Meses, Dias, Horas, Minutos.
long idade = 0;
long idadeMeses = 0;
long idadeDias = 0;
long idadeHoras = 0;
long idadeMinutos = 0;

void setup()
{
 Serial.begin(9600);
}

void loop()
{
 //Entrada
  Serial.println("digite sua idade");
  while( ! Serial.available() ); 
  idade = Serial.parseInt();
  
 // processamento
  idadeMeses = idade * 12;
  idadeDias = idadeMeses * 365;
  idadeHoras = idadeDias * 8760;
  idadeMinutos = idadeHoras * 525600;
  
  
  
 //saída 
  Serial.println("idade em meses: " + String(idadeMeses) );
   Serial.println("idade em dias: " + String(idadeDias) );
   Serial.println("idade em horas: " + String(idadeHoras) );
  Serial.println("idade em minutos " + String(idadeMinutos) );
  delay(10000);
}