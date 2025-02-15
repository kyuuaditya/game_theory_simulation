#pragma once

class joss {

public:
    bool currentState;
    bool opponentPreviousState;

public:
    void initialize();
    void nextState(bool opponentPreviousStat);
};

