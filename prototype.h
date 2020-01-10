#include <iostream>
#include <vector>
#include <string>
#include "dice.h"

class EnemyPrototype{
    private:
    int strength;
    int lifePoints;
    std::string weapon;

    protected:
    EnemyPrototype(EnemyPrototype*);

    public:
    EnemyPrototype(int, int, std::string);
    void setStrengh(int);
    void setLP(int);
    void setWeapon(std::string);
    int getStrength();
    int getLP();
    std::string getWeapon();

    virtual void printValues() = 0;

    virtual EnemyPrototype* clone() = 0;
};



class KnightPrototype : public EnemyPrototype{

    private:
    std::string type;
    

    public:
    KnightPrototype(int, int, std::string, std::string);
    KnightPrototype(KnightPrototype*);
    
    void setType(std::string);
    std::string getType();
    void printValues();

    EnemyPrototype* clone();
};



class EnemyForce{
    public:
    std::vector<EnemyPrototype*> wave;
    EnemyForce();
    void createWave();

};



