#include "prototype.h"


int main(){
    
    CloneRegister Register(2);

    CloneTrooper JangoFett(42, "Jango Fett"); //Instanzen anlegen
    AstroDroid R2D2(108, "R2D2");

    Register.savePrototype(&JangoFett, 0); //Die Instanzen im Array als Prototypen speichern
    Register.savePrototype(&R2D2, 1);

    CloneTrooper BobaFett = (CloneTrooper*)Register.getPrototype(0); //Hier wird der Copy-Konstruktor von CloneTrooper
                                                                     //aufgerufen um einen Klon zu erstellen
    BobaFett.print();
    std::cout << "Jango: " << &JangoFett << "\n" << "Boba: " << &BobaFett << "\n"; //Ausgabe der Objekt-Adressen auf stdout -> echte Klone

    Prototype* Clone = Register.getPrototype(0)->clone(); //aus dem Prototypen einen echten Klon erstellen

    std::cout << "Clone: " << Clone << "\n"; //Speicheradresse des Klons 
    Clone->print(); //Ausgabe der Member
    delete Clone;

    Clone = Register.getPrototype(1)->clone(); //einen R2D2 klonen
    Clone->print(); //Ausgabe

    Prototype* Array[10]; //Array aus Prototypen
    for(auto &i: Array){  //hier wird jedes zweite mal je 5 mal ein Astrodroid und ein CloneTrooper geklont
        int count = 0;    //ohne dass das Array eine Ahnung hat wer jetz geklont wurde
        if(count % 2 == 0){
            i = Register.getPrototype(0)->clone(); 
        }
        i = Register.getPrototype(1)->clone();
    }

    Prototype* ArrayClone[10];

    for(size_t i = 0; i < 10; i++){        //hier wird das Array als ganzes nochmal geklont
        ArrayClone[i] = Array[i]->clone();
    }
    
    std::cout << "Array     ArrayClone\n";
    for(size_t i = 0; i < 10; i++){ 
        std::cout << Array[i] << " " << ArrayClone[i] << "\n"; //Ausgeben der Speicheradressen von Array und ArrayClone
    }

    
    system("pause");
    return 0;
}