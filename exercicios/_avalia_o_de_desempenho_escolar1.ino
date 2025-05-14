// Você foi contratado para criar um sistema que analisa a situação
//de um aluno com base em suas notas e frequência.
int nota = 0;
int nota2 = 0;
int freq = 60;
int med = 0;


void setup()
{
Serial.begin(9600);
}

void loop()
{
  //entrada de dados
   Serial.println("  ");
  Serial.println("por favor digite a sua primeira nota");
   Serial.println("  ");
  while( ! Serial.available());
  nota = Serial.parseInt();
  
   Serial.println("digite a sua segunda nota");
   Serial.println("  ");
  while( ! Serial.available());
  nota2 = Serial.parseInt();
 
  // calculo e ifs
  med = nota + nota2;
  med = med / 2;  
  //
  if (med >= 6 && freq >= 75){
    Serial.println("  ");
    Serial.println("voce foi aprovado");
    
  } else if (med < 6 && freq < 75){
     Serial.println("  ");
    Serial.println("voce foi reprovado");
    
  } else if ( med < 6 && freq >= 75){
     Serial.println("  ");
    Serial.println("voce foi reprovado por ter notas baixas");
    
  } else if ( med > 6 && freq < 75){
     Serial.println("  ");
    Serial.println("voce foi reprovado por ter muitas faltas");
    
  } else if ( med = 10 && freq < 75){
     Serial.println("  ");
    Serial.println("voce foi reprovado por ter muitas faltas");
    
  } if (med = 10 && freq = 100){
     Serial.println("  ");
    Serial.println("Parabens! Nota maxima!");
  }
             
  delay(1000); 
}