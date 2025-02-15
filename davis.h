#pragma once

class davis {

public:
    bool currentState;
    int stepCount;
    bool opponentPreviousState;
    bool grudge_taken;

public:
    void initialize();
    void nextState(bool opponentPreviousState);
};

