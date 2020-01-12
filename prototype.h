#include <iostream>
#include <vector>
#include <string>

//Prototype:
class Prototype{
    private:
    //private Member-Variable 
    int age;

    public:
    Prototype(int a) : age(a) {}
    Prototype(const Prototype* c) : age(c->age) {} //Copy-Konstruktor

    int getAge() const { return age; }
    void setAge(int a){ this->age = a; }
    virtual void print() = 0;
    //pure virtual Funtkion clone die von den Subklassen implementiert werden muss 
    virtual Prototype* clone() = 0; 
};

//Prototype "Speicher"
class CloneRegister{
    int size;
    Prototype **clonePrototypes;

    public:
    CloneRegister(int s) : size(s) {
        clonePrototypes = new Prototype*[s];
    }

    void savePrototype(Prototype*, int);
    Prototype* getPrototype(int index) const;
    int getSize(){ return size; }
};
//Prototyp "speichern"
void CloneRegister::savePrototype(Prototype* save, int index){
    if(index < size){
        clonePrototypes[index] = save;
    }else{
        std::cout << "Array out of Bounds\n";
    }
}
//Prototyp "Speicher" aufrufen
Prototype* CloneRegister::getPrototype(int index) const {
    if(index < size){
        return clonePrototypes[index];
    }else{
        std::cout << "Array out of Bounds\n";
        return nullptr;
    }
}






