
int led_pin1 = 9; // 9 numaralı pini 1.led icin tanımlıyoruz
int led_pin2 = 10; // 9 numaralı pini 1.led icin tanımlıyoruz
int led_pin3 = 11; // 9 numaralı pini 1.led icin tanımlıyoruz

void setup() {

  pinMode(led_pin1, OUTPUT); // 9'üncü pini çıkış olarak ayarlıyoruz
  pinMode(led_pin2, OUTPUT); // 9'üncü pini çıkış olarak ayarlıyoruz
  pinMode(led_pin3, OUTPUT); // 9'üncü pini çıkış olarak ayarlıyoruz

}

void loop() {

  digitalWrite(led_pin1, HIGH);
  delay(3000); 
  digitalWrite(led_pin1,LOW);

  digitalWrite(led_pin2, HIGH);
  delay(500); 
  digitalWrite(led_pin2,LOW);

  digitalWrite(led_pin3, HIGH);
  delay(2000); 
  digitalWrite(led_pin3,LOW);
  
  
}
