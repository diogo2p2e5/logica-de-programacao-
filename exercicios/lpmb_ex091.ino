//Uma empresa decide dar aumento de 30% aos funcionários cujo salário é
//inferior a 500 reais. Escreva um programa que receba o salário de um
//funcionário e imprima o valor do salário reajustado ou uma mensagem caso o
//funcionário não tenha direito a aumento.
float salario = 0;



void setup()
{
  Serial.begin(9600);
}

void loop()
{
 Serial.println("digite seu salario");
  while (! Serial.available());
  salario = Serial.parseFloat();
  
  if(salario <500){
 salario = salario + (salario/ 100 * 10);
    
    
  }else{
    Serial.println("voce nao tem direito a um aumento");
    
  }
  
  
  Serial.println("seu salario eh: " + String(salario));
  
  
  
  delay(1000); // Wait for 1000 millisecond(s)
}