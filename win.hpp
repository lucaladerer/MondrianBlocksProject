#ifndef WIN_HPP_INCLUDED
#define WIN_HPP_INCLUDED

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

#endif  // WIN_HPP_INCLUDED