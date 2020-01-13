#include "concretePrototype.h"


int main(){
//Register mit Speicher für 2 Prototypen
    CloneManager Manager(2);

//Instanzen anlegen
    std::cout << "Instanzen werden angelegt:\n";
    CloneTrooper JangoFett(42, "Jango Fett"); 
    AstroDroid R2D2(108, "R2D2");

    system("cls");

    Manager.savePrototype(&JangoFett, 0); //Die Instanzen im Array als Prototypen speichern
    Manager.savePrototype(&R2D2, 1);

//Hier wird ganz normal der Copy-Konstruktor von CloneTrooper
//aufgerufen um einen Klon zu erstellen
    CloneTrooper BobaFett = (CloneTrooper*)Manager.getPrototype(0);
    std::cout << "Boba Fett: \n";
    BobaFett.print();
    system("cls");

    Prototype* Clone = Manager.getPrototype(0)->clone(); //aus dem Prototypen einen echten Klon erstellen
//Klon von JangoFett erstellt
    std::cout << std::endl;
    std::cout << "Clone: \n";
    Clone->print(); //Ausgabe der Member
    std::cout << std::endl;
    delete Clone;
    
    Clone = Manager.getPrototype(1)->clone(); //einen R2D2 klonen
    std::cout << std::endl;
    std::cout << "Clone: \n";
    Clone->print(); //Test ob wirklich geklont wurde
    system("cls");

//Array aus Prototypen
//hier wird jedes zweite mal je 5 mal ein Astrodroid und ein CloneTrooper geklont
//ohne dass das Array eine Ahnung hat wer jetz geklont wurde
    Prototype* Array[10];
    for(int i = 0; i < 10; i++){
        if(i%2 == 0){
            Array[i] = Manager.getPrototype(1)->clone();
        }else{
            Array[i] = Manager.getPrototype(0)->clone();
        } 
    }

//hier wird das Array als ganzes nochmal geklont
//wieder ohne dass ein Beteiligter wissen muss welches Objekt geklont wird (AstroDroid oder CloneTrooper?)
    Prototype* ArrayClone[10];

    for(size_t i = 0; i < 10; i++){        
        ArrayClone[i] = Array[i]->clone();
    }

    system("cls");

    std::cout << "\nArray      ArrayClone\n";
//Ausgeben der Speicheradressen von Array und ArrayClone
    for(size_t i = 0; i < 10; i++){ 
        std::cout << Array[i] << "   " << ArrayClone[i] << "\n";
    }
    
    std::cout << std::endl;

//zum Test ob auch wirklich alle Membervariablen geklont wurden
    for(auto &i : ArrayClone){
        i->setVal("Clone");
        i->print();
        std::cout << std::endl;
    }

    std::cout << "Originales Array:\n\n";
//Ausgabe des Originalen Arrays von Klonen
//die Member name und identity wurde hier nicht geändert 
    for(auto &i : Array){
        i->print();
        std::cout << std::endl;
    }


    system("pause");
    return 0;
}