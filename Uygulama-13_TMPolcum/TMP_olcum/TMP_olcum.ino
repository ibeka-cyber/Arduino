
int TMP = A0;
void setup() {

  pinMode(TMP, INPUT);
  Serial.begin(9600);
}
void loop() {
  float TMP_Degeri = (analogRead(TMP) / 1023) * 5000; // Arduinonun A0 ayagindaki gerilimi voltaja cevirerek olculuyor.
  // float TMP_Degeri = (analogRead(TMP)*0.004882814;
  delay(1000);

  float sicaklik = (TMP_Degeri - 0.5) * 100.0 ; // okunan değer sıcaklığa çevriliyor.


  Serial.println(TMP_Degeri);
  Serial.println(sicaklik);

  Serial.println("--------------------------");
}
