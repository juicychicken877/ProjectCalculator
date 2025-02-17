#include "LCD_Display.hpp"

void LCD_Display::Setup() {
  // Create new instance of lcd
  lcd = new LiquidCrystal_I2C(0x27, 16, 2);

  lcd->init();
  lcd->backlight();
  lcd->setCursor(0, 0);
}

void LCD_Display::Clear() {
  lcd->clear();
}

void LCD_Display::Print(String text) {
  lcd->print(text);
}