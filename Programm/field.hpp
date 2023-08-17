#pragma once

class Field
{
    public:
        void createField();

        void printField();

        void editFieldForTemplate(int y, int x);

        void setBlock(int y, int x, char c, short blocksizeX, short blocksizeY);

    protected:
        char feld[8][8];

};