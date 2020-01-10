#include "prototype.h"


Client::Client(){
    this->createWave();
}


void Client::createWave(){
    Dice D;
    std::string weapon, type;


    if(D.value%2 == 0){
        weapon = "sword";
        type = "light";
    }else{
        weapon = "axe";
        type = "heavy";
    }

    CloneTrooper Knight = new CloneTrooper( D.roll()*D.roll(), D.roll()*100, weapon, type );

    //KnightPrototype K = dynamic_cast<KnightPrototype*>(Knight.clone());

    int number = D.roll()*10;

    for(int i = 0; i < number; i++){
        wave.push_back(Knight.clone());
    }

    std::cout << "created " << number << " clones of:\n";

    wave.at(0)->printValues();
    std::cout << &wave.at(0) << " " << &wave.at(1);
    wave.at(1)->printValues();

}