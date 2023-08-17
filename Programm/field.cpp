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
            feld[col][row] = '0';
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
<<<<<<< Updated upstream:Programm/field.cpp
            cout << field[col][row] << ' ';
=======
            std::cout << feld[col][row] << ' ';
>>>>>>> Stashed changes:field.cpp
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
    feld[y][x] = 'X';
}

void Field::setBlock(int y, int x, char c, short blocksizeX, short blocksizeY)
{
    short xPos = x - 1;
    short yPos = y - 1;
    for(int col = xPos; col <= xPos + blocksizeX; col++)
    {
        for(int row = yPos; row < yPos + blocksizeY; row++)
        {
            feld[row][col] = c;
        }

    }

}