#include "prototype.h"


EnemyPrototype* KnightPrototype::clone(){
    return new KnightPrototype(this);
}

KnightPrototype::KnightPrototype(int strength, int lp, std::string weapon, std::string type) 
: EnemyPrototype(strength, lp, weapon){
    this->type = type;
}

KnightPrototype::KnightPrototype(KnightPrototype* copy) : EnemyPrototype(copy){
    this->type = copy->type;
}

void KnightPrototype::setType(std::string type){
    this->type = type;
}

std::string KnightPrototype::getType(){
    return this->type;
}

void KnightPrototype::printValues(){
    std::cout << this->getType() << "-Knight\n"
              << this->getStrength() << " strength\n"
              << this->getLP() << " Life Points\n"
              << "wielding a " << this->getWeapon() << "\n\n";
}