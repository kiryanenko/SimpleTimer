//
// Created by kiryanenko on 05.10.19.
// Patched by rückix to match the logic of https://www.gammon.com.au/millis
//

#include "SimpleTimer.h"

SimpleTimer::SimpleTimer(uint32_t interval) : _interval(interval) {
    _start = millis();
}

bool SimpleTimer::isReady() {
    
    return millis() - _start >= _interval;
}

void SimpleTimer::setInterval(uint32_t interval) {
    _interval = interval;
}

void SimpleTimer::reset() {
    _start = millis();
}
