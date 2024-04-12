int buzzerPin = 11;


void setup()
{
  
    tone(buzzerPin,100);
    delay(500);
    noTone(buzzerPin);
    delay(20);
  tone(buzzerPin,200);
    delay(500);
    noTone(buzzerPin);
    delay(20);

  tone(buzzerPin,300);
    delay(500);
    noTone(buzzerPin);
    delay(20);
  
}

void loop()
{
}
