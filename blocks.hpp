#ifndef BLOCKS_HPP_INCLUDED
#define BLOCKS_HPP_INCLUDED

#include "template.hpp"
#include "rules.hpp"

class Blocks
{
    public:
        Blocks();
        virtual ~Blocks();

        void setPlayTemplate(int chooseTemplate);

        bool userChooseBlock(char chosenBlock[3]);

        bool userSetBlock(int y, int x);

        void availableBlocks();

        bool rotateBlock(char yn);
    protected:
    Template playTemplate;
    Rules checkMove;

    private:
    char blockbuffer;
    
    const char block1x4 = 'A';
    const char block1x5 = 'B';
    const char block2x3 = 'C';
    const char block2x4 = 'D';
    const char block2x5 = 'E';
    const char block2x2 = 'F';
    const char block3x3 = 'G';
    const char block3x4 = 'H';

    const int Asize[2] = {1, 4};
    const int Bsize[2] = {1, 5};
    const int Csize[2] = {2, 3};
    const int Dsize[2] = {2, 4};
    const int Esize[2] = {2, 5};
    const int Fsize[2] = {2, 2};
    const int Gsize[2] = {3, 3};
    const int Hsize[2] = {3, 4};

    bool av14 = true;
    bool av15 = true;
    bool av23 = true;
    bool av24 = true;
    bool av25 = true;
    bool av22 = true;
    bool av33 = true;
    bool av34 = true;

    bool av14rotated = false;
    bool av15rotated = false;
    bool av23rotated = false;
    bool av24rotated = false;
    bool av25rotated = false;
    bool av22rotated = false;
    bool av33rotated = false;
    bool av34rotated = false;

    bool posOk = true;
};

#endif  // BLOCKS_HPP_INCLUDED