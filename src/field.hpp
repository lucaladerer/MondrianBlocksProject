#ifndef FIELD_HPP_INCLUDED
#define FIELD_HPP_INCLUDED

#include "stats.hpp"
#include "win.hpp"
#include "rules.hpp"

const int mondrianFieldSize = 8;

class Field : public Win, public Rules
{
public:
    Field()
    {
       // Stats::turns = 0;     Auskommentiert wegen Compilerfehler!
    };

    ~Field()
    {};

    void createField();

    void printField();

    void editFieldForTemplate(int y, int x);
    // method with boolean return value allowing the user to set a block in selected object of Class Field
    bool setBlock(int y, int x, char c, short blocksizeX, short blocksizeY, bool rotated);
    // method allowing the user to delete a selected block from current field array playing on
    void removeBlock(char c);

protected:
    // static int mondrianFieldSizeY;
    // static int mondrianFieldSizeX;
    char field[mondrianFieldSize][mondrianFieldSize];
    Win checkWin;
    Rules checkRules;
    bool legalMove;

private:
    char fieldsizetxt[3];

};

#endif  // FIELD_HPP_INCLUDED