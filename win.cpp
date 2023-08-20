#include "win.hpp"
#include <iostream>

bool Win::checkForWin(char checkArray[8][8])
{
    for(int ver = 0; ver <= 7; ver++)
    {
        for(int hor = 0; hor <= 7; hor++)
        {
            if(checkArray[ver][hor] == '0')
            {
                return false;
            }
        }
    }
}

void Win::winMessage()
{
    // int turns = 0;              // Muss noch entfernt werden, ist nur da um Fehler beim Compilen zu beheben
    // baseT1.printField();
    std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
    std::cout << "Congratulations!\nYou solved the template correctly!" << std::endl;
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << std::endl;
    // stats.printElapsedTime();
    // std::cout << "\nSie haben zum Loesen des Levels " << Stats::turns << " Zuege benoetigt." << std::endl;       Auskommentiert wegen Compilerfehler!
    std::cout << "Do you want to play again?\n(1): YES\n(2): NO\t";
    std::cin >> playAgain;
    // Hier soll die main nochmal aufgerufen werden
    // evtl. umlagern auf main
}
