#pragma once
#include "Template.hpp"

class Menu : public Template
{
public:
    // Menu()
    // : m_gamemode()
    // , m_chosenTemplate()
    // {};

    // ~Menu()
    // {};

    void printIntroduction();

    bool chooseGamemode();

    int chooseTemplate();

        
protected:
    int m_gamemode;
    int m_chosenTemplate;
    Template template1;
    Template template2;
    Template template3;
    
};