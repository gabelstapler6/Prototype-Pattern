#include "prototype.h"


Prototype* CloneTrooper::clone(){
    return new CloneTrooper(this);
}

CloneTrooper::CloneTrooper(CloneTrooper* copy){
    this->name = copy->name;
}

CloneTrooper::CloneTrooper(std::string name){
    this->name = name;
}

void CloneTrooper::print(){
    std::cout << "I am the Clone " << this->name << "\n";
}