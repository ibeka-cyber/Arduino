int led = 3;
int LDR = A0;
void setup() {
  pinMode(led, OUTPUT);
  pinMode(LDR, INPUT);
  Serial.begin(9600);
}
void loop() {
  int LDR_Degeri = analogRead(LDR); // Arduinonun A0 ayagindaki gerilim olculuyor
  delay(10); // daha dogru bir olcum icin biraz bekleme kullanilmalidir
  Serial.println(LDR_Degeri); // olculen deger seri haberlesme ile yollaniyor
  if (LDR_Degeri >= 300)  
  {
    digitalWrite(led, LOW); // Eğer ışık oranı 300 un ustunde ise ışık sönecek

  }
  else
  {
    digitalWrite(led, HIGH);  Eğer ışık oranı 300 un altında ise ışık yanacak.
    }

}

