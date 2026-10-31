#pragma once

#include <Arduino.h>
#include <helpers/RefCountedDigitalPin.h>
#include <helpers/ESP32Board.h>

class MKES3PlusBoard : public ESP32Board {
public:
#ifdef PIN_VEXT_EN
  RefCountedDigitalPin periph_power;
  MKES3PlusBoard() : periph_power(PIN_VEXT_EN, PIN_VEXT_EN_ACTIVE) { }
#else
  MKES3PlusBoard() { }
#endif

  void begin() {
    ESP32Board::begin();
#ifdef PIN_VEXT_EN
    periph_power.begin();
#endif
  }

  const char* getManufacturerName() const override {
    return "MakerEDU ESP32-S3+";
  }
};
