#ifndef TEMPERATURERELAY_H
#define TEMPERATURERELAY_H

#include "Arduino.h"
#include "../ArduinoRelay/ArduinoRelay.h"

#define MODE_HEAT   true
#define MODE_COOL   false

using namespace std;

class SwitchRelay : public ArduinoRelay {

    public:
        SwitchRelay(int8_t pin);
        SwitchRelay();
};

#endif

