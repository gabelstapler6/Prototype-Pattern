#include "prototype.h"

//concrete Prototype 1:
class CloneTrooper : public Prototype{
    private:
    std::string name; //private Member-Variable 

    public:
    CloneTrooper(const CloneTrooper*); //Copy-Konstruktor
    CloneTrooper(int, std::string); //Parameterisierter Konstruktor
    
    void setVal(std::string); //setter für Member name
    std::string getVal() const; //getter für Member name
    void print(); //Ausgabefunktion

    Prototype* clone() const; //muss von jeder Subklasse selbst implementiert werden
};



//concrete Prototype 2:
class AstroDroid : public Prototype{
    private:
    std::string identity; //private Member-Variable
    
    public:
    AstroDroid(const AstroDroid* c); //Copy-Konstruktor
    AstroDroid(int age, std::string s); //Parameterisierter Konstruktor
    
    void setVal(std::string); //setter für Member identity
    std::string getVal() const; //getter für Member identity
    void print(); //Ausgabefunktion

    Prototype* clone() const; //muss von jeder Subklasse selbst implementiert werden 
};