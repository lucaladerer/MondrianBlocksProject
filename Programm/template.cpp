#include "template.hpp"
#include <iostream>
#include <string>
using namespace std;

// Array als Rückgabewert, dann muss array nicht immer neu in template1() etc. erstellt werden
// Lösung: std::arry
// void Template::templateEmpty()
// {
//     for(int col = 0; col <= 7; col++)
//     {
//         for(int row = 0; row <= 7; row++)
//         {
//             m_template[col][row] = '0';
//         }
//     }   
// }

void Template::template1()
{
    cout << "Schwierigkeitsgrad: EINFACH\n" << endl;

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
    cout << "\n" << endl;
}


void Template::template2()
{
    cout << "Schwierigkeitsgrad: MITTEL\n" << endl;

    for(int col = 0; col <= 7; col++)
    {
        for(int row = 0; row <= 7; row++)
        {
            m_template[col][row] = '0';
        }
    }   


    m_template[7][5] = 'X';
    m_template[7][6] = 'X';
    m_template[7][7] = 'X';
    m_template[0][6] = 'X';
    m_template[0][7] = 'X';
    m_template[0][0] = 'X';
    
    
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
    cout << "\n" << endl;
}


void Template::template3()
{
    cout << "Schwierigkeitsgrad: SCHWER\n" << endl;

    for(int col = 0; col <= 7; col++)
    {
        for(int row = 0; row <= 7; row++)
        {
            m_template[col][row] = '0';
        }
    }   


    m_template[0][0] = 'X';
    m_template[1][0] = 'X';
    m_template[2][0] = 'X';
    m_template[4][3] = 'X';
    m_template[4][4] = 'X';
    m_template[6][7] = 'X';
    
    
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
    cout << "\n" << endl;
}
