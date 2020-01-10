#include "prototype.h"


EnemyPrototype::EnemyPrototype(EnemyPrototype* copy){
    this->strength = copy->strength;
    this->lifePoints = copy->lifePoints;
    this->weapon = copy->weapon;
}

EnemyPrototype::EnemyPrototype(int strength, int lp, std::string weapon){
    this->strength = strength;
    this->lifePoints = lp;
    this->weapon = weapon;
}

void EnemyPrototype::setStrengh(int strength){
    this->strength = strength;
}

void EnemyPrototype::setLP(int lp){
    this->lifePoints = lp;
}

void EnemyPrototype::setWeapon(std::string weapon){
    this->weapon = weapon;
}

int EnemyPrototype::getStrength(){
    return this->strength;
}

int EnemyPrototype::getLP(){
    return this->lifePoints;
}

std::string EnemyPrototype::getWeapon(){
    return this->weapon;
}