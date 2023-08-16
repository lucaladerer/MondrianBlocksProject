#pragma once
#include "stats.hpp"

class Win : public Stats
{
public:
    bool checkForWin(char checkArray);

    void winMessage();
private:
    bool noZero;
    bool playAgain;
};