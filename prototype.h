#include <iostream>
#include <vector>
#include <string>


class Prototype{
    private:
    int age;

    public:
    Prototype(int a) : age(a) {}
    Prototype(const Prototype* c) : age(c->age) {}

    int getAge() const { return age; }
    virtual void print() = 0;
    virtual Prototype* clone() = 0;
};



class CloneTrooper : public Prototype{
    private:
    std::string name;    

    public:
    CloneTrooper(const CloneTrooper* c) : name(c->name), Prototype(c) {}
    CloneTrooper(int age, std::string n) : name(n), Prototype(age) {}

    void print();

    Prototype* clone();
};

class AstroDroid : public Prototype{
    private:
    std::string identity;
    
    public:
    AstroDroid(const AstroDroid* c) : identity(c->identity), Prototype(c) {}
    AstroDroid(int age, std::string s) : identity(s), Prototype(age) {}
    
    void print();

    Prototype* clone();
};




