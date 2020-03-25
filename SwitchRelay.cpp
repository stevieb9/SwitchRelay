#include "Arduino.h"
#include "SwitchRelay.h"

SwitchRelay::SwitchRelay (int8_t pin) : ArduinoRelay(pin) {}
SwitchRelay::SwitchRelay () : ArduinoRelay() {}

