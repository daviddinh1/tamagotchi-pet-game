//
//  Doge.h
//  Tamagotchi_pet
//
//  Created by David Dinh on 4/28/22.
//

#ifndef Doge_h
#define Doge_h
#include "Pet.h"
#include <iostream>
#include <string>
class Doge : public Pet
{
public:
    void bark();
    void _catch();
    void dig();
    
    
    void DisplayPetBehavior();
    void menu();
};



#endif /* Doge_h */
