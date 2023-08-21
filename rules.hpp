#ifndef RULES_HPP_INCLUDED
#define RULES_HPP_INCLUDED

class Rules
{
public:
    bool checkLegalMove(char checkArray[][8], int verPos, int horPos);
private:
    const int lowerLimit = 0;
    const int upperLimit = 7;
};

#endif  // RULES_HPP_INCLUDED