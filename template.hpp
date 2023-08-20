#ifndef TEMPLATE_HPP_INCLUDED
#define TEMPLATE_HPP_INCLUDED

#include "field.hpp"
// #include <array>
const int fieldsize = 8;
const char emptyElement = '0';

class Template : public Field
{
public:
    Template();
    virtual ~Template();
    
    void template1();

    void template2();

    void template3();

    void printTemplate(int templateNumber);

    bool pasteToTemplate(int y, int x, char c, short blocksizeX, short blocksizeY, bool rotated);

    void removeFromTemplate(char c);

    void printFinal();
protected:
    char m_template[fieldsize][fieldsize];
    Field baseT1;   //static?
    Field baseT2;
    Field baseT3;
    short pickedTemplate;

};

#endif  // TEMPLATE_HPP_INCLUDED