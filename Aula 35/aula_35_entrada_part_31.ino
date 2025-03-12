/*
Autor: Eduardo Leandrini Santos
Data:12/03/2025
Descrição: Ligando e desligando o led toda vez 
que apertar o botao.
*/

#define botao 10
#define ledBranco 5


void setup()
{
  pinMode(ledBranco, OUTPUT);
  pinMode(botao, INPUT);
  
}

void loop()
{
  bool estadoBotaoAtual = digitalRead(botao);
  bool estadoLed = digitalRead(ledBranco);
  static bool estadoBotaoAntes = 0;
  static int botaoContagem = 0; 
  
  
 if(estadoBotaoAtual && !estadoBotaoAntes)
 digitalWrite(ledBranco, HIGH);
   
 if(estadoBotaoAtual && !estadoBotaoAntes && estadoLed)
 digitalWrite(ledBranco, LOW);
   
 estadoBotaoAntes = estadoBotaoAtual;
}