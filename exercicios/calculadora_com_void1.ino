int escoO;
 float resultado;


//tipo de retorno NomeDaFunção paremetros corpo
void soma(float numero1Param, float numero2Param){
  resultado = numero1Param + numero2Param;
  Serial.println("calabreso!!!! o resultado de sua continha de mais foi: " + String(resultado));
  //return resultado;
}

void dividir(float numero1Param, float numero2Param){
  resultado = numero1Param / numero2Param;
  Serial.println("ludimilo!! o resultado de sua continha de dividir foi: " + String(resultado));
  
}
void subtrair (float numero1Param, float numero2Param){
  resultado = numero1Param - numero2Param;
 Serial.println("calabreso!!! o resultado de sua conta de subtracao foi: " + String(resultado));
}
void multiplicar(float numero1Param, float numero2Param){
  resultado = numero1Param * numero2Param;
   Serial.println("calabresinho!!!!! o resultado da continha de multiplicacao  foi: " + String(resultado));
  
}




void setup()
{
 Serial.begin(9600);
  
  
  int contador =0;
  float numero1;
  float numero2;
 //ira guardar o resultdo do calculo indicado
  
  do{
    Serial.println("Bem-vindo(a) a calculadora do calabreso davi brito\n");
    
    
    Serial.println("Escolha uma das operacoes");
    
    Serial.println("1 - somar");
    Serial.println("2 - dividir");
    Serial.println("3 - subtrair");
    Serial.println("4 - multiplicar");
    while (!Serial.available()){}
           escoO = Serial.parseInt();
    
    Serial.println("para conseguirmos fazer a operacao matematica, calabreso, precisamos que voce digite 2 numeros");
    Serial.println("Digite o 1o numero");
    while(! Serial.available()){}
    numero1 = Serial.parseFloat();
    
    Serial.println("Digite o 2o numero");
    while(! Serial.available()){}
    numero2 = Serial.parseFloat();
    
    switch(escoO){
      case 1:
      soma(numero1, numero2);
      //somar(1, 3);
      //float retornoFuncaoSomar;
      //retornoFuncaoSomar = soma(numero1, numero2);
      //Serial.println(retornoFuncaoSomar);
      
      break;
      
      case 2:
      dividir(numero1, numero2);
     
      break;
      
       case 3:
       subtrair(numero1, numero2);
      break;
   
       case 4:
       resultado = numero1 * numero2;
     
      break;
      
    default:
      Serial.println("Eita calma calabreso!!! opcao invalida! Escoolha uma opcao do 1 ao 4.");
    }
    
    Serial.println("voce deseja voltar ao menu? Digite sim ou nao (em minusculo, por favor).");
    while(! Serial.available()){}
   
    
    if(Serial.readString() == "sim"){
     contador = 1;
    }
    else{
    contador = 0;
      Serial.println("ate breve calabreso <3");
       Serial.println("se voce quer usar de novo, calma calabreso! e so reiniciar o programa ludmilo");
    }
    
  }
  while(contador != 0);
}  
void loop()
{

  
}