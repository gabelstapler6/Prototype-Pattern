#include "dice.h"

int Dice::roll(){
    time(NULL);
    value = rand()%6+1;
    
    return value;
}