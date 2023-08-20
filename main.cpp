#include "menu.hpp"
#include "blocks.hpp"
#include "win.hpp"
// #include "field.hpp"
#include <iostream>

int main()
{
    // create object of Class Menu (menu.hpp)
    Menu startMenu;
    // print Introduction from Menu
    startMenu.printIntroduction();

    // create boolean to check if request startMenu.chooseGamemode() is completed
    bool chooseGamemodeRequest = true;
    while(chooseGamemodeRequest)
    {
        // make the user choose a gamemode and initialize chooseGamemodeRequest with return value from startMenu.chooseGamemode()
        chooseGamemodeRequest = startMenu.chooseGamemode();
    }

    // while(playAgain)

    // create static int to store the picked template
    static int chosenTemplate;
    // ask user for template pick and create Object from Class field > template, save return value in static int ( 1 || 2 || 3)
    bool chooseTemplateRequest = true;
    while(chooseTemplateRequest)
    {
        // assign return value of method chooseTemplate() to static int
        chosenTemplate = startMenu.chooseTemplate();
        // if the user picked a template correctly, exit the while loop
        if(chosenTemplate != 0) chooseTemplateRequest = false;
    }

    // create Object of Class Blocks (blocks.hpp)
    Blocks userblocks;
    // set picked template in Object userblocks
    userblocks.setPlayTemplate(chosenTemplate);

    // create boolean to repeat asking for user input while template is unresolved
    bool unresolved = true;
    while(unresolved)
    {
        while(true) {
            // create goto position
            // create char for saving the block picked by the user
            char blockPicked[3];
            // create int to check if the user decided to remove a block correctly
            int removeBlockRequest = 1;
            // while userblocks.deleteBlock() received wrong user input
            while (removeBlockRequest == 1) {
                // ask the user whether to delete or set a block, initialize int value with return value
                removeBlockRequest = userblocks.deleteBlock();
                // if the user deleted a block
            }
            if (removeBlockRequest == 2) {
                // print the new field and then go back to start:
                userblocks.printFinalField();
                break;
            }
            // create boolean to check if the user chose a block to set correctly
            bool userChooseBlockRequest = true;
            // print the blocks available to set to console
            userblocks.availableBlocks();
            while (userChooseBlockRequest) {
                std::cout << "Which block do you want to set? For example enter '3x4'" << std::endl;
                // store the picked block in char blockPicked[3]
                std::cin >> blockPicked;
                std::cout << std::endl;
                // pass the chosen block through to object userblocks and save return value in boolean
                userChooseBlockRequest = userblocks.userChooseBlock(blockPicked);
            }
            // create boolean to check if user input for block rotation was correct
            bool rotateRequest = true;
            // create char to save user input
            char rotateInput;
            while (rotateRequest) {
                std::cout << "Do you want to rotate your picked block?\nEnter 'y' for yes or 'n' for no."
                          << std::endl;
                // store input in char rotateInput
                std::cin >> rotateInput;
                std::cout << std::endl;
                if (rotateInput == 'y' || rotateInput == 'Y' || rotateInput == 'j' || rotateInput == 'J') {
                    bool rotateBlock = true;
                }
                // pass user input through to object userblocks to rotate block, store return value in rotateRequest
                rotateRequest = userblocks.rotateBlock(rotateInput);
            }
            // create integer to check if user typed in correct block coordinates
            int setBlockRequest = 1;
            // while the input was spelled wrong
            while (setBlockRequest == 1) {
                // line is longer than screen to simplify reading the code since it's not relevant for understanding the code
                std::cout
                        << "Where do you want to place your block?\nEnter the horizontal position first, then the vertical position.\nPositions go from 1-8, counted from left to right / top to bottom."
                        << std::endl;
                // create integers for block position
                int x, y;
                // save the desired position in integers x/y
                std::cin >> x >> y;
                // set the users selected block to desired position y and x and save return value in setBlockRequest
                setBlockRequest = userblocks.userSetBlock(y, x);
            }
            // if the block selected by the user doesn't fit in the field anymore go back to the beginning of while(unresolved) loop
            if (setBlockRequest == 2) break;
        }
    }
    userblocks.printFinalField();
    return 0;
}