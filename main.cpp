#include "prototype.h"


int main(){

    CloneTrooper JangoFett(42, "Jango Fett");
    CloneTrooper BobaFett = (CloneTrooper*)JangoFett.clone(); //JangoFett Klonen

    JangoFett.print();
    std::cout << "\n";
    BobaFett.print();
    std::cout << "\n";

    std::cout << "Jango Adress: " << &JangoFett << "\n" << "Boba Adress: " << &BobaFett << "\n";

    AstroDroid R2D2(69, "R2D2");

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
    for(auto &i : CopyOfClones){
        i->print();
        std::cout << "Adress: " << &i << "\n\n"; //Adresse im Speicher immer unterschiedlich -> echte Klone
    }

    system("pause");
    return 0;
}