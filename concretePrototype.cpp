#include "concretePrototype.h"

//concrete Prototype 1:

//die clone funktion muss wegen der Abstrakten Klasse Prototype implemetiert werden
//gibt einen Prototyp Zeiger auf ein neu allokiertes CloneTrooper Objekt zurück
//der Copy-Konstruktor wird aufgerufen
Prototype* CloneTrooper::clone() const {
    std::cout << "CloneTrooper is being cloned...\n";
    return new CloneTrooper(*this);
}

//Konstruktoren mit Initialisiererliste
//Copy-Konstruktor
CloneTrooper::CloneTrooper(const CloneTrooper& c) : Prototype(c) {
    std::cout << "CloneTrooper Copy-Constructor called...\n";
}

//Parameterisierter Konstruktor
CloneTrooper::CloneTrooper() : Prototype() {
    std::cout << "CloneTrooper Default-Constructor called...\n";
} 

//Ausgabefunktion
void CloneTrooper::print(){
    std::cout << "CloneTrooper " << this->getName() << "\nage: " << this->getAge() << "\nAdress: " << this << "\n";
}



//concrete Prototype 2:

//wie bei CloneTrooper
Prototype* AstroDroid::clone() const {
    std::cout << "AstroDroid is being cloned...\n";
    return new AstroDroid(*this);
}
//Konstruktoren mit Initialisiererliste
//Copy-Konstruktor
AstroDroid::AstroDroid(const AstroDroid& c) : Prototype(c) { 
    std::cout << "AstroDroid Copy-Constructor called...\n";
} 
//Parameterisierter Konstruktor
AstroDroid::AstroDroid() : Prototype() { 
    std::cout << "AstroDroid Default-Constructor called...\n";
} 


void AstroDroid::print(){
    std::cout << "Astrodroid " << this->getName() << "\nage: " << this->getAge() << "\nAdress: " << this << "\n";
}