int x_eksen = A5;
int y_eksen = A4;
int x_durum;
int y_durum;
int in1 = 3;
int in2 = 4;
int in3 = 5;
int in4 = 6;

void setup() {
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);


  Serial.begin(9600);
}
void loop() {
   
  x_durum = analogRead(x_eksen);
  y_durum = analogRead(y_eksen);
  
  Serial.print("x Durum: ");
  Serial.println(x_durum);
  Serial.print("y Durum: ");
  Serial.println(y_durum);
  delay(200);
  
  if (x_durum > 1020) { //ileri
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);
  }
  
  else if (x_durum < 50) { // geri
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
  }
  
  else if (y_durum < 50) { //sağ
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
  }
  
  else if (y_durum > 1020) { // sol
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);
  }
  
  else { // DUR
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);
    digitalWrite(in4, LOW);
  }
}
