#include "prototype.h"


Prototype* AstroDroid::clone(){
    return new AstroDroid(this);
}

AstroDroid::AstroDroid(AstroDroid* copy){
    this->identity = copy->identity;
}

AstroDroid::AstroDroid(std::string identity){
    this->identity = identity;
}

void AstroDroid::print(){
    std::cout << "I am the Astrodroid " << this->identity << "\n";
}

