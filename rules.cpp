#include "rules.hpp"
#include <iostream>

// Check for crossing of boundaries or collision --> given field gets checked at each position of new Element of chosen block
bool Rules::checkLegalMove(char checkArray[][8], int verPos, int horPos)
{
    // check if Index is lower than 0 or higher than 7
    if(verPos < lowerLimit || verPos > upperLimit || horPos < lowerLimit || horPos > upperLimit)
    {
        std::cout << "Input not valid: Outside of barrier!\nPlease choose again." << std::endl;
        return false;
    }
    // Check if element at [verPos][horPos] != '0'? if yes, field is not empty
    else if(checkArray[verPos][horPos] != '0')
    {
        std::cout << "Input not valid: Collision!\nPlease choose again." << std::endl;
        return false;
    }
    return true;
};