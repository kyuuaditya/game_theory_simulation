#include <sfml/graphics.hpp>
#include <iostream>

#include "tit_for_tat.h"
#include "good_guy.h"
#include "random.h"
#include "FirstByDavis.h"

int main() {
    srand(time(0));
    // define class
    tit_for_tat tit_for_tat;
    good_guy good_guy;
    random random;
    FirstByDavis FirstByDavis;

    // initialize all variables
    tit_for_tat.initialize();
    good_guy.initialize();
    random.initialize();
    FirstByDavis.initialize();

    // call the 2 functions 
    // random.nextState();

    bool player1Move;
    bool player2Move;
    int player1Score = 0;
    int player2Score = 0;

    // running the simulation
    for (int i = 0;i < 30;i++) {
        player1Move = tit_for_tat.currentState;
        // player2Move = good_guy.currentState;
        // player2Move = random.currentState;
        player2Move = FirstByDavis.currentState;
        if (player1Move == true && player2Move == false) {
            player2Score += 5;
        }
        else if (player1Move == false && player2Move == true) {
            player1Score += 5;
        }
        else if (player1Move == false && player2Move == false) {
            player1Score++;
            player2Score++;
        }
        else if (player1Move == true && player2Move == true) {
            player1Score += 3;
            player2Score += 3;
        }
        tit_for_tat.nextState(player2Move);
        // good_guy.nextState();
        // random.nextState();
        FirstByDavis.nextState(player1Move);
        std::cout << player1Score << " " << player2Score << std::endl;
    }
}