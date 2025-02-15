#include "joss.h"
#include <iostream>

void joss::initialize() {
    currentState = true;
}

void joss::nextState(bool opponentPreviousState) {
    // stepCount++;
    if (opponentPreviousState) {
        if (rand() % 100 < 10) {
            currentState = false;
        }
        else {
            currentState = true;
        }
    }
    else {
        currentState = false;
    }
}
