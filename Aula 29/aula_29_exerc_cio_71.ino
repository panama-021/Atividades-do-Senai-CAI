// C++ code
//
void setup()
{
  Serial.begin(9600);
  
  int number01 = 27;
  int number02 = 24;
  
  if(number01 > number02){
  Serial.println("O number01 eh maior");
  }else{
  Serial.println("o number02 eh maior");
  }
}

void loop()
{
  
}