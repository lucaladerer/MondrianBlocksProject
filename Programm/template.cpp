#include "template.hpp"
#include <iostream>
#include <string>
using namespace std;

void Template::template1()
{
    for(int col = 0; col <= 7; col++)
    {
        for(int row = 0; row <= 7; row++)
        {
            m_template[col][row] = '0';
        }
    }   


    m_template[7][0] = 'X';
    m_template[7][1] = 'X';
    m_template[7][2] = 'X';
    m_template[7][0] = 'X';
    m_template[6][0] = 'X';
    m_template[5][0] = 'X';
    
    
    for(int col = 0; col <= 7; col++)
    {
        for(int row = 0; row <= 7; row++)
        {
            cout << m_template[col][row] << ' ';
            if(row == 7)
            {
                cout << endl;
            }
        }
    }
}