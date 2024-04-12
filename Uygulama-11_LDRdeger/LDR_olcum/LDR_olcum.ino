
int LDR = A0;
void setup() {
  
  pinMode(LDR, INPUT);
  Serial.begin(9600);
}
void loop() {
  int LDR_Degeri = analogRead(LDR); // Arduinonun A0 ayagindaki gerilim olculuyor
  delay(10); // daha dogru bir olcum icin biraz bekleme kullanilmalidir
  float Volt=(LDR_Degeri,0,,1023,0,5);
  Serial.print(LDR_Degeri); 
  Serial.print("\t");
  Serial.println(Volt);
}
