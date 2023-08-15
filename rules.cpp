#pragma once
#include "rules.hpp"
#include <iostream>


// Überprüfung auf Grenzüberschreitung oder Kollision
bool Rules::checkLegalMove(char checkArray[8][8], int horSize, int verSize, int verPos, int horPos)
{
    legalMove = true;
    // Indizes kleiner 0 oder größer 7?
    if(verPos < lowerLimit || verPos > upperLimit || horPos < lowerLimit || horPos > upperLimit)
    {
        std::cout << "Ungueltige Eingabe: Grenzueberschreitung!\nBitte erneut waehlen." << std::endl;
        legalMove = false;
    }
    // Element an Stelle [verPos][horPos] != '0'? Wenn ja, ist Feld bereits belegt
    else if(checkArray[verPos][horPos] != '0')
    {
        std::cout << "Ungueltige Eingabe: Kollision!\nBitte erneut waehlen." << std::endl;
        legalMove = false;
    }
    return legalMove;
};