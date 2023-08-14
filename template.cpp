#include "Template.hpp"
#include <iostream>

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

// Über diese Funktion wird das leere Feld erstellt und mit den entsprechenen Kreuzen gefüllt.
void Template::template1()
{
    std::cout << "Schwierigkeitsgrad: EINFACH\n" << std::endl;

    baseT1.createField();
    baseT1.editFieldForTemplate(7, 0);
    baseT1.editFieldForTemplate(7, 1);
    baseT1.editFieldForTemplate(7, 2);
    baseT1.editFieldForTemplate(7, 0);
    baseT1.editFieldForTemplate(6, 0);
    baseT1.editFieldForTemplate(5, 0);
    // baseT1.printField();

    // baseT1.field[7][0] = 'X';
    // baseT1.field[7][1] = 'X';
    // baseT1.field[7][2] = 'X';
    // baseT1.field[7][0] = 'X';
    // baseT1.field[6][0] = 'X';
    // baseT1.field[5][0] = 'X';
}

// Über diese Funktion wird das leere Feld erstellt und mit den entsprechenen Kreuzen gefüllt.
void Template::template2()
{
    std::cout << "Schwierigkeitsgrad: MITTEL\n" << std::endl;

    baseT2.createField();
    baseT2.editFieldForTemplate(7, 5);
    baseT2.editFieldForTemplate(7, 6);
    baseT2.editFieldForTemplate(7, 7);
    baseT2.editFieldForTemplate(0, 6);
    baseT2.editFieldForTemplate(0, 7);
    baseT2.editFieldForTemplate(0, 0);
    // baseT2.printField();

    // m_template[7][5] = 'X';
    // m_template[7][6] = 'X';
    // m_template[7][7] = 'X';
    // m_template[0][6] = 'X';
    // m_template[0][7] = 'X';
    // m_template[0][0] = 'X';   
}


// Über diese Funktion wird das leere Feld erstellt und mit den entsprechenen Kreuzen gefüllt.
void Template::template3()
{
    std::cout << "Schwierigkeitsgrad: SCHWER\n" << std::endl;

    baseT3.createField();
    baseT3.editFieldForTemplate(0, 0);
    baseT3.editFieldForTemplate(1, 0);
    baseT3.editFieldForTemplate(2, 0);
    baseT3.editFieldForTemplate(4, 3);
    baseT3.editFieldForTemplate(4, 4);
    baseT3.editFieldForTemplate(6, 7);
    // baseT3.printField();

    // m_template[0][0] = 'X';
    // m_template[1][0] = 'X';
    // m_template[2][0] = 'X';
    // m_template[4][3] = 'X';
    // m_template[4][4] = 'X';
    // m_template[6][7] = 'X';
}


// Über diese Funktion wird das entsprechende Template in der Konsole ausgegeben.
void Template::printTemplate(int templateNumber)
{
    switch (templateNumber)
    {
    case 1:
        baseT1.printField();
        break;
    case 2:
        baseT2.printField();
        break;
    case 3:
        baseT3.printField();
        break;
    }
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