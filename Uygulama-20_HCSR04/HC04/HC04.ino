#define trigPin 9
#define echoPin 8
#define led1 2
#define led2 3
#define led3 4


void setup() {
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);

}
void loop() {
  long sure, mesafe;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  sure = pulseIn(echoPin, HIGH);

  mesafe = (sure / 2) / 29.1;

  if (mesafe <= 20 && mesafe >= 16 ) {
    Serial.println(mesafe);
    Serial.println(" cm");
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
  }
  else if (mesafe <= 15 && mesafe >= 11) {
    Serial.print(mesafe);
    Serial.println(" cm");
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, LOW);
  }
  else if (mesafe <= 10) {
    Serial.print(mesafe);
    Serial.println(" cm");
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
  }
  delay(500);
}
