#include "concretePrototype.h"

//concrete Prototype 1:

//die clone funktion muss wegen der Abstrakten Klasse Prototype implemetiert werden
//gibt einen Prototyp Zeiger auf ein neu allokiertes CloneTrooper Objekt zurück
//der Copy-Konstruktor wird aufgerufen
Prototype* CloneTrooper::clone() const {
    std::cout << "...Klon wird Produziert\n";
    return new CloneTrooper(this);
}

//Konstruktoren mit Initialisiererliste
//Copy-Konstruktor
CloneTrooper::CloneTrooper(const CloneTrooper* c) : name(c->name), Prototype(c) {
    std::cout << "CloneTrooper wird kopiert...fertig!\n";
}

//Parameterisierter Konstruktor
CloneTrooper::CloneTrooper(int age, std::string n) : name(n), Prototype(age) {
    std::cout << "CloneTrooper wird mit Parametern erstellt...loading...fertig!\n";
} 

//setter
void CloneTrooper::setVal(std::string n){
    this->name = n;
}
//getter
std::string CloneTrooper::getVal() const{
    return this->name;
}

//Ausgabefunktion
void CloneTrooper::print(){
    std::cout << "CloneTrooper " << this->name << "\nage: " << this->getAge() << "\nAdress: " << this << "\n";
}



//concrete Prototype 2:

//wie bei CloneTrooper
Prototype* AstroDroid::clone() const {
    std::cout << "...Klon wird Produziert\n";
    return new AstroDroid(this);
}
//Konstruktoren mit Initialisiererliste
//Copy-Konstruktor
AstroDroid::AstroDroid(const AstroDroid* c) : identity(c->identity), Prototype(c) { 
    std::cout << "AstroDroid wird kopiert...fertig!\n";
} 
//Parameterisierter Konstruktor
AstroDroid::AstroDroid(int age, std::string s) : identity(s), Prototype(age) { 
    std::cout << "AstroDroid wird mit Parametern erstellt...loading...fertig!\n";
} 


//setter
void AstroDroid::setVal(std::string n){
    this->identity = n;
}

//getter
std::string AstroDroid::getVal() const{
    return this->identity;
}

void AstroDroid::print(){
    std::cout << "Astrodroid " << this->identity << "\nage: " << this->getAge() << "\nAdress: " << this << "\n";
}