#include "prototype.h"

//Copy-Konstruktor
Prototype::Prototype(const Prototype* c) : age(c->age) {
    std::cout << "Prototype Copy-Konstruktor wird aufgerufen...\n";
}
//Parameterisierter Konstruktor
Prototype::Prototype(int a) : age(a) {
    std::cout << "Prototype Konstruktor mit Parametern wird aufgerufen...\n";
} 

//getter für Member age
int Prototype::getAge() const { 
    return age; 
}
//setter für Member age
void Prototype::setAge(int a){ 
    this->age = a; 
}




//Konstruktor der den Member size definiert und Speicher für das Array allokiert
CloneManager::CloneManager(unsigned int s) : size(s) {
    clonePrototypes = new Prototype*[s];
    std::cout << "Ein CloneManager mit Platz fuer " << size << " Prototypes wurde erstellt!\n";
}

//Prototyp "speichern"
void CloneManager::savePrototype(Prototype* save, int index){
    if(index < size){
        clonePrototypes[index] = save;
        std::cout << "Ein\n";
        save->print();
        std::cout << "an der Stelle " << index <<  " wurde im Manager gespeichert!\n";
    }else{
        std::cout << "Array out of Bounds\n";
    }
}

//Prototyp "Speicher" aufrufen
Prototype* CloneManager::getPrototype(unsigned int index) const {
    if(index < size){
        std::cout << "Ein\n";
        clonePrototypes[index]->print();
        std::cout << "an der Stelle " << index << " wurde aus dem Manager geladen!\n";
        return clonePrototypes[index];
    }else{
        std::cout << "Array out of Bounds\n";
        return nullptr;
    }
}
//getter für Member size
int CloneManager::getSize() const{ 
    return size; 
}