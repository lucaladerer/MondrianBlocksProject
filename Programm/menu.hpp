#pragma once
#include "template.hpp"

class Menu : public Template
{
public:

    void printIntroduction();

    bool chooseGamemode();

    Template chooseTemplate();
    
private:
    int m_gamemode;
};