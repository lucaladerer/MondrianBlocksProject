#include "menu.hpp"
#include <iostream>

int main()
{
    Menu startMenu;
    startMenu.printIntroduction();
    startMenu.chooseGamemode();

    int chosenTemplate = startMenu.chooseTemplate();

    std::cout << chosenTemplate << std::endl;

    // Game game1;
    // game1.printField(chosenTemplate);
    // Vorschlag!

    return 0;
}