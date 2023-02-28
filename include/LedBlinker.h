//
// Created by Sudhir on 2/27/2023.
//

#ifndef PICOPROJECTS_LEDBLINKER_H
#define PICOPROJECTS_LEDBLINKER_H

#include <pico/stdlib.h>
#include <stdint.h>
#include <Led.h>

class LedBlinker {
private:
    Led led;
    unsigned long lastTimeBlinked;
    unsigned long blinkDelay;

    void toggleLed();
public:
    LedBlinker() {}
    LedBlinker(Led &led);
    LedBlinker(Led &led, unsigned long blinkDelay);

    void initLed();

    void update();

    unsigned long getBlinkDelay();
    void setBlinkDelay(unsigned long blinkDelay);
};


#endif //PICOPROJECTS_LEDBLINKER_H
