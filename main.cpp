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

    // while(playAgain)

    static int chosenTemplate = startMenu.chooseTemplate();

    // std::cout << chosenTemplate << std::endl;

    Blocks userblocks;
    userblocks.setPlayTemplate(chosenTemplate);

    bool unresolved = true;
    while(unresolved)
    {
            start:
            char blockPicked[3];
            int removeBlockRequest = 1;
            while(removeBlockRequest == 1)
            {
                removeBlockRequest = userblocks.deleteBlock();
                if(removeBlockRequest == 2)
                {
                    userblocks.printFinalField();
                    goto start;
                }
            }
            bool userChooseBlockRequest = true;
            userblocks.availableBlocks();
            while(userChooseBlockRequest)
            {
            std::cout << "Welchen Block moechten Sie setzen? Geben Sie bspw. '3x4' ein" << std::endl;
            std::cin >> blockPicked;
            std::cout <<  std::endl;
            userChooseBlockRequest = userblocks.userChooseBlock(blockPicked);
            }
            bool rotateRequest = true;
            char rotateInput;
            while(rotateRequest)
            {
                std::cout << "Moechten Sie den Block drehen?\nGeben Sie ein 'y' fuer Ja oder 'n' fuer nein." << std::endl;
                std::cin >> rotateInput;
                std::cout << std::endl;
                if(rotateInput == 'y' || rotateInput == 'Y' || rotateInput == 'j' || rotateInput == 'J')
                {
                    bool rotateBlock = true;
                }
                rotateRequest = userblocks.rotateBlock(rotateInput);
            }
            int setBlockRequest = 1;
            while(setBlockRequest == 1)
            {
                // Zeile geht über Bildschirm hinaus um Leserlichkeit zu verbessern / Textausgabe nicht für Verständnis vom Code relevant
                std::cout << "Wo moechten Sie den Block platzieren?\nGeben Sie zuerst die horizontale Position ein, dann die vertikale Position.\nPositionen vom 1-8, gezaehlt von links nach rechts bzw. oben nach unten." << std::endl;
                int x, y;
                std::cin >> x >> y;
                setBlockRequest = userblocks.userSetBlock(y, x);  //evtl. rotateBlock übergeben?
            }
            if(setBlockRequest == 2) goto start;
    }
    userblocks.printFinalField();
    return 0;
}