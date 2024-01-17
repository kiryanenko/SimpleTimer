//
// Created by kiryanenko on 05.10.19.
// Modified by tobigr on 17.01.24.
//

#include "SimpleTimer.h"

SimpleTimer::SimpleTimer(uint64_t interval) : _interval(interval) {
    _start = millis();
    _disabled = false;
}

bool SimpleTimer::isReady() {
    return !_disabled && _start + _interval <= millis();
}

void SimpleTimer::setInterval(uint64_t interval) {
    _interval = interval;
}

void SimpleTimer::reset() {
    _start = millis();
}

void SimpleTimer::disable() {
    _disabled = true;
}

void SimpleTimer::enable() {
    _disabled = false;
}

