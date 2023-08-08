#pragma once
#include <string>
const int fieldsize = 8;

class Template
{
public:

    // Array als Rückgabewert, dann muss array nicht immer neu in template1() etc. erstellt werden
    // Lösung: std::arry
    // char templateEmpty();
    
    void template1();

    void template2();

    void template3();

private:
    char m_template[fieldsize][fieldsize];
};