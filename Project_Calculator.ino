#include "LCD_Display.hpp"
#include "Keyboard.hpp"
#include "Calculator.hpp"

LCD_Display display;
Keyboard keyboard;
Calculator calculator;

void setup() {
  display.Setup();
  keyboard.Setup();
}

void loop() {
  char key = keyboard.GetKey();

  if (key) {
    display.Print(String(key));
  }
}
