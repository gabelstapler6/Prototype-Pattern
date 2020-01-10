#include <iostream>
#include <vector>
#include <string>


class Prototype{
    public:
    virtual void print() = 0;
    virtual Prototype* clone() = 0;
};


class CloneTrooper : public Prototype{
    private:
    std::string name;    

    public:
    CloneTrooper(CloneTrooper*);
    CloneTrooper(std::string);
    void print();
    static int getCount();

    Prototype* clone();
};

class AstroDroid : public Prototype{
    private:
    std::string identity;

    public:
    AstroDroid(AstroDroid*);
    AstroDroid(std::string);
    void print();
    static int getCount();

    Prototype* clone();
};




