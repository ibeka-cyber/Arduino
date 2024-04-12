int ldr=A0;
int deger;
void setup() {
  pinMode(ldr, INPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  Serial.begin(9600);
}
void loop() {
 deger=analogRead(ldr);
 delay(1000);
if (deger<300)
{
  Serial.println("1.led");
   Serial.println(deger);
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
}
else if(deger>=300 && deger<500)
{
   Serial.println("2.led");
   Serial.println(deger);
  digitalWrite(8,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(9,LOW);
}
else if(deger>=500 && deger<1000)
{
   Serial.println("3.led");
   Serial.println(deger);
  digitalWrite(9,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
}
}
