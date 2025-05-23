// Criar um protótipo com 3 leds: verde, vermelho e amarelo.
//Crie um menu com Do While que solicite ao usuário qual led ele quer acender ou apagar,
//com suas devidas funcionalidades, da seguinte forma:

//
int ledVerde = 13;
int ledAmarelo = 12;
int ledVermelho = 11;
int opcao;

void setup()
{
  Serial.begin(9600);
  
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
   pinMode(ledVermelho, OUTPUT);
  
  do{
  Serial.println("Escolha uma das opcoes abaixo: ");
  Serial.println("1) Ligar Led Verde ");
  Serial.println("2) Desligar Led Verde ");
  Serial.println("3) Ligar Led Amarelo ");
  Serial.println("4) Desligar Led Amarelo ");
  Serial.println("5) Ligar Led Vermelho ");
  Serial.println("6) Desligar Led Vermelho ");
  Serial.println("7) Ligar Todos os Leds ");   
  Serial.println("8) Desligar Todos os Leds");
  Serial.println("0) Sair");
    
  while(! Serial.available());
  opcao = Serial.parseInt();

switch(opcao)
{
  case 1:
  digitalWrite(ledVerde, HIGH);
  break;
  
  case 2:
   digitalWrite(ledVerde, LOW);
  break;
  
  case 3:
  digitalWrite(ledAmarelo, HIGH);
  break;
  
  case 4:
   digitalWrite(ledAmarelo, LOW);
   break;
  
  case 5:
  digitalWrite(ledVermelho, HIGH);
  break;
  
  case 6:
  digitalWrite(ledVermelho, LOW);
  break;
  
  case 7:
  digitalWrite(ledVerde, HIGH);
  digitalWrite(ledAmarelo, HIGH);
    digitalWrite(ledVermelho, HIGH);
  break;
  
  case 8:
  digitalWrite(ledVerde, LOW); 
  digitalWrite(ledAmarelo, LOW);
  digitalWrite(ledVermelho, LOW);
  break;
  
  case 0:
  Serial.println("obrigado por usar o programa!!!");
  break;
  
  default:
  Serial.println("nao temos nenhuma dessas opcoes");
  break;
  
}
 
}
  
while(opcao !=0);
}
void loop()
{
  
}
