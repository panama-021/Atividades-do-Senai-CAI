#include <LiquidCrystal_I2C.h>
#define pinBotao 2
#define ledBlue 3

LiquidCrystal_I2C lcd(0x27, 16, 2);
bool estadoLed = 0;
bool estadoBotaoAntes = 0;
int botaoContagem = 0;

void setup()
{
  pinMode(pinBotao, INPUT);
  pinMode(ledBlue, OUTPUT);
  lcd.init();//iniciar o lcd
  lcd.backlight();// aumentar o brilho da tela
  //lcd.setCursor(0,0);//escolher a linha e coluna
  //lcd.nobacklight();// diminuir o brilho da tela
  
 
}

void loop()
{
  bool estadoBotaoAtual = digitalRead(pinBotao);
   
  if(estadoBotaoAtual && !estadoBotaoAntes){
   
   estadoLed = !estadoLed;
   digitalWrite(ledBlue, estadoLed);
    
    if(estadoLed){
    lcd.setCursor(0,0);
    lcd.print("             "); //serve pra "apagar"
    lcd.setCursor(0,0);
    lcd.print("LED ligado");
    
    }
  
    else{
    lcd.setCursor(0,0);
    lcd.print("             ");
    lcd.setCursor(0,0);
    lcd.print("LED desligado");
    lcd.setCursor(0,0);
    }
  }
  
  
  
    
  
   estadoBotaoAntes = estadoBotaoAtual;
}