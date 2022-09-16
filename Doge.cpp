//
//  Doge.cpp
//  Tamagotchi_pet
//
//  Created by David Dinh on 4/28/22.
//

#include <stdio.h>
#include "Doge.h"

void Doge::bark() // change values just test case to see if derived classes work
{
    
    happyLevel = happyLevel + 15;
    hungerLevel = hungerLevel + 10;
    boredomLevel = boredomLevel - 25;
    std::cout << "-------------------------------------------------------\n";

    std::cout << name <<" is barking at birds.\n";
    std::cout << std::endl;
    std::cout <<"              ;~~,____      ^.^"<<std::endl;
    std::cout<<":-....,-------'`-'._.''    ^.^"<<std::endl;
    std::cout <<" `-,,,  ,       ,'~~'       ^.^"<<std::endl;
    std::cout <<"     ; ,'~.__; /"<<std::endl;
    std::cout <<"     :|      :|"<<std::endl;
    std::cout <<"     `-'     `-''"<<std::endl;
    
    std::cout << "-------------------------------------------------------\n";


}
void Doge::dig()
{
    happyLevel = happyLevel + 25;
    hungerLevel = hungerLevel +5;
    boredomLevel = boredomLevel -25;
    std::cout << "-------------------------------------------------------\n";
    std::cout << name << " is digging massive holes in your yard!\n";
    std::cout << std::endl;
    std::cout<<"               ;~~,__" << std::endl;
    std::cout<<":-....,-------'`-'._.'" << std::endl;
    std::cout<<" `-,,,  ,       ,'~~'" << std::endl;
    std::cout<<"     ; ,'~.__; /--." << std::endl;
    std::cout <<"    :| :|   :|``(;" << std::endl;
    std::cout<<"     `-'`-'  `-'" << std::endl;
    std::cout << "-------------------------------------------------------\n";

}

void Doge::_catch()
{
    
    happyLevel = happyLevel +30;
    hungerLevel = hungerLevel + 15;
    boredomLevel = boredomLevel - 15;
    std::cout << "-------------------------------------------------------\n";

    std::cout << name <<" is happy you are playing catch with him/her.\n";
    std::cout << std::endl;
    std::cout <<"                .--~~,__" << std::endl;
    std::cout <<"   :-....,-------`~~'._.'" << std::endl;
    std::cout <<"    `-,,,  ,_      ;'~U'" << std::endl;
    std::cout <<"   _,-' ,'`-__; '--." << std::endl;
    std::cout << "  (_/'~~      ''''(;" << std::endl;

    std::cout << "-------------------------------------------------------\n";

    
}

void Doge::DisplayPetBehavior()
{
    if(happyLevel >= 72){
        std::cout << "-------------------------------------------------------\n";

        std::cout << name << " is happy\n";
        std::cout << "-------------------------------------------------------\n";

    }
    if(boredomLevel >=55){
        std::cout << "-------------------------------------------------------\n";

        std::cout << name << " is bored\n";
        std::cout << "-------------------------------------------------------\n";

    }
    if(hungerLevel >= 69){
        std::cout << "-------------------------------------------------------\n";

        std::cout <<name << " is very hungry :(\n";
        std::cout << "-------------------------------------------------------\n";

    }
    if(hungerLevel ==50 && boredomLevel == 50){
        std::cout << "-------------------------------------------------------\n";

        std::cout << name << " is neither hungry or bored\n";
        std::cout << "-------------------------------------------------------\n";

    }
    if(hungerLevel <= 40){
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

void Doge::menu()
{
    
    std::cout << "-------------------------------------------------------\n";
    std::cout << "Happy level: " << happyLevel << std::endl;
    std::cout << "Hunger level: " << hungerLevel << std::endl;
    std::cout << "Boredom level: " << boredomLevel << std:: endl;
    std::cout << "-------------------------------------------------------\n";

}
