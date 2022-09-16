//
//  Cat.hpp
//  Tamagotchi_pet
//
//  Created by David Dinh on 4/30/22.
//

#ifndef Cat_h
#define Cat_h

#include <stdio.h>
#include "Pet.h"
#include <iostream>
#include <string>
class Cat : public Pet
{
public:
    void scratch();
    void cuddle();
    void hunt();
    
    void DisplayPetBehavior();
    void menu();
    
};



#endif /* Cat_hpp */
