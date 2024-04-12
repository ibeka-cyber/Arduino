int ledler[6] = {2, 3, 4, 5, 6, 7}; // 6 elemanlı bir dizi içinde tüm pinlerimizi tanımlıyoruz.



void setup() {
  for (int led = 2; led < 8; led++)   // for döngüsü ile dizi içinde tanımladığımız tüm pinleri çıkış olarak ayarlıyoruz.
  {
    pinMode(led, OUTPUT);
  }


}

void loop() {
   for (int led = 2; led < 8; led++)    // for döngüsü ile ledleri sıra ile açıp kapatıyoruz.
  {
   digitalWrite(led,HIGH);
   delay(1000);
   digitalWrite(led,LOW);
  
  }

}
