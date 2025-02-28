
#define ledBlue 10



void setup()
{
  
  
 pinMode(ledBlue, OUTPUT);
  
  int temperatura = 15;
  
  if(temperatura > 30){
  digitalWrite(ledBlue, HIGH);
  }
}

void loop()
{
  
}