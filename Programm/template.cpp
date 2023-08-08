#include "template.hpp"
#include <iostream>
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

    base.createField();
    base.editFieldForTemplate(7, 0);
    base.editFieldForTemplate(7, 1);
    base.editFieldForTemplate(7, 2);
    base.editFieldForTemplate(7, 0);
    base.editFieldForTemplate(6, 0);
    base.editFieldForTemplate(5, 0);
    base.printField();

    // base.field[7][0] = 'X';
    // base.field[7][1] = 'X';
    // base.field[7][2] = 'X';
    // base.field[7][0] = 'X';
    // base.field[6][0] = 'X';
    // base.field[5][0] = 'X';
}


void Template::template2()
{
    cout << "Schwierigkeitsgrad: MITTEL\n" << endl;

    base.createField();
    base.editFieldForTemplate(7, 5);
    base.editFieldForTemplate(7, 6);
    base.editFieldForTemplate(7, 7);
    base.editFieldForTemplate(0, 6);
    base.editFieldForTemplate(0, 7);
    base.editFieldForTemplate(0, 0);
    base.printField();

    // m_template[7][5] = 'X';
    // m_template[7][6] = 'X';
    // m_template[7][7] = 'X';
    // m_template[0][6] = 'X';
    // m_template[0][7] = 'X';
    // m_template[0][0] = 'X';   
}


void Template::template3()
{
    cout << "Schwierigkeitsgrad: SCHWER\n" << endl;

    base.createField();
    base.editFieldForTemplate(0, 0);
    base.editFieldForTemplate(1, 0);
    base.editFieldForTemplate(2, 0);
    base.editFieldForTemplate(4, 3);
    base.editFieldForTemplate(4, 4);
    base.editFieldForTemplate(6, 7);
    base.printField();

    // m_template[0][0] = 'X';
    // m_template[1][0] = 'X';
    // m_template[2][0] = 'X';
    // m_template[4][3] = 'X';
    // m_template[4][4] = 'X';
    // m_template[6][7] = 'X';
}






// Versuch mit std::array
/*
void Template::template1()
{
    cout << "Schwierigkeitsgrad: EINFACH\n" << endl;

    for(int col = 0; col <= 7; col++)
    {
        for(int row = 0; row <= 7; row++)
        {
            m_testTemplate[col][row] = '0';
        }
    }


    m_testTemplate[7][0] = 'X';
    m_testTemplate[7][1] = 'X';
    m_testTemplate[7][2] = 'X';
    m_testTemplate[7][0] = 'X';
    m_testTemplate[6][0] = 'X';
    m_testTemplate[5][0] = 'X';
    
    
    for(int col = 0; col <= 7; col++)
    {
        for(int row = 0; row <= 7; row++)
        {
            cout << m_testTemplate[col][row] << ' ';
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
            m_testTemplate[col][row] = '0';
        }
    }


    m_testTemplate[7][5] = 'X';
    m_testTemplate[7][6] = 'X';
    m_testTemplate[7][7] = 'X';
    m_testTemplate[0][6] = 'X';
    m_testTemplate[0][7] = 'X';
    m_testTemplate[0][0] = 'X';
    
    
    for(int col = 0; col <= 7; col++)
    {
        for(int row = 0; row <= 7; row++)
        {
            cout << m_testTemplate[col][row] << ' ';
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
            m_testTemplate[col][row] = '0';
        }
    }

    m_testTemplate[0][0] = 'X';
    m_testTemplate[1][0] = 'X';
    m_testTemplate[2][0] = 'X';
    m_testTemplate[4][3] = 'X';
    m_testTemplate[4][4] = 'X';
    m_testTemplate[6][7] = 'X';
    
    
    for(int col = 0; col <= 7; col++)
    {
        for(int row = 0; row <= 7; row++)
        {
            cout << m_testTemplate[col][row] << ' ';
            if(row == 7)    
            {
                cout << endl;
            }
        }
    }
    cout << "\n" << endl;
}

*/