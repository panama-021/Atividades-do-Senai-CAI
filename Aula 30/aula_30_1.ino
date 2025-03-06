#define ledRed 13
#define ledOrange 12
#define ledYellow 11
#define ledBlue 10
#define ledGreen 9

void setup()
{
 Serial.begin(9600);
  
 pinMode(ledRed, OUTPUT);
 pinMode(ledOrange, OUTPUT);
 pinMode(ledYellow, OUTPUT);
 pinMode(ledBlue, OUTPUT);
 pinMode(ledGreen, OUTPUT);
  
 int qualidade = 3;
  
  switch(qualidade){
    
    case 0:
      Serial.println("Pessima");
      digitalWrite(ledRed, HIGH);
      break;
    
     case 1:
       Serial.println("Ruim");
       digitalWrite(ledOrange, HIGH);
       break;
    
     case 2:
       Serial.println("Normal");
       digitalWrite(ledYellow, HIGH);
       break;
    
     case 3:
       Serial.println("Boa");
       digitalWrite(ledBlue, HIGH);
       break;
    
     case 4:
       Serial.println("Excelente");
       digitalWrite(ledGreen, HIGH);
       break;
    
       default:
       Serial.println("ERROR!!");
       break;
  }
}

void loop()
{

}