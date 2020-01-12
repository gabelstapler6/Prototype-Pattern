#include "prototype.h"


Prototype* AstroDroid::clone(){
    return new AstroDroid(this);
}

AstroDroid::AstroDroid(std::string identity){
    this->identity = identity;
}

AstroDroid::AstroDroid(AstroDroid* copy){
    this->identity = copy->identity;
}

void AstroDroid::print(){
    std::cout << "I am the Astrodroid " << this->identity << "\n";
}

