#include "menu.hpp"
#include "blocks.hpp"
#include <iostream>

int main()
{
    Menu startMenu;
    startMenu.printIntroduction();
    startMenu.chooseGamemode();

    int chosenTemplate = startMenu.chooseTemplate();

    std::cout << chosenTemplate << std::endl;

    Blocks userblocks;
    userblocks.setPlayTemplate(chosenTemplate);
    char blockPicked[3];
    userblocks.availableBlocks();
    std::cout << "Welchen Block moechten Sie waehlen? Geben Sie bspw. '3x4' ein" << std::endl;
    std::cin >> blockPicked;
    std::cout <<  std::endl;
    userblocks.userChooseBlock(blockPicked);
    std::cout << "Wo moechten Sie den Block platzieren?\nGeben Sie zuerst die vertikale Position ein, dann die horizontale Position.\nPositionen vom 1-8, gezaehlt von links nach rechts bzw. oben nach unten." << std::endl;
    int x, y;
    std::cin >> y >> x;
    userblocks.userSetBlock(y, x);

    // Game game1;
    // game1.printField(chosenTemplate);
    // Vorschlag!

    return 0;
}