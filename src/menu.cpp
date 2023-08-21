#include <iostream>
#include <string> 
#include "menu.hpp"

// constructor and destructor definitions for Class Menu
Menu::Menu() {}
Menu::~Menu() {}

// print the Introduction
void Menu::printIntroduction()
{
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
    std::cout << "Welcome to MondrianBlocks by Luca and Kevin\n" << std::endl;
    std::cout << "The game works like this:\nPick a gamemode first. (In this version only 'Play' is available)." << std::endl;
    std::cout << "In the next step you can pick one of three templates." << std::endl;
    std::cout << "The goal is to fill the 8x8 field with the available blocks.\n" << std::endl;
    std::cout << "** Hint for placing Blocks: You always enter the coordinates of the top left element of the Block! **\n" << std::endl;
    std::cout << "Have fun!" << std::endl;
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << std::endl;
}

// Here you choose the gamemode. Solver is not playable but choosable in the Menu  (WIP)
bool Menu::chooseGamemode()
{
    char tempMode;
    std::cout << "Pick a gamemode:\n(1) - Play\n(2) - Solver" << std::endl;
    std::cin >> tempMode;
    std::cout << std::endl;

    switch (tempMode)
    {
    //bool 0 = play; bool 1 = Solver
    case '1':
        std::cout << "You chose the gamemode 'Play'!" << std::endl;
        m_gamemode = 1;
        return false;
    case '2':
        std::cout << "\n*WIP* ... Work In Progress ... *WIP*\t\tPlease pick again!\n" << std::endl;
        m_gamemode = 2;
        return true;
    default:    //wrong input
        std::cout << "Wrong input, please choose again (type in 1 or 2)." << std::endl;
        return true;
    }
}

// 3 different Templates will be printed to the console. Template will be chosen through user input.
int Menu::chooseTemplate()
{
    // print templates to choose
    std::cout << "Choose from one of the following templates:\n" << std::endl;
    std::cout << "Template No.1:" << std::endl;
    template1.template1();
    template1.printTemplate(1);

    std::cout << "Template No.2:" << std::endl;
    template2.template2();
    template2.printTemplate(2);    

    std::cout << "Template No.3:" << std::endl;
    template3.template3();
    template3.printTemplate(3);

    // user input + return what template you chose
    std::cout << "Pick your template:\t";
    char tempPick;
    std::cin >> tempPick;
    switch (tempPick)
    {
        case '1':
            std::cout << "You picked template No.1." << std::endl;
            m_chosenTemplate = 1;
            return 1;
        
        case '2':
            std::cout << "You picked template No.2." << std::endl;
            m_chosenTemplate = 2;
            return 2;
        
        case '3':
            std::cout << "You picked template No.3." << std::endl;
            m_chosenTemplate = 3;
            return 3;
        
        default:
            std::cout << "\n*Wrong input! Please pick again*\n\n" << std::endl;
            return 0;
    }
    
}