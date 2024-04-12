#include <LiquidCrystal.h> 
LiquidCrystal lcd(12,11,5,4,3,2); //LCD nin arduino üzerinde bağlandığı pinler
void setup(){
lcd.begin(16,2);
}
void loop(){
int i;
lcd.setCursor(3,0);
lcd.print("ROBKOD"); // İstediğinizi yazabilirsiniz. Tabi 16 karakter den küçük olmalı...
for(i=0; i<17; i++)
{
lcd.setCursor(i,1);
lcd.print("KOCAELİ"); // İstediğinizi yazabilirsiniz. Tabi 16 karakter den küçük olmalı...
delay(1000);
lcd.setCursor(i,1);
lcd.print("                ");
}
}
