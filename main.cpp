#include <sfml/graphics.hpp>
#include <iostream>

#include "tit_for_tat.h"
#include "good_guy.h"

int main() {
    // define class
    tit_for_tat tit_for_tat;
    good_guy good_guy;

    // initialize all variables
    tit_for_tat.initialize();
    good_guy.initialize();

    // call the 2 functions 
    tit_for_tat.nextState(tit_for_tat.opponentPreviousState);
    good_guy.nextState();

    // running the simulation
    for (int i = 0;i < 1;i++) {
        if (tit_for_tat.currentState == true && good_guy.currentState == false) {
            tit_for_tat.score += 3;
        }
        else if (tit_for_tat.currentState == false && good_guy.currentState == true) {
            good_guy.score += 3;
        }
        else if (tit_for_tat.currentState == false && good_guy.currentState == false) {
            tit_for_tat.score++;
            good_guy.score++;
        }
        else if (tit_for_tat.currentState == true && good_guy.currentState == true) {
            tit_for_tat.score += 2;
            good_guy.score += 2;
        }
    }
    std::cout << tit_for_tat.score << " " << good_guy.score << std::endl;
}