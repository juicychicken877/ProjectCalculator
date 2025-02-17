#include "Keyboard.hpp"

void Keyboard::Setup() {
  // Create new instance of keyboard
  keyboard = new Keypad(makeKeymap(KEYS), ROW_PINS, COL_PINS, ROWS, COLS);
}

char Keyboard::GetKey() {
  return keyboard->getKey();
}