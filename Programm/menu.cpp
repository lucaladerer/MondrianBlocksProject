#include "menu.hpp"
#include <iostream>
#include <string> 
using namespace std;

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
        break;
    case 2:
        cout << "Sie haben sich fuer den Spielmodus 'Solver' entschieden!" << endl;
        return 1;
        break;
    }
}

Template Menu::chooseTemplate()
{
    cout << "Folgende Vorlagen stehen zur Verfuegung\n" << endl;
    
    cout << "Vorlage No.1:" << endl;

    Template template1;
    template1.template1();


    cout << "Vorlage No.2:" << endl;

    Template template2;
    template2.template2();


    cout << "Vorlage No.3:" << endl;

    Template template3;
    template3.template3();

    cout << "Waehlen Sie nun eine Vorlage aus:\t";
    cin >> chosenTemplate;

    switch (chosenTemplate)
    {
        case 1:
            cout << "Sie haben sich fuer Vorlage No.1 entschieden." << endl;
            return template1;
            break;
        
        case 2:
            cout << "Sie haben sich fuer Vorlage No.2 entschieden." << endl;
            return template2;
            break;
        
        case 3:
            cout << "Sie haben sich fuer Vorlage No.3 entschieden." << endl;
            return template3;
            break;
    }
}