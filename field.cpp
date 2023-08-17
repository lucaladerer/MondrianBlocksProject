#include "field.hpp"
#include <iostream>


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
            std::cout << field[col][row] << ' ';
            if(row == 7)    
            {
                std::cout << std::endl;
            }
        }
    }
    std::cout << "\n" << std::endl;
}


// Diese FUnktion dient der Erstellung der Templates / Setzen von Kreuzen
void Field::editFieldForTemplate(int y, int x)
{
    field[y][x] = 'X';
}

void Field::setBlock(int y, int x, char c, short blocksizeX, short blocksizeY)
{
    short xPos = x - 1;
    short yPos = y - 1;
    short temp;

    // Für Rotation von Block
    // if(rotateBlock)
    // {
    //     temp = blocksizeX;
    //     blocksizeX = blocksizeY;
    //     blocksizeY = temp;
    // }

    legalMove = true;

    // Check auf Legal Move
    for(int col = xPos; col < xPos + blocksizeX; col++)
        {
            for(int row = yPos; row < yPos + blocksizeY; row++)
            {
                if(checkRules.checkLegalMove(field, row, col) == false)
                {
                    legalMove = false;
                    // Field::removeBlock(c)
                }
            }
        }

    if(legalMove == true)
    {
        for(int col = xPos; col < xPos + blocksizeX; col++)
        {
            for(int row = yPos; row < yPos + blocksizeY; row++)
            {
                field[row][col] = c;
                checkWin.checkForWin(field);
            }
        }
        Stats::turns++;
    }
}