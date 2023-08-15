#pragma once
#include "field.hpp"
#include <array>
const int fieldsize = 8;
const char emptyElement = '0';

class Template : public Field
{
public:

    // Array als Rückgabewert, dann muss array nicht immer neu in template1() etc. erstellt werden
    // Lösung: std::array
    // char templateEmpty();
    
    void template1();

    void template2();

    void template3();

    void printTemplate(int templateNumber);

protected:
    char m_template[fieldsize][fieldsize];
    Field baseT1;   //static?
    Field baseT2;
    Field baseT3;

    // Versuch mit std::array
    // std::array<std::array<char, fieldsize>, fieldsize> m_testTemplate;
};