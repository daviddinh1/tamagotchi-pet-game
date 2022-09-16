//
//  Pepe.h
//  Tamagotchi_pet
//
//  Created by David Dinh on 4/28/22.
//

#ifndef Pepe_h
#define Pepe_h
#include "Pet.h"
#include <iostream>
#include <string>
class Pepe : public Pet
{  
public:
    void leap();
    void dance();
    void glide();
    
    void DisplayPetBehavior();
    void menu();
    
};

#endif /* Pepe_h */
