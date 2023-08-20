#ifndef BLOCKS_HPP_INCLUDED
#define BLOCKS_HPP_INCLUDED

#include "template.hpp"

// create Class Blocks with access to Class Template
class Blocks : public Template
{
    // public methods and variables
    public:
        // constructor
        Blocks();
        // destructor
        virtual ~Blocks();
        // internally set the picked template by the user
        void setPlayTemplate(int chooseTemplate);
        // allow the user to pick a block, return boolean expression
        bool userChooseBlock(char chosenBlock[3]);
        // allow the user to set the chosen block to a certain position, return int value
        int userSetBlock(int y, int x);
        // print the available blocks on console
        void availableBlocks();
        // allow the user to rotate a picked block, return boolean expression
        bool rotateBlock(char yn);
        // allow the user to delete a block and return boolean expression
        int deleteBlock();
        // print the edited template to console via template class
        void printFinalField();
    protected:
    // create object of Class Template
    Template playTemplate;

    // private methods and variables
    private:
    // create char to store the currently selected block by user
    char blockbuffer;
    // create integer value to store ASCII value of selected block's letter
    int val;
    // create const char values which store the letter standing for each block, named after block sizes
    const char block1x4 = 'A';
    const char block1x5 = 'B';
    const char block2x3 = 'C';
    const char block2x4 = 'D';
    const char block2x5 = 'E';
    const char block2x2 = 'F';
    const char block3x3 = 'G';
    const char block3x4 = 'H';
    // create const int arrays which store the size of the blocks, named after block letters
    const int Asize[2] = {1, 4};
    const int Bsize[2] = {1, 5};
    const int Csize[2] = {2, 3};
    const int Dsize[2] = {2, 4};
    const int Esize[2] = {2, 5};
    const int Fsize[2] = {2, 2};
    const int Gsize[2] = {3, 3};
    const int Hsize[2] = {3, 4};
    // create booleans which contain the current availability status of each block (av = availability, 14 = block with size 1x4)
    bool av14 = true;
    bool av15 = true;
    bool av23 = true;
    bool av24 = true;
    bool av25 = true;
    bool av22 = true;
    bool av33 = true;
    bool av34 = true;
    // create booleans which contain the current rotation status of each block
    bool av14rotated = false;
    bool av15rotated = false;
    bool av23rotated = false;
    bool av24rotated = false;
    bool av25rotated = false;
    bool av22rotated = false;
    bool av33rotated = false;
    bool av34rotated = false;
};

#endif  // BLOCKS_HPP_INCLUDED