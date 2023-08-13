#include "blocks.hpp"
#include <string.h>
using namespace std;

void Block::createBlock(int input)
{
switch(input)
{
case 1: playField.editFieldForTemplate(3, 4);
case 12:
{
    playField.editFieldForTemplate(2, 3);
    playField.editFieldForTemplate(2, 4);
    playField.editFieldForTemplate(2, 5);
    playField.editFieldForTemplate(3, 3);
    playField.editFieldForTemplate(3, 4);
    playField.editFieldForTemplate(3, 5);
    playField.editFieldForTemplate(4, 3);
    playField.editFieldForTemplate(4, 4);
    playField.editFieldForTemplate(4, 5);
    playField.editFieldForTemplate(5, 3);
    playField.editFieldForTemplate(5, 4);
    playField.editFieldForTemplate(5, 5);
}
}
}