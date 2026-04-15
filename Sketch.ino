#include <Wire.h>
#include <LiquidCrystal_I2C.h>


LiquidCrystal_I2C lcd(0x27, 16, 2);


String pesan = "Belajar 5 menit, istirahat 5 jam";


String buffer = "                " + pesan + "                ";

int offset = 0;

void setup() {
  lcd.init();
  lcd.backlight();
}

void loop() {
  
  lcd.setCursor(5, 0);
  lcd.print("QUOTE");

  
  lcd.setCursor(0, 1);
  lcd.print(buffer.substring(offset, offset + 16));

  delay(300);
  offset++;

  
  if (offset > buffer.length() - 16) {
    offset = 0;
  }
}
