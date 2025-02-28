
#define ledYellow 10

void setup()
{
  pinMode(ledYellow, OUTPUT);
  int numero = 5;
  int resultado = numero % 2;
  
  if(resultado == 0){
    digitalWrite(ledYellow, HIGH);
  }
  
}

void loop()
{
  
}