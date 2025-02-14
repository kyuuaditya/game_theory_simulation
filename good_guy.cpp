#include "good_guy.h"
#include <iostream>

void good_guy::initialize() {
    score = 0;
    currentState = true;
}

void good_guy::nextState() {
    currentState = true;
}
