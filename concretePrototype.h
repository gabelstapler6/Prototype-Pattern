#include "prototype.h"

//concrete Prototype 1:
class CloneTrooper : public Prototype{
    private:
    //private Member-Variable
    std::string name;    

    public:
    //Konstruktoren mit Initialisiererliste
    CloneTrooper(const CloneTrooper* c) : name(c->name), Prototype(c) {} //Copy-Konstruktor
    CloneTrooper(int age, std::string n) : name(n), Prototype(age) {} //Parameterisierter Konstruktor

    void print();

    Prototype* clone();
};

//concrete Prototype 2:
class AstroDroid : public Prototype{
    private:
    //private Member-Variable
    std::string identity;
    
    public:
    //Konstruktoren mit Initialisiererliste
    AstroDroid(const AstroDroid* c) : identity(c->identity), Prototype(c) {} //Copy-Konstruktor
    AstroDroid(int age, std::string s) : identity(s), Prototype(age) {} //Parameterisierter Konstruktor
    
    //Ausgabefunktion 
    void print();

    Prototype* clone();
};