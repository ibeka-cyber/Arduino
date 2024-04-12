
void setup() {
  Serial.begin(9600);
  pinMode(A0,INPUT);
  pinMode(9,OUTPUT);
}
void loop() {
  int Sensor_Degeri = analogRead(A0); 
  delay(10); 
  
  Serial.println(Sensor_Degeri); 
  map(Sensor_Degeri,0,1023,0,255);
  analogWrite(9,Sensor_Degeri);
  
}
