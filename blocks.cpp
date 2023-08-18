#include "blocks.hpp"
#include <iostream>

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
    playTemplate.printTemplate(chooseTemplate);
}

bool Blocks::userChooseBlock(char chosenBlock[3])
{
    int block0 = chosenBlock[0];
    int block2 = chosenBlock[2];
    if(block0 == 49)
    {
        switch(block2)
        {
            case 52: { blockbuffer = block1x4; break; }
            case 53: { blockbuffer = block1x5; break; }
            default: { std::cout << "Bitte waehlen Sie erneut ihren Block" << std::endl; return true;}
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
            default: { std::cout << "Bitte waehlen Sie erneut ihren Block" << std::endl; return true;}
        }
    }
    else if(block0 == 51)
    {
        switch(block2)
        {
            case 51: { blockbuffer = block3x3; break; }
            case 52: { blockbuffer = block3x4; break; }
            default: { std::cout << "Bitte waehlen Sie erneut ihren Block" << std::endl; return true; }
        }
    }
    else { std::cout << "Bitte waehlen Sie erneut ihren Block." << std::endl; return true; }
    return false;
}

bool Blocks::userSetBlock(int y, int x)
{
    bool rotated;
    int val = blockbuffer;
    short blocksizeX, blocksizeY;
    switch(val)
    {
        case 65:
        {
            rotated = av14rotated;
            blocksizeY = 1; blocksizeX = 4;
            av14 = false;
            break;
        }
        case 66:
        {
            rotated = av15rotated;
            blocksizeY = 1; blocksizeX = 5;
            av15 = false;
            break;
        }
        case 67:
        {
            rotated = av23rotated;
            blocksizeY = 2; blocksizeX = 3;
            av23 = false;
            break;
        }
        case 68:
        {
            rotated = av24rotated;
            blocksizeY = 2; blocksizeX = 4;
            av24 = false;
            break;
        }
        case 69:
        {
            rotated = av25rotated;
            blocksizeY = 2; blocksizeX = 5;
            av25 = false;
            break;
        }
        case 70:
        {
            rotated = av22rotated;
            blocksizeY = 2; blocksizeX = 2;
            av22 = false;
            break;
        }
        case 71:
        {
            rotated = av33rotated;
            blocksizeY = 3; blocksizeX = 3;
            av33 = false;
            break;
        }
        case 72:
        {
            rotated = av34rotated;
            blocksizeY = 3; blocksizeX = 4;
            av34 = false;
            break;
        }
        default: { std::cout << "Error setting Block due to rotation." << std::endl; return true; }
    }
    /*if(~rotated)
    {
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
            default: { std::cout << "Error setting Block" << std::endl; return true; }
        }
    }
    else if(rotated)
    {
        switch(val)
        {
            case 65: { blocksizeY = 4; blocksizeX = 1; av14 = false; break;}
            case 66: { blocksizeY = 5; blocksizeX = 1; av15 = false; break;}
            case 67: { blocksizeY = 3; blocksizeX = 2; av23 = false; break;}
            case 68: { blocksizeY = 4; blocksizeX = 2; av24 = false; break;}
            case 69: { blocksizeY = 5; blocksizeX = 2; av25 = false; break;}
            case 70: { blocksizeY = 2; blocksizeX = 2; av22 = false; break;}
            case 71: { blocksizeY = 3; blocksizeX = 3; av33 = false; break;}
            case 72: { blocksizeY = 4; blocksizeX = 3; av34 = false; break;}
            default: { std::cout << "Error setting Block" << std::endl; return true; }
        }
    }
    else return true;*/
    playTemplate.pasteToTemplate(y, x, blockbuffer, blocksizeX, blocksizeY, rotated);
    return false;
}


void Blocks::availableBlocks()
{
    std::cout << "Verfuegbare Bloecke:" << std::endl;
    if(av14) std::cout << "A: 1x4   ";
    if(av15) std::cout << "B: 1x5   ";
    if(av23) std::cout << "C: 2x3   ";
    if(av24) std::cout << "D: 2x4   ";
    if(av25) std::cout << "E: 2x5   ";
    if(av22) std::cout << "F: 2x2   ";
    if(av33) std::cout << "G: 3x3   ";
    if(av34) std::cout << "H: 3x4";
    std::cout << std::endl;
    
}

bool Blocks::rotateBlock(char yn)
{
    bool rotated = false;
    int val = blockbuffer;
    switch(val)
    {
        case 65: rotated = av14rotated; break;
        case 66: rotated = av15rotated; break;
        case 67: rotated = av23rotated; break;
        case 68: rotated = av24rotated; break;
        case 69: rotated = av25rotated; break;
        case 70: rotated = av22rotated; break;
        case 71: rotated = av33rotated; break;
        case 72: rotated = av34rotated; break;
        default: std::cout << "Error assigning rotation bool." << std::endl; break;
    }
    if(~rotated)
    {
        if (yn == 'y' || yn == 'Y' || yn == 'j' || yn == 'J') {
            rotated = true;
            switch(val)
            {
                case 65: av14rotated = rotated; break;
                case 66: av15rotated = rotated; break;
                case 67: av23rotated = rotated; break;
                case 68: av24rotated = rotated; break;
                case 69: av25rotated = rotated; break;
                case 70: av22rotated = rotated; break;
                case 71: av33rotated = rotated; break;
                case 72: av34rotated = rotated; break;
                default: std::cout << "Error re-assigning rotation bool." << std::endl; break;
            }
            return false;
        }
        else if (yn == 'n' || yn == 'N')
        {
            return false;
        }
        else
        {
            std::cout << "Falsche Eingabe. Versuchen Sie es erneut." << std::endl;
            return true;
        }
    }
    else if(rotated)
    {
        if (yn == 'y' || yn == 'Y' || yn == 'j' || yn == 'J') {
            rotated = false;
            switch(val)
            {
                case 65: av14rotated = rotated; break;
                case 66: av15rotated = rotated; break;
                case 67: av23rotated = rotated; break;
                case 68: av24rotated = rotated; break;
                case 69: av25rotated = rotated; break;
                case 70: av22rotated = rotated; break;
                case 71: av33rotated = rotated; break;
                case 72: av34rotated = rotated; break;
                default: std::cout << "Error re-assigning rotation bool." << std::endl; break;
            }
            return false;
        } else if (yn == 'n' || yn == 'N') {
            rotated = true;
            return false;
        } else {
            std::cout << "Falsche Eingabe. Versuchen Sie es erneut." << std::endl;
            return true;
        }
    }
    else return true;
}
