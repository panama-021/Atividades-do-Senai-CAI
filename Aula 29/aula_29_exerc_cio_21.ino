
#define ledRed 10

void setup()
{
  Serial.begin(9600);
  
  pinMode(ledRed, OUTPUT);
  
  int bateria = 15;
  
  if(bateria < 20){
  digitalWrite(ledRed, HIGH);
    Serial.print("bateria fraca, recarregue");
  }
}

void loop()
{
 
}