#pragma once
#include "template.hpp"

class Menu : public Template
{
public:

    void printIntroduction();

    bool chooseGamemode();

    void chooseTemplate();
    
private:
    int m_gamemode;
};