float peso = 54.02;
float altura = 1.62;
int resultado = 0;
float resultadoReal = 0;

void setup()
{
Serial.begin(9600);
  
  resultadoReal = sq(altura);
  Serial.print("Altura ao quadrado: ");
  Serial.println(resultadoReal);
  
  resultadoReal = (float)peso/(float)sq(altura);
  Serial.print("a divisao do peso com a altura ao quadrado eh: ");
    Serial.println(resultadoReal, 1);
  
 int IMC = resultadoReal;
  
  if(IMC < 18.45){
  Serial.println("Abaixo do normal");
  }else if(IMC >= 18.45 && IMC < 24.9){
  Serial.println("Peso normal");
  }else if(IMC >= 25.0 && IMC < 29.9){
  Serial.println("Excesso de peso");
  }else if(IMC >= 30.0 && IMC < 34.9){
  Serial.println("Obessidade classe I");
  }else if(IMC >= 35.0 && IMC < 39.9){
  Serial.println("Obessidade classe II");
  }else{
  Serial.println("Obessidade classe III");
  }
  
}

void loop()
{

}