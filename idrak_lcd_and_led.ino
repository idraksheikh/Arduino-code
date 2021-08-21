#include <LiquidCrystal.h>
LiquidCrystal lcd(2,3,4,5,6,7);
void setup() {
  pinMode(13,OUTPUT);
  digitalWrite(13,0);
  lcd.begin(16, 2);
 }
void loop() {  
  int i=0;
    lcd.print("HELLO WORLD.");
  lcd.setCursor(0,1);
  lcd.print(i);
  if(i%2==0){
  digitalWrite(13,1);
  }
  else{
    digitalWrite(13,0);
    }  
  delay(500);
  lcd.clear();
  }

