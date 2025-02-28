
  int nota01 = 5.0;
  int nota02 = 8.0;
  int nota03 = 7.0;
  int nota04 = 8.0;
  int materia = 4;
 
  int resultado = 0;
  float resultadoReal = 0;

void setup()
{
  Serial.begin(9600);
  
 
resultado = nota01 + nota02 + nota03 + nota04;
  Serial.println(resultado);
  
  resultadoReal = (float)resultado / (float)materia;
  Serial.println(resultadoReal);
  
  if(resultadoReal >= 7.0){
  Serial.println("APROVADOOO!!");
  }else if(resultadoReal < 7.0 && resultadoReal >= 5.0){
  Serial.println("RECUPERACAOOO!!");
  }else{
  Serial.print("REPROVADOOO!!");
  }
}

void loop()
{
 
}