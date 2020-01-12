#include "prototype.h"


Prototype* CloneTrooper::clone(){
    return new CloneTrooper(this);
}

void CloneTrooper::print(){
    std::cout << "I am the Clone " << this->name << "\nand I am " << this->getAge() << " years old\n";
}