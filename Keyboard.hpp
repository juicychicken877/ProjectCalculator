#include <Keypad.h>

class Keyboard {
private:
  Keypad *keyboard;

  static const byte ROWS = 5;
  static const byte COLS = 5;

  const byte ROW_PINS[ROWS] = {2, 3, 4, 5, 6};
  const byte COL_PINS[COLS] = {8, 9, 10, 11, 12};

  const char KEYS[ROWS][COLS] = {
    'C', '(', ')', '*', 'X',
    '7', '8', '9', '/', 'S',
    '4', '5', '6', '+', 'P',
    '1', '2', '3', '-', '^',
    '%', '0', '.', '=', 'D',
  };
  /*
    C - clear
    X - remove one character
    S - square root
    P - power
    D - down (^ is up)
    
    replace asap 
  */
public:
  void Setup();
  char GetKey();
};