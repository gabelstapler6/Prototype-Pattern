#include "prototype.h"


Prototype* AstroDroid::clone(){
    AstroDroid *Clone = new AstroDroid(this->identity);
    return Clone;
}


AstroDroid::AstroDroid(std::string identity){
    this->identity = identity;
}

void AstroDroid::print(){
    std::cout << "I am the Astrodroid " << this->identity << "\n";
}

