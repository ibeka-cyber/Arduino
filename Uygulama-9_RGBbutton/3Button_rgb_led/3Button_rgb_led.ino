
int Button1 = 2;
int Button2 = 3;
int Button3 = 4;

int kirmiziPin   = 11;
int yesilPin = 9;
int maviPin  = 10;

void setup() {

  pinMode(Button1, INPUT);
  pinMode(Button2, INPUT);
  pinMode(Button3, INPUT);
  pinMode(kirmiziPin, OUTPUT);
  pinMode(yesilPin,  OUTPUT);
  pinMode(maviPin,   OUTPUT);
  Serial.begin(9600);

}

void loop() {

  if (digitalRead(Button1) == 1)
  {
    renkDegistir(255, 0, 0);
    Serial.println("Kirmizi Yandi");
    delay(1000);

  }
  else if (digitalRead(Button2) == 1)
  {
    renkDegistir(0, 0, 255);
    Serial.println("Mavi Yandi");
     delay(1000);

  }
  else if (digitalRead(Button3) == 1)
  {
    renkDegistir(0, 255, 0);
    Serial.println("Yesil Yandi");
     delay(1000);

  }
 



}

void renkDegistir(int kirmizi, int yesil, int mavi) {
  analogWrite(kirmiziPin, kirmizi);
  analogWrite(yesilPin, yesil);
  analogWrite(maviPin, mavi);
}
