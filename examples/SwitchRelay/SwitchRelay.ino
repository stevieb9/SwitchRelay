#include "SwitchRelay.h"

#define RELAY_PIN   2
#define TEMP   78

SwitchRelay ctr(RELAY_PIN);

//SwitchRelay ctr();

void setup() {
    /* Reverse: On = LOW, Off = HIGH */
    //ctr.reverse(true);
}

void loop() {
    /* Turn on, then off the relay */
    ctr.turnOn();
    ctr.turnOff();

    /* Check the current state of the pin */
    bool state = ctr.state();

    /* Check reverse state */
    bool reversed = ctr.reverse();
    
    /* Get/set the relay pin */
    int8_t = ctr.pin();
    //ctr.pin(RELAY_PIN);

    /* Disable the relay */
    //ctr.pin(-1);
}
