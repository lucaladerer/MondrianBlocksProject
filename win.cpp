// #include "win.hpp"
// #include <iostream>

// bool Win::checkForWin()
// {
//     for(int ver = 0; ver <= 7; ver++)
//     {
//         for(int hor = 0; hor <= 7; hor++)
//         {
//             if(checkArray[ver][hor] != '0')
//             {
//                 noZero = true;
//             }
//             else
//             {
//                 noZero = false;
//             }
//         }
//     }
//     return noZero;
// }

// void Win::winMessage()
// {
//     std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
//     std::cout << "Herzlichen Glueckwunsch!\nSie haben das Level erfolgreich geloest!" << std::endl;
//     std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
//     std::cout << "\nIhre Zeit betrug " mins " und Sie haben zum Loesen des Levels " turns " Zuege benoetigt." << std::endl;
//     std::cout << "Wollen Sie nochmal spielen?\n(1): JA\n(2): Nein\t";
//     std::cin >> playAgain;
// }