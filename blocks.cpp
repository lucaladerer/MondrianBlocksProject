#include <iostream>
#include "blocks.hpp"

Blocks::Blocks() {}
Blocks::~Blocks() {}

void Blocks::setPlayTemplate(int chooseTemplate)
{
    playTemplate.createField();
    switch(chooseTemplate)
            {
                case 1: { playTemplate.template1(); break; }
                case 2: { playTemplate.template2(); break; }
                case 3: { playTemplate.template3(); break; }
                default: { std::cout << "Error choosing Template in class: 'Blocks'" << std::endl; break; }
            }
    templatePicked = chooseTemplate;
    playTemplate.printTemplate(chooseTemplate);
}

void Blocks::userChooseBlock(char chosenBlock[3])
{
    int block0 = chosenBlock[0];
    int block2 = chosenBlock[2];
    if(block0 == 49)
    {
        switch(block2)
        {
            case 52: { blockbuffer = block1x4; break; }
            case 53: { blockbuffer = block1x5; break; }
            default: { std::cout << "Bitte waehlen Sie erneut ihren Block" << std::endl; break; }
        }
    }
    else if(block0 == 50)
    {
        switch(block2)
        {
            case 50: { blockbuffer = block2x2; break; }
            case 51: { blockbuffer = block2x3; break; }
            case 52: { blockbuffer = block2x4; break; }
            case 53: { blockbuffer = block2x5; break; }
            default: { std::cout << "Bitte waehlen Sie erneut ihren Block" << std::endl; break; }
        }
    }
    else if(block0 == 51)
    {
        switch(block2)
        {
            case 51: { blockbuffer = block3x3; break; }
            case 52: { blockbuffer = block3x4; break; }
            default: { std::cout << "Bitte waehlen Sie erneut ihren Block" << std::endl; break; }
        }
    }
    else std::cout << "Bitte waehlen Sie erneut ihren Block." << std::endl;
}

void Blocks::userSetBlock(int y, int x)
{
    int val = blockbuffer;
    short blocksizeX, blocksizeY;
    switch(val)
    {
        case 65: { blocksizeY = 1; blocksizeX = 4; av14 = false; break;}
        case 66: { blocksizeY = 1; blocksizeX = 5; av15 = false; break;}
        case 67: { blocksizeY = 2; blocksizeX = 3; av23 = false; break;}
        case 68: { blocksizeY = 2; blocksizeX = 4; av24 = false; break;}
        case 69: { blocksizeY = 2; blocksizeX = 5; av25 = false; break;}
        case 70: { blocksizeY = 2; blocksizeX = 2; av22 = false; break;}
        case 71: { blocksizeY = 3; blocksizeX = 3; av33 = false; break;}
        case 72: { blocksizeY = 3; blocksizeX = 4; av34 = false; break;}
        default: { std::cout << "Error setting Block" << std::endl; break; }
    }

    playTemplate.pasteToTemplate(y, x, blockbuffer, blocksizeX, blocksizeY);
}

void Blocks::availableBlocks()
{
    std::cout << "Verfuegbare Bloecke:" << std::endl;
    if(av14) std::cout << "A: 1x4 ";
    if(av15) std::cout << "B: 1x5 ";
    if(av23) std::cout << "C: 2x3 ";
    if(av24) std::cout << "D: 2x4 ";
    if(av25) std::cout << "E: 2x5 ";
    if(av22) std::cout << "F: 2x2 ";
    if(av33) std::cout << "G: 3x3 ";
    if(av34) std::cout << "H: 3x4 ";
    std::cout << std::endl;
    
}