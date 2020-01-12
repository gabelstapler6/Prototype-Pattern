#include "prototype.h"


int main(){
//Register mit Speicher für 2 Prototypen
    CloneRegister Register(2);

//Instanzen anlegen
    CloneTrooper JangoFett(42, "Jango Fett"); 
    AstroDroid R2D2(108, "R2D2");

    Register.savePrototype(&JangoFett, 0); //Die Instanzen im Array als Prototypen speichern
    Register.savePrototype(&R2D2, 1);

//Hier wird der Copy-Konstruktor von CloneTrooper
//aufgerufen um einen Klon zu erstellen
    CloneTrooper BobaFett = (CloneTrooper*)Register.getPrototype(0); 

    BobaFett.print();
    std::cout << "\nJango: " << &JangoFett << "\n" << "Boba: " << &BobaFett << "\n"; //Ausgabe der Objekt-Adressen auf stdout -> echte Klone

    Prototype* Clone = Register.getPrototype(0)->clone(); //aus dem Prototypen einen echten Klon erstellen
    std::cout << std::endl;

    std::cout << "Clone: " << Clone << "\n"; //Speicheradresse des Klons 
    Clone->print(); //Ausgabe der Member
    std::cout << std::endl;
    delete Clone;

    Clone = Register.getPrototype(1)->clone(); //einen R2D2 klonen
    Clone->print(); //Test ob wirklich geklont wurde
    std::cout << "\n";

//Array aus Prototypen
//hier wird jedes zweite mal je 5 mal ein Astrodroid und ein CloneTrooper geklont
//ohne dass das Array eine Ahnung hat wer jetz geklont wurde
    Prototype* Array[10];
    for(int i = 0; i < 10; i++){
        if(i%2 == 0){
            Array[i] = Register.getPrototype(1)->clone();
        }else{
            Array[i] = Register.getPrototype(0)->clone();
        }
        
    }

//hier wird das Array als ganzes nochmal geklont
//wieder ohne dass ein Beteiligter wissen muss welches Objekt geklont wird (AstroDroid oder CloneTrooper?)
    Prototype* ArrayClone[10];

    for(size_t i = 0; i < 10; i++){        
        ArrayClone[i] = Array[i]->clone();
    }

    std::cout << "\nArray      ArrayClone\n";
    for(size_t i = 0; i < 10; i++){ 
        //Ausgeben der Speicheradressen von Array und ArrayClone
        std::cout << Array[i] << "   " << ArrayClone[i] << "\n";
    }
    
    std::cout << std::endl;

//zum Test ob auch wirklich alle Membervariablen geklont wurden
    for(auto &i : ArrayClone){
        i->print();
        std::cout << std::endl;
    }

    system("pause");
    return 0;
}