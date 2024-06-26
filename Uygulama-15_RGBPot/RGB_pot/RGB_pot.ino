int pGiris = 0; //Potansiyometre A0 'a bağlı
int pDeger = 0; //Bu değişken potansometre değerini tutacak, başlangıçta sıfırlıyoruz
 
int kirmizi = 9;  
int yesil = 10;  
int mavi = 11;  
 
int kDeger = 0; //kirmizi değer
int yDeger = 0; // yeşil değer
int mDeger = 0; // mavi Değer
 
void setup()
{
  pinMode(kirmizi, OUTPUT);   
  pinMode(yesil, OUTPUT);   
  pinMode(mavi, OUTPUT); 
}
 
// ana program
void loop()
{
  pDeger = analogRead(pGiris);   // Potansiyometre değerini okuyoruz
 
  if (pDeger < 341)  // Potansyometre aralığının en düşük bölümü (0-340)
  {                  
    pDeger = (pDeger * 3) / 4; // 0-255 arasına çekiyoruz
 
    kDeger = 256 - pDeger;  
    yDeger = pDeger;        
    mDeger = 1;            
  }
  else if (pDeger < 682) // Potansiyometre aralığının ortası (341-681)
  {
    pDeger = ( (pDeger-341) * 3) / 4; // 0-255 arasına çekiyoruz
 
    kDeger = 1;           
    yDeger = 256 - pDeger;
    mDeger = pDeger;       
  }
  else  
  {
    pDeger = ( (pDeger-683) * 3) / 4; // 0-255 arasına çekiyoruz
 
    kDeger = pDeger;    
    yDeger = 1;           
    mDeger= 256 - pDeger; 
  }

//RGB ledimize değerleri gönderiyoruz
  analogWrite(kirmizi, kDeger);  
  analogWrite(yesil, yDeger); 
  analogWrite(mavi, mDeger);  
}
