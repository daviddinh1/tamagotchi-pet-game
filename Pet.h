//
//  Pet.h
//  Tamagotchi_pet
//
//  Created by David Dinh on 4/24/22.
//

#ifndef Pet_h
#define Pet_h
#include <iostream>
#include <string>
#include <tuple>

// in this game you want the pet mood to be low or else itll be mad
class Pet
{
protected:
    std::string name;
    int happyLevel;
    int hungerLevel;
    int boredomLevel;
    
public:
    
    void setHappyLevel(int _HappyLevel);
    void setHungerLevel(int _HungerLevel);
    void setBoredomLevel(int _BoredomLevel);
    void setName(std::string _name);

    
    int getHappylevel();
    int getHungerLevel();
    int getBoredomLevel();
    std::string getName();

    
    
    void feedPet();
    void play(); //return the new value for playing with pet ; increases mood and hunger
    
    void nextHour(); //increases either the hungerlevel or boredomlevel and decreases the happyLevel
    virtual void menu() = 0; //outputs pets stats
    virtual void DisplayPetBehavior() = 0; //will cout its levels depending on if statements
    
};


#endif /* Pet_h */
