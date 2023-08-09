#include "Field.hpp"
#include <iostream>
using namespace std;


// Hier wird das "leere" 8x8 Feld mit 0 als char erstellt
void Field::createField()
{
    for(int col = 0; col <= 7; col++)
    {
        for(int row = 0; row <= 7; row++)
        {
            field[col][row] = '0';
        }
    }
}


// Hier wird das Feld in der Konsole ausgegeben. Zwischen den Elementen (Reihe) wird ein Leerzeichen gesetzt.
void Field::printField()
{
    for(int col = 0; col <= 7; col++)
    {
        for(int row = 0; row <= 7; row++)
        {
            cout << field[col][row] << ' ';
            if(row == 7)    
            {
                cout << endl;
            }
        }
    }
    cout << "\n" << endl;
}


// Diese FUnktion dient der Erstellung der Templates / Setzen von Kreuzen
void Field::editFieldForTemplate(int y, int x)
{
    field[y][x] = 'X';
}