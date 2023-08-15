class Rules
{
public:
    bool checkLegalMove(char checkArray[8][8], int horSize, int verSize, int verPos, int horPos);
private:
    const int lowerLimit = 0;
    const int upperLimit = 7;
    bool legalMove;
};