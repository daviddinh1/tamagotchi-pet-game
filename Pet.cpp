//
//  Pet.cpp
//  Tamagotchi_pet
//
//  Created by David Dinh on 4/27/22.
//

#include "Pet.h"
#include <iostream>

#include <ctime>

#include <cstdlib>
  


void Pet::setHappyLevel(int _HappyLevel)
{
    happyLevel = _HappyLevel;
}

void Pet::setHungerLevel(int _HungerLevel)
{
    hungerLevel = _HungerLevel;
}

void Pet::setBoredomLevel(int _BoredomLevel)
{
    boredomLevel = _BoredomLevel;
}
void Pet::setName(std::string _name)
{
    name = _name;
}

int Pet::getHappylevel(){return happyLevel;}
int Pet::getHungerLevel(){return hungerLevel;}
int Pet::getBoredomLevel(){return boredomLevel;}
std::string Pet::getName(){return name;}

void Pet::feedPet()
{
    happyLevel= happyLevel + 25;
    hungerLevel = hungerLevel - 45;
    
    std::cout << "-------------------------------------------------------\n";
    std::cout << name <<" is fed.\n";
    std::cout << "-------------------------------------------------------\n";

}

void Pet::play()
{
    happyLevel = happyLevel + 30;
    hungerLevel = hungerLevel + 10;
    boredomLevel = boredomLevel - 25;
    
    std::cout << "-------------------------------------------------------\n";
    std::cout << name <<" is happier you are playing with him/her\n";
    std::cout << "-------------------------------------------------------\n";

}


void Pet::nextHour() // when users call on any action this happens

{
    srand(time(0));
    
    int rng = 10+ (std::rand() % 15);
    
    
        boredomLevel = boredomLevel + rng;
   
        hungerLevel = hungerLevel + rng;

    
    
        happyLevel = happyLevel - rng;
    
    
}


void Pet::DisplayPetBehavior()
{
    if(happyLevel >= 70){
        std::cout << "-------------------------------------------------------\n";

        std::cout << name << " is happy\n";
        std::cout << "-------------------------------------------------------\n";

    }
    else if(boredomLevel >=60){
        std::cout << "-------------------------------------------------------\n";

        std::cout << name << " is bored.\n";
        std::cout << "-------------------------------------------------------\n";

    }
    else if(hungerLevel >= 65){
        std::cout << "-------------------------------------------------------\n";

        std::cout <<name << " is very hungry. :(\n";
        std::cout << "-------------------------------------------------------\n";

    }
    else if(hungerLevel ==50 && boredomLevel == 50){
        std::cout << "-------------------------------------------------------\n";

        std::cout << name << " is neither hungry or bored.\n";
        std::cout << "-------------------------------------------------------\n";

    }
    else if(hungerLevel <= 45){
        std::cout << "-------------------------------------------------------\n";

        std::cout << name << " is satiated.\n";
        std::cout << "-------------------------------------------------------\n";

    }
    else if(boredomLevel <= 45){
        std::cout << "-------------------------------------------------------\n";
        std::cout << name << " is not bored. :D\n";
        std::cout << "-------------------------------------------------------\n";

    }
    else if(happyLevel <= 45){
        std::cout << "-------------------------------------------------------\n";
        std::cout << name << " is unhappy.\n";
        std::cout << "-------------------------------------------------------\n";

    }
    
}

void Pet::menu()//create a more aesthetic menu please
{
    std::cout << "-------------------------------------------------------\n";
    std::cout << "Happy level: " << happyLevel << std::endl;
    std::cout << "Hunger level: " << hungerLevel << std::endl;
    std::cout << "Boredom level: " << boredomLevel << std:: endl;
    std::cout << "-------------------------------------------------------\n";

}


