// C++ code
//
void setup()
{
  Serial.begin(9600);
  
  int salario = 500;
  int resultado = 0;
  if(salario < 1000){
  resultado = salario * 10;
  }
  
  Serial.println("Nome: Ze Colmeia");
  Serial.println("Cargo: Empilhador");
  Serial.print("salario: ");
  Serial.println(resultado);
}

void loop()
{
  
}