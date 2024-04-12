int led1 = 8;
int led2 = 9;
int led3 = 10;
int TMP = A0;
void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(TMP, INPUT);
  Serial.begin(9600);
}
void loop() {
  float TMP_Degeri = (analogRead(TMP) / 1023) * 5000; // Arduinonun A0 ayagindaki gerilimi voltaja cevirerek olculuyor.
  // float TMP_Degeri = (analogRead(TMP)*0.004882814;
  delay(10); // daha dogru bir olcum icin biraz bekleme kullanilmalidir

  float sicaklik = (TMP_Degeri - 0.5) * 100.0 ; // okunan değer sıcaklığa çevriliyor.


  Serial.println(TMP_Degeri);
  Serial.println(sicaklik);

  Serial.println("--------------------------");
  delay(1000);

  if (sicaklik <= 25)
  {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);


  }
  else if (sicaklik >= 25.1 && sicaklik <= 30)
  {
    digitalWrite(led1, LOW );
    digitalWrite(led2, HIGH);
    digitalWrite(led3, LOW);

  }
  else if (sicaklik >= 30.1)
  {
    digitalWrite(led1, LOW );
    digitalWrite(led2, LOW );
    digitalWrite(led3, HIGH);

  }

}
