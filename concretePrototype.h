#include "prototype.h"

//concrete Prototype 1:
class CloneTrooper : public Prototype{

    public:
    CloneTrooper(const CloneTrooper&); //Copy-Konstruktor
    CloneTrooper(); //Default Konstruktor
    
    void print(); //Ausgabefunktion

    Prototype* clone() const; //muss von jeder Subklasse selbst implementiert werden
};



//concrete Prototype 2:
class AstroDroid : public Prototype{
    
    public:
    AstroDroid(const AstroDroid& c); //Copy-Konstruktor
    AstroDroid(); //Default Konstruktor
    
    void print(); //Ausgabefunktion

    Prototype* clone() const; //muss von jeder Subklasse selbst implementiert werden 
};