#include "good_guy.h"
#include <iostream>

void good_guy::initialize() {
    score = 0;
}

void good_guy::nextState() {
    currentState = true;
}
