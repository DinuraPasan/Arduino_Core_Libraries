//  Produced by Dinura Pasan in June 2020 and distributed free of charge.
//  Controlling the 74HC595 shift registers IC from within the Arduino environment.
//  Source Code --> https://github.com/DinuraPasan/Arduino_Core_Libraries/74HC595/

#ifndef HC74595_h
#define HC74595_h
#include <Arduino.h>

class HC74595 {
  public:
    HC74595(uint8_t IC, uint8_t SER, uint8_t RCLK, uint8_t SRCLK);
    void Update();
    void NoUpdate(int index, bool V);
    void SetAll(bool V);
    void NumberToBinary(int valve, bool V);
    void CharacterToBinary(char val, bool V);
    void Location(bool valve, int pin, int Location[]);
    void Sevensegment(uint8_t val, uint8_t NU, uint8_t Max, bool V);
    void SegmentNumber(double val, uint8_t NU, uint8_t Max, bool V);
    void SegmentNumber(int val, uint8_t NU, uint8_t Max, bool V);
    void LEDdesing1(int d, uint8_t pin);
    void LEDdesing2(int d, uint8_t pin);
    void LEDdesing3(uint8_t count, int d, uint8_t Min, uint8_t Max, bool V);
    void LEDdesing4(uint8_t count, int d, uint8_t Min, uint8_t Max);
    void LEDdesing5(uint8_t count, int d, uint8_t Min, uint8_t Max);
    void LEDdesing6(uint8_t count, int d, uint8_t Min, uint8_t Max, uint8_t devide);
  private:
    uint8_t _IC;
    uint8_t _SER;
    uint8_t _RCLK;
    uint8_t _SRCLK;
    uint8_t *D;
    uint8_t N[20] = {
      63, 6, 91, 79, 102, 109, 125, 7, 127, 111, 191, 134, 219, 207, 230, 237, 253, 135, 255, 239
    };
};
#endif