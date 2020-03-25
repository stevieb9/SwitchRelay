#ifndef SWITCHRELAY_H
#define SWITCHRELAY_H

#include "Arduino.h"
#include "../ArduinoRelay/ArduinoRelay.h"

using namespace std;

class SwitchRelay : public ArduinoRelay {

    public:
        SwitchRelay(int8_t pin);
        SwitchRelay();
};

#endif

