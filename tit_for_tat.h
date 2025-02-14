#pragma once

class tit_for_tat {

public:
    bool currentState;
    bool opponentPreviousState;

public:
    void initialize();
    void nextState(int opponentPreviousState);
};

