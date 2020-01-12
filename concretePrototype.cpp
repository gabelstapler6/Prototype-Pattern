#include "concretePrototype.h"

//concrete Prototype 1:

//clone funktion muss wegen der Abstrakten Klasse Prototype implemetiert werden
//gibt einen Prototyp Zeiger auf ein neu allokiertes CloneTrooper Objekt zurück
//der Copy-Konstruktor wird aufgerufen
Prototype* CloneTrooper::clone(){
    return new CloneTrooper(this);
}


void CloneTrooper::print(){
    std::cout << "I am the Clone " << this->name << "\nand I am " << this->getAge() << " years old\n";
}

//concrete Prototype 2:

//wie bei CloneTrooper
Prototype* AstroDroid::clone(){
    return new AstroDroid(this);
}

void AstroDroid::print(){
    std::cout << "I am the Astrodroid " << this->identity << "\nand I am " << this->getAge() << " years old\n";
}