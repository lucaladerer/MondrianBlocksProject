#include <iostream>
#include <string> 
#include "Menu.hpp"

// Hier wird die Einleitung ausgegeben
void Menu::printIntroduction()
{
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
    std::cout << "Willkommen bei MondrianBlocks by Luca und Kevin\n" << std::endl;
    std::cout << "Das Spiel funktioniert folgendermassen:\nZunaechst waehlen Sie einen Spielmodus aus.(Hier nur 'Spielen')." << std::endl;
    std::cout << "Anschliessend koennen Sie aus 3 verschiedenen Vorlagen auswaehlen." << std::endl;
    std::cout << "Das Ziel des Spiels ist nun, das 8x8 grosse Spielfeld mit den vorhandenen Bloecken zu fuellen.\n" << std::endl;
    std::cout << "Viel Spass!" << std::endl;
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << std::endl;
}

// Hier wird der Spielmodus ausgewählt. Der Solver ist hier nicht spielbar, aber für die Vollständigkeit trotzdem vorhanden
bool Menu::chooseGamemode()
{
    std::cout << "Waehlen Sie einen Spielmodus:\n(1) - Spielen\n(2) - Solver" << std::endl;
    std::cin >> m_gamemode;
    std::cout << std::endl;

    switch (m_gamemode)
    {
    //bool 0 = Spielen, bool 1 = Soler
    case 1:
        std::cout << "Sie haben sich fuer den Spielmodus 'Spielen' entschieden!" << std::endl;
        return 0;
    case 2:
        std::cout << "\n*WIP* ... Work In Progress ... *WIP*\t\tWaehlen Sie erneut!\n" << std::endl;
        return chooseGamemode();
    }
}

// Hier werden 3 Vorlagen in der Konsole ausgegeben. Im Anschluss wird über den Input die Vorlage ausgewählt.
int Menu::chooseTemplate()
{
    std::cout << "Folgende Vorlagen stehen zur Verfuegung\n" << std::endl;
    
    std::cout << "Vorlage No.1:" << std::endl;
    template1.template1();
    template1.printTemplate(1);

    std::cout << "Vorlage No.2:" << std::endl;
    template2.template2();
    template2.printTemplate(2);    

    std::cout << "Vorlage No.3:" << std::endl;
    template3.template3();
    template3.printTemplate(3);

    std::cout << "Waehlen Sie nun eine Vorlage aus:\t";
    std::cin >> m_chosenTemplate;

    switch (m_chosenTemplate)
    {
        case 1:
            std::cout << "Sie haben sich fuer Vorlage No.1 entschieden." << std::endl;
            // baseT1.printField();
            return 1;
        
        case 2:
            std::cout << "Sie haben sich fuer Vorlage No.2 entschieden." << std::endl;
            // baseT2.printField();
            return 2;
        
        case 3:
            std::cout << "Sie haben sich fuer Vorlage No.3 entschieden." << std::endl;
            // baseT3.printField();
            return 3;
        
        default:
            std::cout << "\n*Ungueltige Eingabe! Waehlen Sie erneut*\n\n" << std::endl;
            chooseTemplate();
    }
    
}