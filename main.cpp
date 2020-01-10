#include "prototype.h"


int main(){

    CloneTrooper JangoFett("Jango Fett");
    CloneTrooper BobaFett = (CloneTrooper*) JangoFett.clone(); //Clone mit Cast wegen C++

    JangoFett.print();
    BobaFett.print();

    AstroDroid R2D2("R2D2");

    Prototype* Clones[10];

    //5 Klone je ein concretePrototype erstellen
    for(int i = 0; i < 10; i++){
        if(i%2 == 0){
            Clones[i] = R2D2.clone(); 
        }else{
            Clones[i] = JangoFett.clone();
        }
    }

    Prototype* CopyOfClones[10];

    //In ein zweites Array Kopieren
    for(int i = 0; i < 10; i++){
        CopyOfClones[i] = Clones[i]->clone();
    }

    std::cout << std::endl;
    //Array augeben
    for(int i = 0; i < 10; i++){
        CopyOfClones[i]->print();
        std::cout << "Adress: " << &CopyOfClones[i] << "\n\n"; //Adresse im Speicher immer unterschiedlich -> echte Klone
    }

    system("pause");
    return 0;
}