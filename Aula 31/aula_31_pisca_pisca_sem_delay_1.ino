/*
Autor: Eduardo Leandrini Santos
Data:07/03/2025
Descrição: Aprendendo a ligar o Led sem usar "delay()"
*/
#define piscaBlue 13

unsigned long tempoInicial = 0;
bool estadoLed = 0;


void setup()
{
  pinMode(piscaBlue, OUTPUT);
}

void loop()
{
 unsigned long tempoAtual = millis();
  
  if(tempoAtual - tempoInicial >= 1000){
    
    if(!estadoLed){
      digitalWrite(piscaBlue, HIGH);
      estadoLed = 1;
      
    }else{
      digitalWrite(piscaBlue, LOW);
      estadoLed = 0;
    }
    tempoInicial = tempoAtual;
  }
  
  
}