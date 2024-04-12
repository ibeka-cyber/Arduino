
int kirmiziPin   = 11;
int yesilPin = 9;
int maviPin  = 10;
int kirmizi, yesil, mavi;

void setup() {

  pinMode(kirmiziPin, OUTPUT);
  pinMode(yesilPin,  OUTPUT);
  pinMode(maviPin,   OUTPUT);
  Serial.begin(9600);

}

void loop() {

  kirmizi = random(255);
  yesil = random(255);
  mavi = random(255);
  Serial.println(kirmizi);
  Serial.println(yesil);
  Serial.println(mavi);
  Serial.println("-------------");


  analogWrite(kirmiziPin, kirmizi);
  analogWrite(yesilPin, yesil);
  analogWrite(maviPin, mavi);
  delay(1000);




}



