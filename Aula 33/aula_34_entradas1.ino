/*
Autor: Eduardo Leandrini Santos
Data:11/03/2025
Descrição: Aula sobre entradas.
*/

#define pinBotao 10
#define pinLed 2
//----VARIAVEIS GLOBAIS----
unsigned long tempoInicial = 0;
bool estadoLed = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(pinLed, OUTPUT);
  pinMode(pinBotao, INPUT);
}

void loop()
{
  //Read -> LER
  //write -> ESCREVER
 bool estadoBotao = digitalRead(pinBotao);
  /*
  //codigo com duas linhas
  bool estadoBotao = digitalRead(pinBotao);
  digitalWrite(pinLed, estadoBotao);
  
  
   //if/else
  if(estadoBotao)
  digitalWrite(pinLed, HIGH);
  else
  digitalWrite(pinLed, LOW);
  
  //switch case
  switch(estadoBotao){
    case 0:
    digitalWrite(pinLed, LOW);
    break;
    
    case 1:
    digitalWrite(pinLed, HIGH);
    break;
  }
 */
  
 unsigned long tempoAtual = millis(); 
  
 if(estadoBotao){
   
  if(tempoAtual - tempoInicial >= 300){
    estadoLed = !estadoLed;
    digitalWrite(pinLed, estadoLed);
    tempoInicial = tempoAtual;
  }
   
 } 
 else
 digitalWrite(pinLed, LOW); 
}