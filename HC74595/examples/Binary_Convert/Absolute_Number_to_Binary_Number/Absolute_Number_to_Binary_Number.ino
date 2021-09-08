//  Produced by Dinura Pasan in June 2020 and distributed free of charge.
//  Controlling the 74HC595 shift registers IC from within the Arduino environment.
//  Source Code --> https://github.com/DinuraPasan/Arduino_Core_Libraries/74HC595/
//  Convert absolute number binary.

uint8_t SER     = 10;  // pin 14 on the 74HC595  outher name DS pin(data pin)
uint8_t RCLK    = 11;  // pin 12 on the 74HC595  outher name ST_CP pin(latch pin)
uint8_t SRCLK   = 12;  // pin 11 on the 74HC595  outher name SH_CP pin(clock pin)
uint8_t NUMOFIC = 2;   // Number of IC

#include <HC74595.h>
HC74595 Shift(NUMOFIC, SER, RCLK, SRCLK);

void setup() {}

void loop() {
  for (int i = 0; i <= 255; i++) {
    Shift.NumberToBinary(i, true);   // Syntax(int Number, boolean(Left or Right));
    delay(100);
  }
  for (int i = 0; i <= 255; i++) {
    Shift.NumberToBinary(i, false);
    delay(100);
  }
}