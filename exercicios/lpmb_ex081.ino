// C++ code
//var
String nome, cargo;
float salario;
float porcentagem = 10;


void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("digite seu nome");
  while (! Serial.available());
  nome = Serial.readString();
  
   Serial.println("digite seu cargo");
  while (! Serial.available());
  cargo = Serial.readString();
  
   Serial.println("digite seu salario");
  while (! Serial.available());
  salario = Serial.parseFloat();
 
                  if( salario < 1000){
  porcentagem = porcentagem/ 100;
  porcentagem = porcentagem + 1;
  salario = porcentagem * salario;
  }
  
   Serial.println("seu nome: " + nome);
  Serial.println("seu cargo: " + cargo);
  Serial.println("seu novo salario eh: " +  String(salario));
  
  
  
  delay(1000); // Wait for 1000 millisecond(s)
}