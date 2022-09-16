//
//  Cat.cpp
//  Tamagotchi_pet
//
//  Created by David Dinh on 4/30/22.
//


#include <stdio.h>
#include "Cat.hpp"

void Cat::scratch()
{
    happyLevel = happyLevel + 30;
    hungerLevel = hungerLevel + 5;
    boredomLevel = boredomLevel - 10;
    
    std::cout << "-------------------------------------------------------\n";
    std::cout << name <<" is scratching the floor.\n";
    std::cout << '\n';
    std::cout<<"          __..--''``---....___   _..._    __\n";
    std::cout<<"/// //_.-'    .-/'';  `        ``<._  ``.''_ `. / // /\n";
    std::cout<<"///_.-' _..--.'_    |                    `( ) ) // //\n";
    std::cout<<"/ (_..-' // (< _     ;_..__               ; `' / ///\n";
    std::cout<<"/ // // //   `-._,_)' // / ``--...____..-' /// / //\n";
    std::cout << "-------------------------------------------------------\n";

}

void Cat::hunt()
{
    happyLevel = happyLevel + 15;
    hungerLevel = hungerLevel + 5;
    boredomLevel = boredomLevel - 15;
    
    std::cout << "-------------------------------------------------------\n";
    std::cout << name << " is hunting mice around the house!\n";
    std::cout <<'\n';
    std::cout<<"              ('`-''-/').___..--'''`-._\n";
    std::cout<<"               `6_ 6  )   `-.  (     ).`-.__.`)\n";
    std::cout<<"               (_Y_.)'  ._   )  `._ `. ``-..-'\n";
    std::cout<<"              _..`--'_..-_/  /--'_.' ,'\n";
    std::cout<<" o.o         (il),-''  (li),'  ((!.-'\n";
    std::cout << "-------------------------------------------------------\n";

    
    
}
void Cat::cuddle()
{
    happyLevel = happyLevel + 40;
    
    std::cout << "-------------------------------------------------------\n";
    std::cout << name <<" is cuddling all over you happily.\n";
    std::cout << '\n';
    std::cout<<"  |{      _,,,---,,_\n";
    std::cout<<"  /,`.-'`'    -.  ;-;;,_\n";
    std::cout<<" |,4-  ) )-,_. ,{ (  `'-'\n";
    std::cout<<"'---''(_/--'  `-'{_)\n";
    std::cout << "-------------------------------------------------------\n";

}


void Cat::DisplayPetBehavior()
{
    if(happyLevel >= 70){
        std::cout << "-------------------------------------------------------\n";

        std::cout << name << " is happy\n";
        std::cout << "-------------------------------------------------------\n";

    }
    if(boredomLevel >=60){
        std::cout << "-------------------------------------------------------\n";

        std::cout << name << " is bored\n";
        std::cout << "-------------------------------------------------------\n";

    }
    if(hungerLevel >= 65){
        std::cout << "-------------------------------------------------------\n";

        std::cout <<name << " is very hungry :(\n";
        std::cout << "-------------------------------------------------------\n";

    }
    if(hungerLevel ==50 && boredomLevel == 50){
        std::cout << "-------------------------------------------------------\n";

        std::cout << name << " is neither hungry or bored\n";
        std::cout << "-------------------------------------------------------\n";

    }
    if(hungerLevel <= 45){
        std::cout << "-------------------------------------------------------\n";

        std::cout << name << " is satiated\n";
        std::cout << "-------------------------------------------------------\n";

    }
    if(boredomLevel <= 45){
        std::cout << "-------------------------------------------------------\n";

        std::cout << name << " is not bored :D\n";
        std::cout << "-------------------------------------------------------\n";

    }
    if(happyLevel <= 45){
        std::cout << "-------------------------------------------------------\n";

        std::cout << name << " is unhappy\n";
        std::cout << "-------------------------------------------------------\n";

    }
    
    
}

void Cat::menu()
{
    std::cout << "-------------------------------------------------------\n";
    std::cout << "Happy level: " << happyLevel << std::endl;
    std::cout << "Hunger level: " << hungerLevel << std::endl;
    std::cout << "Boredom level: " << boredomLevel << std:: endl;
    std::cout << "-------------------------------------------------------\n";

    
}
