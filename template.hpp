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
    // Array als Rückgabewert, dann muss array nicht immer neu in template1() etc. erstellt werden
    // Lösung: std::array
    // char templateEmpty();
    
    void template1();

    void template2();

    void template3();

    void printTemplate(int templateNumber);

    void pasteToTemplate(int y, int x, char c, short blocksizeX, short blocksizeY);
protected:
    char m_template[fieldsize][fieldsize];
    Field baseT1;   //static?
    Field baseT2;
    Field baseT3;
    short pickedTemplate;

    // Versuch mit std::array
    // std::array<std::array<char, fieldsize>, fieldsize> m_testTemplate;
};

#endif  // TEMPLATE_HPP_INCLUDED