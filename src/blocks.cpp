#include "blocks.hpp"
#include <iostream>

// constructor and destructor definitions for Class Blocks
Blocks::Blocks() {}
Blocks::~Blocks() {}

// sets the template picked by user, create field in Class Field over Class Template
void Blocks::setPlayTemplate(int chooseTemplate)
{
    // create internal field in object of Class Template
    playTemplate.createField();
    // depending on the picked template, fill the created field with the start blocks
    switch(chooseTemplate)
            {
                case 1: { playTemplate.template1(); break; }
                case 2: { playTemplate.template2(); break; }
                case 3: { playTemplate.template3(); break; }
                default: { std::cout << "Error choosing Template in class: 'Blocks'" << std::endl; break; }
            }
    // print the template to console
    playTemplate.printTemplate(chooseTemplate);
}

// boolean method allowing the user to select a block to set, input to method is user input from main.cpp
bool Blocks::userChooseBlock(char chosenBlock[3])
{
    // create integer values for the selected blocks size stored in input char array
    int block0 = chosenBlock[0];
    int block2 = chosenBlock[2];
    // if the first number of the input size is 1 (= 49 ASCII)
    if(block0 == 49)
    {
        // switch the 3rd position of input char array to look for second size value
        switch(block2)
        {
            // if the second size value is 4 (= 52 ASCII) or 5 (= 53 ASCII) set char blockbuffer to the corresponding letter for input block size
            case 52: { blockbuffer = block1x4; break; }
            case 53: { blockbuffer = block1x5; break; }
            // if the user made a wrong input, tell the user to enter again and repeat function userChooseBlock() via while loop in main.cpp
            default: { std::cout << "Please choose your block again." << std::endl; return true;}
        }
    }
    // if the first number of the input size is 2 (= 50 ASCII)
    else if(block0 == 50)
    {
        // switch the 3rd position of input char array to look for second size value
        switch(block2)
        {
            // if the second size value is 2, 3, 4 or 5 (ASCII values!) set char blockbuffer to the corresponding letter for input block size
            case 50: { blockbuffer = block2x2; break; }
            case 51: { blockbuffer = block2x3; break; }
            case 52: { blockbuffer = block2x4; break; }
            case 53: { blockbuffer = block2x5; break; }
            // if the user made a wrong input, tell the user to enter again and repeat function userChooseBlock() via while loop in main.cpp
            default: { std::cout << "Please choose your block again." << std::endl; return true;}
        }
    }
    // if the first number of the input size is 3 (= 51 ASCII)
    else if(block0 == 51)
    {
        // switch the 3rd position of input char array to look for second size value
        switch(block2)
        {
            // if the second size value is 3 or 4 (ASCII values!) set char blockbuffer to the corresponding letter for input block size
            case 51: { blockbuffer = block3x3; break; }
            case 52: { blockbuffer = block3x4; break; }
            // if the user made a wrong input, tell the user to enter again and repeat function userChooseBlock() via while loop in main.cpp
            default: { std::cout << "Please choose your block again." << std::endl; return true; }
        }
    }
    // else if the first number of the input size was != 1, 2 or 3 and user input was wrong, repeat function via while loop in main.cpp
    else { std::cout << "Please choose your block again." << std::endl; return true; }
    // assign ASCII value of currently selected block's letter to private integer val (see blocks.hpp)
    val = blockbuffer;
    // create temporary bool to check if picked block is already set
    bool tempStatus;
    switch(val)
    {
        case 65: tempStatus = av14; break;
        case 66: tempStatus = av15; break;
        case 67: tempStatus = av23; break;
        case 68: tempStatus = av24; break;
        case 69: tempStatus = av25; break;
        case 70: tempStatus = av22; break;
        case 71: tempStatus = av33; break;
        case 72: tempStatus = av34; break;
    }
    // if the picked block is already set ask user to pick block again
    if(!tempStatus)
    {
        std::cout << "Block is already set. Please pick again." << std::endl;
        return true;
    }
    // if every input was set correctly, exit the while loop in main.cpp and continue asking the user for block position
    return false;
}

// integer method allowing the user to set the selected block to desired position with input values of typed in position
int Blocks::userSetBlock(int y, int x)
{
    // create boolean to store the rotation status of currently selected block
    bool rotated;
    // create boolean to store whether the desired position is a valid position
    bool legalMove;
    // create short variable to store the size of the selected block in x and y position
    short blocksizeX, blocksizeY;
    // switch ASCII value of user selected block
    switch(val)
    {
        // if the user picked block A, B, C, D, E, F, G or H assign values of block size to short variables,
        // set rotation status to selected block's rotations status and
        // set the selected block's availability status to false since it is going to be set
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
        // if there was an error setting the blockbuffer char, return 1 and repeat request
        default: { std::cout << "Error setting Block due to rotation." << std::endl; return 1; }
    }
    // assign return value of method pasteToTemplate from playTemplate object of Class Template to boolean legalMove and
    // set the selected block (blockbuffer = letter of selected block, blocksizeX/Y = size of selected block, y/x = insert position,
    // rotated = boolean telling the method whether selected block is rotated or not)
    legalMove = playTemplate.pasteToTemplate(y, x, blockbuffer, blocksizeX, blocksizeY, rotated);
    // if the desired set position was no legal move
    if (!legalMove)
    {
        // tell the user to pick again and return 2 so while loop in main.cpp repeats
        std::cout << "You can't place your block there. Please choose a new position." << std::endl;
        // switch ASCII value of currently picked block's letter to assign availability status "available" back to picked block
        switch(val)
        {
            case 65: av14 = true; break;
            case 66: av15 = true; break;
            case 67: av23 = true; break;
            case 68: av24 = true; break;
            case 69: av25 = true; break;
            case 70: av22 = true; break;
            case 71: av33 = true; break;
            case 72: av34 = true; break;
        }
        return 2;
    }
    // if userSetBlock() was completed correctly, return 0 to exit while loop in main.cpp
    return 0;
}

// print the available blocks to console
void Blocks::availableBlocks()
{
    // if the boolean value for the block states that it is available, print the block's details to console
    std::cout << "Available blocks:" << std::endl;
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

// allow user to rotate the selected block with user input char yn
bool Blocks::rotateBlock(char yn)
{
    // create internal bool rotated and set to false to avoid setting wrong rotation status
    bool rotated = false;

    // return value for method Blocks::rotateBlock(char yn)
    bool rotatedReturnValue;

    // switch ASCII value of currently selected block's letter and save its current rotation status in internal boolean rotated
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
    // if the current selected block is not rotated
    if(!rotated)
    {
        // if the user chose to rotate the block via user input char yn to method
        if (yn == 'y' || yn == 'Y' || yn == 'j' || yn == 'J') {
            // set internal boolean rotated to status "block is currently rotated"
            rotated = true;
            // switch the currently selected block's ASCII value and store the new rotation status to it's corresponding block
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
            // let method rotateBlock() return false status to exit while loop in main.cpp
            rotatedReturnValue = false;
        }
        // if the user selected to not rotate a block, return false to exit while loop in main.cpp
        else if (yn == 'n' || yn == 'N')
        {
            rotatedReturnValue = false;
        }
        // if the user made a wrong input, tell him to enter "y" or "n" again and return true to keep asking for user input in main.cpp
        else
        {
            std::cout << "Wrong input. Please try again." << std::endl;
            rotatedReturnValue = true;
        }
    }
    // if the block already is rotated
    else if(rotated)
    {
        // if the user wants to rotate the selected block
        if (yn == 'y' || yn == 'Y' || yn == 'j' || yn == 'J')
        {
            rotated = false;
            // assign new rotation status "block currently not rotated" to currently selected block
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
            }
            // if the new rotation status was set correctly, return false from method rotateBlock() to exit while loop in main.cpp
            rotatedReturnValue = false;
        }
        // if the user chose to not rotate the selected block
        else if (yn == 'n' || yn == 'N')
        {
            // return false to exit while loop in main.cpp
            rotatedReturnValue = false;
        }
        // else if the user made a wrong input, return true to repeat while loop in main.cpp and repeat asking for input
        else
        {
            std::cout << "Wrong input. Please try again." << std::endl;
            rotatedReturnValue = true;
        }
    }
    return rotatedReturnValue;
}

// definition of integer method deleteBlock() asking and allowing the user to delete a block from the play field
int Blocks::deleteBlock()
{
    // ask user to decide whether to delete or set a block, save user input in char removeYN
    std::cout << "Do you want to delete (y) or place (n) a block?" << std::endl;
    char removeYN;
    std::cin >> removeYN;
    // if the user chose to remove a block
    if(removeYN == 'y' || removeYN == 'Y')
    {
        // ask user for block to delete, store input in char blockToRemove
        std::cout << "\nWhich block do you want to delete? Enter the letter of the block." << std::endl;
        char blockToRemove;
        std::cin >> blockToRemove;
        // if the user wrote letter small instead of capital, assign capital letter to char to avoid repeated user input request
        if(blockToRemove == 'a') blockToRemove = 'A';
        else if(blockToRemove == 'b') blockToRemove = 'B';
        else if(blockToRemove == 'c') blockToRemove = 'C';
        else if(blockToRemove == 'd') blockToRemove = 'D';
        else if(blockToRemove == 'e') blockToRemove = 'E';
        else if(blockToRemove == 'f') blockToRemove = 'F';
        else if(blockToRemove == 'g') blockToRemove = 'G';
        else if(blockToRemove == 'h') blockToRemove = 'H';
        // call method removeFromTemplate() of object playTemplate from Class Template with input of the selected block's letter
        playTemplate.removeFromTemplate(blockToRemove);
        // store ASCII value of selected block's letter in temporary int variable
        int switchVal = blockToRemove;
        // switch ASCII value of currently selected block's letter, change the block's availability status back to "available"
        switch(switchVal)
        {
            case 65: av14 = true; break;
            case 66: av15 = true; break;
            case 67: av23 = true; break;
            case 68: av24 = true; break;
            case 69: av25 = true; break;
            case 70: av22 = true; break;
            case 71: av33 = true; break;
            case 72: av34 = true; break;
            // if the user made a wrong input return value 1 to ask for new input
            default: std::cout << "Wrong input. Please try again." << std::endl; return 1;
        }
        // if the block was deleted successfully, return value 2 to print resulting field and repeat while(true) loop in main.cpp (line 45)
        return 2;
    }
    // if the user chose to set a block, return 0 to continue in while(true) loop in main.cpp
    else if(removeYN == 'n' || removeYN == 'N')
    {
        return 0;
    }
    // else if the user made a wrong input return 1 to repeat asking for new input via while loop in main.cpp
    else
    {
        std::cout << "Wrong input. Please try again." << std::endl;
        return 1;
    }
}

// definition of void method printFinalField(), allowing to print the current array playing on via an object of Class Blocks
void Blocks::printFinalField()
{
    playTemplate.printFinal();
}