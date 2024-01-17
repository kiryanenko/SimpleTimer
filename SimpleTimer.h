//
// Created by kiryanenko on 05.10.19.
// Modified by tobigr on 17.01.24.
//

#ifndef LED_LIGHTING_SIMPLETIMER_H
#define LED_LIGHTING_SIMPLETIMER_H

#include <Arduino.h>

class SimpleTimer {
    uint64_t _start;
    uint64_t _interval;
    bool _disabled = false;

public:
    /// Constructor, that initialize timer
    /// \param interval An interval in msec
    explicit SimpleTimer(uint64_t interval = 0);
    /// Check if timer is ready
    /// \return True if is timer is ready
    bool isReady();
    /// Set the time interval
    /// \param interval An interval in msec
    void setInterval(uint64_t interval);
    /// Reset a timer
    void reset();
    /// Disable the timer. It will not be ready although the time is up
    void disable();
    /// Enable the timer. A disabled timer is enabled again
    void enable();
};


#endif //LED_LIGHTING_SIMPLETIMER_H
