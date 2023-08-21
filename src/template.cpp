#include "template.hpp"
#include <iostream>

Template::Template() {};
Template::~Template() {};

// create an empty field and fill it with chosen crosses --> Template No.1
void Template::template1()
{
    std::cout << "Difficulty: EASY\n" << std::endl;

    baseT1.createField();
    baseT1.editFieldForTemplate(7, 0);
    baseT1.editFieldForTemplate(7, 1);
    baseT1.editFieldForTemplate(7, 2);
    baseT1.editFieldForTemplate(4, 0);
    baseT1.editFieldForTemplate(5, 0);
    baseT1.editFieldForTemplate(6, 0);

    pickedTemplate = 1;
}

// create an empty field and fill it with chosen crosses --> Template No.2
void Template::template2()
{
    std::cout << "Difficulty: MEDIUM\n" << std::endl;

    baseT2.createField();
    baseT2.editFieldForTemplate(7, 5);
    baseT2.editFieldForTemplate(7, 6);
    baseT2.editFieldForTemplate(7, 7);
    baseT2.editFieldForTemplate(0, 6);
    baseT2.editFieldForTemplate(0, 7);
    baseT2.editFieldForTemplate(0, 0);

    pickedTemplate = 2;
}

// create an empty field and fill it with chosen crosses --> Template No.3
void Template::template3()
{
    std::cout << "Difficulty: HARD\n" << std::endl;

    baseT3.createField();
    baseT3.editFieldForTemplate(0, 0);
    baseT3.editFieldForTemplate(1, 0);
    baseT3.editFieldForTemplate(2, 0);
    baseT3.editFieldForTemplate(4, 3);
    baseT3.editFieldForTemplate(4, 4);
    baseT3.editFieldForTemplate(6, 7);

    pickedTemplate = 3;
}


// template is printed to the console
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

// definition of boolean method pasteToTemplate to allow pasting a selected block into the current array playing on
bool Template::pasteToTemplate(int y, int x, char c, short blocksizeX, short blocksizeY, bool rotated)
{
    // create internal boolean to store status of legal paste move
    bool pasteSuccess;
    // switch the value of currently picked template by user and assign return value of method setBlock() of Class Field
    // to boolean pasteSuccess to check if the move made was legal
    // paste selected block to selected position via method setBlock() of selected object of Class Field
    switch(pickedTemplate)
    {
        case 1: { pasteSuccess = baseT1.setBlock(y, x, c, blocksizeX, blocksizeY, rotated); baseT1.printField(); break; }
        case 2: { pasteSuccess = baseT2.setBlock(y, x, c, blocksizeX, blocksizeY, rotated); baseT2.printField(); break; }
        case 3: { pasteSuccess = baseT3.setBlock(y, x, c, blocksizeX, blocksizeY, rotated); baseT3.printField(); break; }
        default: std::cout << "Error printing block via class: 'Template'" << std::endl; return false;
    }
    // return the success status of paste procedure
    return pasteSuccess;
}

// definition of void method removeFromTemplate() allowing the user to delete the selected block from the currently selected template
void Template::removeFromTemplate(char c)
{
    // depending on which template the user picked, remove the selected block from corresponding object of Class Field
    switch(pickedTemplate)
    {
        case 1: baseT1.removeBlock(c); break;
        case 2: baseT2.removeBlock(c); break;
        case 3: baseT3.removeBlock(c); break;
    }
}

// definition of void method printFinal() allowing Class Blocks to print current status of selected field array
void Template::printFinal()
{
    // depending on the template picked by the user, print the template edited while playing via method of object of Class Field
    switch(pickedTemplate)
    {
        case 1: baseT1.printField(); break;
        case 2: baseT2.printField(); break;
        case 3: baseT3.printField(); break;
    }
}