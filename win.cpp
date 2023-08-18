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
    return true;
}

void Win::winMessage()
{
    // int turns = 0;              // Muss noch entfernt werden, ist nur da um Fehler beim Compilen zu beheben
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
    std::cout << "Herzlichen Glueckwunsch!\nSie haben das Level erfolgreich geloest!" << std::endl;
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
    // stats.printElapsedTime();
    // std::cout << "\nSie haben zum Loesen des Levels " << Stats::turns << " Zuege benoetigt." << std::endl;       Auskommentiert wegen Compilerfehler!
    std::cout << "Wollen Sie nochmal spielen?\n(1): JA\n(2): Nein\t";
    std::cin >> playAgain;
    // Hier soll die main nochmal aufgerufen werden
    // evtl. umlagern auf main
}
