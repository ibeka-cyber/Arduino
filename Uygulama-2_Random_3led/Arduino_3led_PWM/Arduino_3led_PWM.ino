

void setup() {

  pinMode(9, OUTPUT); // 9'üncü pini çıkış olarak ayarlıyoruz
  pinMode(10, OUTPUT); // 10'üncü pini çıkış olarak ayarlıyoruz
  pinMode(11, OUTPUT); //11'üncü pini çıkış olarak ayarlıyoruz

}

void loop() {

  analogWrite(9, random(120) + 135);   // 1. lede 135 ile 255 arasında rastgele bir pwm uyguluyoruz.
  analogWrite(10, random(120) + 135);   // 2. lede 135 ile 255 arasında rastgele bir pwm uyguluyoruz.
  analogWrite(11, random(120) + 135);   // 3. lede 135 ile 255 arasında rastgele bir pwm uyguluyoruz.
  delay(random(100));                         // Rastgele 0 ile 100 ms bekletiyoruz.
}
