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

bool Field::setBlock(int y, int x, char c, short blocksizeX, short blocksizeY, bool rotated)
{
    int xPos = x - 1;
    int yPos = y - 1;

    legalMove = true;

    // Check auf Legal Move
    if(!rotated)
    {
        for (int col = xPos; col < xPos + blocksizeX; col++) {
            for (int row = yPos; row < yPos + blocksizeY; row++) {
                if (!checkRules.checkLegalMove(field, row, col)) {
                    legalMove = false;
                    // Field::removeBlock(c)
                }
            }
        }
    }
    else if(rotated)
    {
        for (int col = xPos; col < xPos + blocksizeX; col++) {
            for (int row = yPos; row < yPos + blocksizeY; row++) {
                if (!checkRules.checkLegalMove(field, row, col)) {
                    legalMove = false;
                    // Field::removeBlock(c)
                }
            }
        }
    }

    if(legalMove)
    {
        if(!rotated)
        {
            for (int col = xPos; col < xPos + blocksizeX; col++) {
                for (int row = yPos; row < yPos + blocksizeY; row++) {
                    field[row][col] = c;
                }
            }
        }
        else if(rotated)
        {
            for(int col = xPos; col < xPos + blocksizeY; col++) {
                for(int row = yPos; row < yPos + blocksizeX; row++) {
                    field[row][col] = c;
                }
            }
        }

        if(checkWin.checkForWin(field))
        {
            checkWin.winMessage();
        }

        // Stats::turns++;
        // Auskommentiert wegen Compilerfehler!
        return true;
    }
    else return false;
}

void Field::removeBlock(char c)
{
    for(int col = 0; col <=7; col++)
    {
        for(int row = 0; row <= 7; row++)
        {
            if(field[col][row] == c)
            field[col][row] = '0';
        }
    }
}