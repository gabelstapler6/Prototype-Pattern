#include <iostream>
#include <vector>
#include <string>

typedef std::string object;

//Prototype:
class Prototype{
    private: 
    int age; //private Member-Variable

    public:
    Prototype(const Prototype*); //Copy-Konstruktor
    Prototype(int); //Parameterisierter Konstruktor

    int getAge() const; //getter für den Member age
    void setAge(int); //setter für den Member age

    //pure virtual Funktionen, die von den Subklassen implementiert werden müssen
    virtual void setVal(object) = 0;
    virtual object getVal() const = 0;
    virtual void print() = 0;
    //wichtige clone Funktion
    virtual Prototype* clone() = 0; 
};




//Prototype "Speicher"
class CloneManager{
    unsigned int size; //Größe des Arrays
    Prototype **clonePrototypes; //Pointer auf Pointer vom typ Prototype

    public:
    CloneManager(unsigned int); //Konstruktor mit wert für size 

    void savePrototype(Prototype*, int); //einen Initialisierten Prototype im Manager speichern 
    Prototype* getPrototype(unsigned int) const; //einen Prototype aus dem Manager laden
    int getSize() const; //getter für size
    
};







