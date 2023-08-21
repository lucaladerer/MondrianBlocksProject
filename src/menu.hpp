#ifndef MENU_HPP_INCLUDED
#define MENU_HPP_INCLUDED

#include "template.hpp"

class Menu : public Template
{
public:
    // constructor
    Menu();
    // destructor
    virtual ~Menu();

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

#endif  // MENU_HPP_INCLUDED