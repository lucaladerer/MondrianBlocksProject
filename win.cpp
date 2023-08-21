#include "win.hpp"
#include <iostream>

// set static variable to false --> needed to end the loop while(unresolved) in main
bool Win::winCondition = false;

// go through array and check every element --> if '0' then there is an empty field
bool Win::checkForWin(char checkArray[8][8])
{
    winCondition = true;
    for(int ver = 0; ver <= 7; ver++)
    {
        for(int hor = 0; hor <= 7; hor++)
        {
            if(checkArray[ver][hor] == '0')
            {
                winCondition = false;
                return false;
            }
        }
    }
}

// print the win message and show the stats
void Win::winMessage()
{
    std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
    std::cout << "Congratulations!\nYou solved the template correctly!" << std::endl;
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << std::endl;
    std::cout << "Stats:\tYou needed " << turns << " turns to solve the Level" << std::endl;

    Stats::printElapsedTime();
    std::cout << std::endl;
}