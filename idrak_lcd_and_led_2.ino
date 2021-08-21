#include<LiquidCrystal.h>
int o=0;
int i=0;
  LiquidCrystal lcd(2,3,4,5,6,7);
void setup() {

  lcd.begin(16,2);
  pinMode(13,OUTPUT);
  digitalWrite(13,0);
}

void loop() {
lcd.setCursor(0,0);
  lcd.print("Idrak");
  lcd.setCursor(0,1);
  lcd.print(i);
  if(i%2==0){
    if(o==0)    
    o=1;
    else    
    o=0;
    }
    digitalWrite(13,o);
  i++;
  
  delay(500);

}
