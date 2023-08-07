#pragma once
#include <string>
const int fieldsize = 8;

class Template
{
public:
    void template1();

    void template2();

    void template3();

private:
    char m_template[fieldsize][fieldsize];
};