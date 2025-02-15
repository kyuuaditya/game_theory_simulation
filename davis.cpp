#include "davis.h"
#include <iostream>

void davis::initialize() {
    stepCount = 0;
    currentState = true;
}

void davis::nextState(bool opponentPreviousState) {
    stepCount++;
    if (stepCount < 10) {
        currentState = true;
    }
    else if (opponentPreviousState && !grudge_taken) {
        currentState = true;
    }
    else {
        grudge_taken = true;
        currentState = false;
    }
}
