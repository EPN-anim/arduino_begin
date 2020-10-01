#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);

#define ub  2
#define db  3
#define rb  4
#define lb  5

int vu = 0;
int vd = 0;
int vr = 0;
int vl = 0;

void setup () {
  lcd.init();
  lcd.backlight();
  pinMode(ub,INPUT);
  pinMode(db,INPUT);
  pinMode(rb,INPUT);
  pinMode(lb,INPUT);
  Serial.begin(9600);
}

void loop () {
  vu = (digitalRead(ub));
  vd = (digitalRead(db));
  vr = (digitalRead(rb));
  vl = (digitalRead(lb));

  if (vu == HIGH) {
    Serial.println("first button");
    lcd.setCursor(0,1);
    lcd.print("first button");
  }

  else if (vd == HIGH) {
    Serial.println("second button");
    lcd.setCursor(0,1);
    lcd.print("second button");
    
  }

 else if (vr == HIGH) {
    Serial.println("third button");
    lcd.setCursor(0,1);
    lcd.print("third button");
    
  }

 else if (vl == HIGH) {
    Serial.println("fourth button");
    lcd.setCursor(0,1);
    lcd.print("fourth button");
    
    
  } else if ((vu == LOW)&&(vd == LOW) && (vr == LOW) && (vl == LOW)) {
    Serial.println("no button");
    lcd.setCursor(0,0);
    lcd.print("no button");
  }
}

























 
