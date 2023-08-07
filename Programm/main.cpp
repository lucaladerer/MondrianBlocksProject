#include "menu.hpp"
#include <iostream>

int main()
{
    Menu menu;
    menu.printIntroduction();
    menu.chooseGamemode();
    menu.chooseTemplate();
    return 0;
}