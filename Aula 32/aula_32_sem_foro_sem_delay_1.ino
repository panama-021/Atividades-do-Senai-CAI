/*
Autor: Eduardo Leandrini Santos
Data:07/03/2025
Descrição: Aprendendo a fazer o semáforo sem usar "delay()"
*/

#define ledRed 8
#define ledYellow 7
#define ledGreen 6

#define tempoRed 5000
#define tempoYellow 2000
#define tempoGreen 3000

unsigned long horaInicial = 0;
int faseSemaforo = 0;
  
  /*
  0 = Red
  1 = Green
  2 = Yellow
  */


void setup()
{
 pinMode(ledRed, OUTPUT);
 pinMode(ledYellow, OUTPUT);
 pinMode(ledGreen, OUTPUT);
}

void loop()
{
  unsigned long horaAtual = millis();
  
  if(faseSemaforo == 0){
  digitalWrite(ledRed, HIGH);
  digitalWrite(ledYellow, LOW);
    
  if(horaAtual - horaInicial >= tempoRed){
    faseSemaforo = 1;
    horaInicial = horaAtual;
    }
  }
    
  else if(faseSemaforo == 1){
  digitalWrite(ledRed, LOW);
  digitalWrite(ledGreen, HIGH);
  
  if(horaAtual - horaInicial >= tempoGreen){
    faseSemaforo = 2;
    horaInicial = horaAtual;
    }
  }
  
  else{
  digitalWrite(ledYellow, HIGH);
  digitalWrite(ledGreen, LOW);
  
  if(horaAtual - horaInicial >= tempoYellow){
    faseSemaforo = 0;
    horaInicial = horaAtual;
  }
  
 } 
  

  
}