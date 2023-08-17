#include "menu.hpp"
#include "blocks.hpp"
#include "win.hpp"
// #include "field.hpp"
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

    bool unresolved = true;
    while(unresolved)
        {    
            char blockPicked[3];
            userblocks.availableBlocks();
            std::cout << "Welchen Block moechten Sie waehlen? Geben Sie bspw. '3x4' ein" << std::endl;
            std::cin >> blockPicked;
            std::cout <<  std::endl;
            userblocks.userChooseBlock(blockPicked);

            bool rotateRequest = true;
            char rotateInput;
            while(rotateRequest)
            {
                std::cout << "Moechten Sie den Block drehen?\nGeben Sie ein 'y' fuer Ja oder 'n' fuer nein." << std::endl;
                std::cin >> rotateInput;
                std::cout << std::endl;
                rotateRequest = userblocks.rotateBlock(rotateInput);
                if(rotateInput == 'y' || rotateInput == 'Y' || rotateInput == 'j' || rotateInput == 'J')
                {
                    bool rotateBlock = true;
                }

            }
            std::cout << "Wo moechten Sie den Block platzieren?\nGeben Sie zuerst die horizontale Position ein, dann die vertikale Position.\nPositionen vom 1-8, gezaehlt von links nach rechts bzw. oben nach unten." << std::endl;
            int x, y;
            std::cin >> x >> y;
            userblocks.userSetBlock(y, x);  //evtl. rotateBlock übergeben?
        }
    return 0;
}