#ifndef FIELD_HPP_INCLUDED
#define FIELD_HPP_INCLUDED

const int mondrianFieldSize = 8;

class Field
{
public:
    void createField();

    void printField();

    void editFieldForTemplate(int y, int x);

    void setBlock(int y, int x, char c, short blocksizeX, short blocksizeY);
protected:
    char field[mondrianFieldSize][mondrianFieldSize];
};

#endif  // FIELD_HPP_INCLUDED