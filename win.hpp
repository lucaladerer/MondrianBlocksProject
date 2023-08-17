#ifndef WIN_HPP_INCLUDED
#define WIN_HPP_INCLUDED

#include "stats.hpp"
#include "blocks.hpp"

class Win : public Stats, public Blocks
{
public:
    static bool checkForWin(char checkArray[8][8]);

    void winMessage();
private:
    bool playAgain;
};

#endif  // WIN_HPP_INCLUDED