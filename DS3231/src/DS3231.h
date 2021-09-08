//  Produced by Dinura Pasan in June 2020 and distributed free of charge.
//  Controlling the DS3231 RTC IC from within the Arduino environment.
//  Source Code --> https://github.com/DinuraPasan/Arduino_Core_Libraries/DS3231/

#ifndef DS3231_h
#define DS3231_h
#include <Arduino.h>
#include <Wire.h>

class DS3231 {
  public:
    DS3231(uint8_t V);
    uint8_t GetAgingOffset();
    uint8_t Second();
    uint8_t Minute();
    uint8_t Hour();
    uint8_t Day();
    uint8_t Date();
    uint8_t Month();
    float Converter(uint8_t V, float val);
    float Temperature();
    String Weekday(int y, uint8_t m, uint8_t d);
    String NameOfMonth();
    String NameOfDay();
    void TimeCal(uint8_t H0, uint8_t M0, uint8_t S0, uint8_t H1, uint8_t M1, uint8_t S1, uint8_t out[3], bool V);
    void DateCal(int Y0, uint8_t M0, uint8_t D0, int Y1, uint8_t M1, uint8_t D1, int out[3], bool V);
    void Return_Alarm(uint8_t month, uint8_t VV, uint8_t HH, uint8_t MM, uint8_t SS, uint8_t RT[5]);
    void Set(int YY, uint8_t MM, uint8_t DD, uint8_t HH, uint8_t mm, uint8_t SS, uint8_t WEAK);
    void Alarm_Write(uint8_t VV, uint8_t HH, uint8_t MM, uint8_t SS, bool Alarm);
    void Next_Alarm(bool V, uint8_t AT[4], uint8_t RT[4]);
    void SQW_Pin(bool BS, uint8_t SQ);
    void Alarm_Interrupt(uint8_t SQ);
    void SetAgingOffset(uint8_t V);
    void Oscillator(bool V);
    void EN32K_Pin(bool V);
    bool Alarm_State(bool V);
    bool Oscillator_State();
    int Year();
  private:
    int _Year;
    bool Year100 = false;
    uint8_t BTD(uint8_t V);
    uint8_t DTB(uint8_t V);
};
#endif