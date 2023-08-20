#include "rules.hpp"
#include <iostream>


// Überprüfung auf Grenzüberschreitung oder Kollision
bool Rules::checkLegalMove(char checkArray[][8], int verPos, int horPos)
{
    // Indizes kleiner 0 oder größer 7?
    if(verPos < lowerLimit || verPos > upperLimit || horPos < lowerLimit || horPos > upperLimit)
    {
        std::cout << "Input not valid: Outside of barrier!\nPlease choose again." << std::endl;
        return false;
    }
    // Element an Stelle [verPos][horPos] != '0'? Wenn ja, ist Feld bereits belegt
    else if(checkArray[verPos][horPos] != '0')
    {
        std::cout << "Input not valid: Collision!\nPlease choose again." << std::endl;
        return false;
    }
    return true;
};