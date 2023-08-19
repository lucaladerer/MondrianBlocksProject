#include "template.hpp"
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

Template::Template() {};
Template::~Template() {};

// Über diese Funktion wird das leere Feld erstellt und mit den entsprechenen Kreuzen gefüllt.
void Template::template1()
{
    std::cout << "Schwierigkeitsgrad: EINFACH\n" << std::endl;

    baseT1.createField();
    baseT1.editFieldForTemplate(7, 0);
    baseT1.editFieldForTemplate(7, 1);
    baseT1.editFieldForTemplate(7, 2);
    baseT1.editFieldForTemplate(4, 0);
    baseT1.editFieldForTemplate(5, 0);
    baseT1.editFieldForTemplate(6, 0);

    pickedTemplate = 1;
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

    pickedTemplate = 2;
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

    pickedTemplate = 3;
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

bool Template::pasteToTemplate(int y, int x, char c, short blocksizeX, short blocksizeY, bool rotated)
{
    bool pasteSuccess;
    switch(pickedTemplate)
    {
        case 1: { pasteSuccess = baseT1.setBlock(y, x, c, blocksizeX, blocksizeY, rotated); baseT1.printField(); break; }
        case 2: { pasteSuccess = baseT2.setBlock(y, x, c, blocksizeX, blocksizeY, rotated); baseT2.printField(); break; }
        case 3: { pasteSuccess = baseT3.setBlock(y, x, c, blocksizeX, blocksizeY, rotated); baseT3.printField(); break; }
        default: std::cout << "Error printing block via class: 'Template'" << std::endl; return false;
    }
    return pasteSuccess;
}

void Template::removeFromTemplate(char c)
{
    switch(pickedTemplate)
    {
        case 1: baseT1.removeBlock(c); break;
        case 2: baseT2.removeBlock(c); break;
        case 3: baseT3.removeBlock(c); break;
    }
}

void Template::printFinal()
{
    switch(pickedTemplate)
    {
        case 1: baseT1.printField(); break;
        case 2: baseT2.printField(); break;
        case 3: baseT3.printField(); break;
    }
}