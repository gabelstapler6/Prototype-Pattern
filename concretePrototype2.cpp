#include "prototype.h"


Prototype* AstroDroid::clone(){
    return new AstroDroid(this);
}

void AstroDroid::print(){
    std::cout << "I am the Astrodroid " << this->identity << "\nand I am " << this->getAge() << " years old\n";
}

