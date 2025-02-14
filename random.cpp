#include "random.h"
#include <iostream>

void random::initialize() {
    score = 0;
}

void random::nextState() {
    if (rand() % 100 < 50) {
        currentState = true;
    }
    else {
        currentState = false;
    }
}
