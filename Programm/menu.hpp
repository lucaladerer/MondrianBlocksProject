#pragma once
#include "template.hpp"

class Menu : public Template
{
public:

    void printIntroduction();

    bool chooseGamemode();

    Template chooseTemplate();
    
protected:
    int m_gamemode;
    int chosenTemplate;
};