// C++ code
//
void setup()
{
  Serial.begin(9600);
  

  int salario = 550;
  int resultado = 0;
  
  if(salario < 500){
  resultado = salario * 30;
    Serial.print("seu salario agora eh: ");
    Serial.println(resultado);
  }else{
  Serial.print("Nao foi possivel aumentar seu salario");
  }
  
}

void loop()
{

}