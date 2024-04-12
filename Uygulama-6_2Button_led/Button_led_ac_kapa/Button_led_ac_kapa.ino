int Led = 4;
int Button1 = 2;
int Button2 = 3;

void setup() {

  pinMode(Led, OUTPUT);
  pinMode(Button1, INPUT);
  pinMode(Button2, INPUT);



}

void loop() {
  if (digitalRead(Button1) == 1)
  {

    digitalWrite(Led, HIGH);

  }
  else if (digitalRead(Button2) == 1)
  {
    digitalWrite(Led, LOW);
  }
}
