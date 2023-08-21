#ifndef WIN_HPP_INCLUDED
#define WIN_HPP_INCLUDED

#include "stats.hpp"

class Win : public Stats
{
public:
    static bool checkForWin(char checkArray[8][8]);

    void winMessage();

    static bool winCondition;
private:
};

#endif  // WIN_HPP_INCLUDED