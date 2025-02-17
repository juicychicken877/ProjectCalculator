#include <LiquidCrystal_I2C.h>

class LCD_Display {
private:
  LiquidCrystal_I2C *lcd;
public:
  void Setup();
  void Clear();
  void Print(String text);
};