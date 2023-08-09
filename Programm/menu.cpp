#include <iostream>
#include <string> 
#include "Menu.hpp"
using namespace std;

// Hier wird die Einleitung ausgegeben
void Menu::printIntroduction()
{
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "Willkommen bei MondrianBlocks by Luca und Kevin\n" << endl;
    cout << "Das Spiel funktioniert folgendermassen:\nZunaechst waehlen Sie einen Spielmodus aus.(Hier nur 'Spielen')." << endl;
    cout << "Anschliessend koennen Sie aus 3 verschiedenen Vorlagen auswaehlen." << endl;
    cout << "Das Ziel des Spiels ist nun, das 8x8 grosse Spielfeld mit den vorhandenen Bloecken zu fuellen.\n" << endl;
    cout << "Viel Spass!" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << endl;
}

// Hier wird der Spielmodus ausgewählt. Der Solver ist hier nicht spielbar, aber für die Vollständigkeit trotzdem vorhanden
bool Menu::chooseGamemode()
{
    cout << "Waehlen Sie einen Spielmodus:\n(1) - Spielen\n(2) - Solver" << endl;
    cin >> m_gamemode;
    cout << endl;

    switch (m_gamemode)
    {
    //bool 0 = Spielen, bool 1 = Soler
    case 1:
        cout << "Sie haben sich fuer den Spielmodus 'Spielen' entschieden!" << endl;
        return 0;
    case 2:
        cout << "\n*WIP* ... Work In Progress ... *WIP*\t\tWaehlen Sie erneut!\n" << endl;
        return chooseGamemode();
    }
}

// Hier werden 3 Vorlagen in der Konsole ausgegeben. Im Anschluss wird über den Input die Vorlage ausgewählt.
int Menu::chooseTemplate()
{
    cout << "Folgende Vorlagen stehen zur Verfuegung\n" << endl;
    
    cout << "Vorlage No.1:" << endl;
    template1.template1();
    template1.printTemplate(1);

    cout << "Vorlage No.2:" << endl;
    template2.template2();
    template2.printTemplate(2);    

    cout << "Vorlage No.3:" << endl;
    template3.template3();
    template3.printTemplate(3);

    cout << "Waehlen Sie nun eine Vorlage aus:\t";
    cin >> m_chosenTemplate;

    switch (m_chosenTemplate)
    {
        case 1:
            cout << "Sie haben sich fuer Vorlage No.1 entschieden." << endl;
            // baseT1.printField();
            return 1;
        
        case 2:
            cout << "Sie haben sich fuer Vorlage No.2 entschieden." << endl;
            // baseT2.printField();
            return 2;
        
        case 3:
            cout << "Sie haben sich fuer Vorlage No.3 entschieden." << endl;
            // baseT3.printField();
            return 3;
        
        default:
            cout << "\n*Ungueltige Eingabe! Waehlen Sie erneut*\n\n" << endl;
            chooseTemplate();
    }
    
}