#include "tit_for_tat.h"
#include <iostream>

void tit_for_tat::initialize() {
    opponentPreviousState = true;
    score = 0;
}

void tit_for_tat::nextState(int opponentPreviousState) {
    if (opponentPreviousState) {
        currentState = true;
    }
    else {
        currentState = false;
    }
}
