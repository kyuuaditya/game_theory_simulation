#include "random.h"
#include <iostream>

void random::initialize() {
    currentState = true;
}

void random::nextState() {
    if (rand() % 100 < 50) {
        currentState = true;
    }
    else {
        currentState = false;
    }
}
