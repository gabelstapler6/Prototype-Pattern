#include "dice.h"

Dice::Dice(){
    srand(time(NULL));
    value = rand()%6+1;
}

int Dice::roll(){
    value = rand()%6+1;
    return value;
}