#include "field.hpp"
#include <iostream>
#include <fstream>

// constructor and destructor definitions for Class Field
Field::Field() {}
Field::~Field() {}

// Hier wird das "leere" 8x8 Feld mit 0 als char erstellt
void Field::createField()
{
    // open file "fieldsize.txt" from MondrianBlocksProject\cmake-build-debug folder in ifstream (read only) arraySize
    std::ifstream arraySize("fieldsize.txt");
    // if the selected file could be opened
    if(arraySize.is_open()){
        // store the files content in char fieldsizetxt[3]
        arraySize >> fieldsizetxt;
        // close ifstream arraySize with opened file "fieldsize.txt"
        arraySize.close();
    }
    // if the file couldn't be opened, print error message
    // else std::cout << "Could not open txt file." << std::endl;
    // fill the start array with zeroes
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


// Diese Funktion dient der Erstellung der Templates / Setzen von Kreuzen
void Field::editFieldForTemplate(int y, int x)
{
    field[y][x] = 'X';
}

// definition of boolean method setBlock, allowing the user to set a selected block to a desired position
bool Field::setBlock(int y, int x, char c, short blocksizeX, short blocksizeY, bool rotated)
{
    // correctly align user input position with indexes of char array field
    int xPos = x - 1;
    int yPos = y - 1;

    // create internal boolean to check if setting the block to the desired position is a legal move
    legalMove = true;

    // check if the move is legal
    // if the chosen block is not rotated
    if(!rotated)
    {
        // check every position which will be overwritten by the new block for collisions and barrier limits
        for (int col = xPos; col < xPos + blocksizeX; col++) {
            for (int row = yPos; row < yPos + blocksizeY; row++) {
                // if the check of the current position returned false since it is not considered a legal move
                if (!checkRules.checkLegalMove(field, row, col)) {
                    // set boolean legalMove to false
                    legalMove = false;
                }
            }
        }
    }
    // if the chosen block is rotated
    else if(rotated)
    {
        // check every position which will be overwritten by the new block for collisions and barrier limits
        for (int col = xPos; col < xPos + blocksizeY; col++) {
            for (int row = yPos; row < yPos + blocksizeX; row++) {
                // if the check of the current position returned false since it is not considered a legal move
                if (!checkRules.checkLegalMove(field, row, col)) {
                    // set boolean legalMove to false
                    legalMove = false;
                }
            }
        }
    }
    // if the input move is not blocked by any barrier limits or other blocks
    if(legalMove)
    {
        // if the block is not rotated
        if(!rotated)
        {
            // set the position of char array field to character of picked block in range of selected block's size
            for (int col = xPos; col < xPos + blocksizeX; col++) {
                for (int row = yPos; row < yPos + blocksizeY; row++) {
                    field[row][col] = c;
                }
            }
        }
        // if the block is rotated
        else if(rotated)
        {
            // set the position of char array field to character of picked block in range of selected block's size
            for(int col = xPos; col < xPos + blocksizeY; col++) {
                for(int row = yPos; row < yPos + blocksizeX; row++) {
                    field[row][col] = c;
                }
            }
        }
        // if the method of Class Win returns true, which means that the field is completed, print the win message to console
        if(checkWin.checkForWin(field))
        {
            Stats::endTimer();
            checkWin.winMessage();
        }

        // Stats::turns++;
        // Auskommentiert wegen Compilerfehler!
        // return true to tell Class Template and Class Blocks that the block insertion was successfully completed
        return true;
    }
    // if the move was not considered a legal move, return false to let Class Template and Class Blocks know that the move was not considered legal
    else return false;
}

// definition of void method removeBlock(), allowing the user to erase a char input from the current field playing on
void Field::removeBlock(char c)
{
    // for every place in the char array field[][] that equals the character of the block that the user wants to be deleted
    // replace the value of current array position to character '0'
    for(int col = 0; col <=7; col++)
    {
        for(int row = 0; row <= 7; row++)
        {
            if(field[col][row] == c)
            field[col][row] = '0';
        }
    }
}