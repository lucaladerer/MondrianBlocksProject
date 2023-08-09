#include "Field.hpp"
#include <iostream>
using namespace std;

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

void Field::editFieldForTemplate(int y, int x)
{
    field[y][x] = 'X';
}