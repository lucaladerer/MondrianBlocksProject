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

    bool setBlock(int y, int x, char c, short blocksizeX, short blocksizeY, bool rotated);

    void removeBlock(char c);
protected:
    char field[mondrianFieldSize][mondrianFieldSize];
    Win checkWin;
    Rules checkRules;
    bool legalMove;
};

#endif  // FIELD_HPP_INCLUDED