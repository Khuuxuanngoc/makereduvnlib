// Add the library
#include <MKE_LiquidCrystal_I2C.h>

// LCD config
MKE_LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  // Initialize LCD
  lcd.init();
  lcd.backlight();

  // Display a welcome message
  lcd.setCursor(0, 0);
  lcd.print("Welcome to");
  lcd.setCursor(0, 1);
  lcd.print("LCD1602 Demo");
}

void loop() {
  // No additional functionality for now
}