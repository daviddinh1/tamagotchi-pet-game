//
//  pepe.cpp
//  Tamagotchi_pet
//
//  Created by David Dinh on 4/30/22.
//

#include <stdio.h>
#include "Pepe.h"

void Pepe::leap()
{
    happyLevel = happyLevel + 30;
    hungerLevel = hungerLevel + 10;
    boredomLevel = boredomLevel - 40;
    
    std::cout << "-------------------------------------------------------\n";
    std::cout << name <<" is leaping over trees!!\n";
    std::cout << std::endl;
    std::cout<<" .(0,-.0)._" << std::endl;
    std::cout<<"(------,   ` -. _" << std::endl;
    std::cout<<"  |.____/         V._" << std::endl;
    std::cout<<"   / /  /  __          V_._" << std::endl;
    std::cout<<"  / /   / ./  |_____./'|._  < " << std::endl;
    std::cout<<" /VV    /V^    |  |       V'"<<std::endl;
    std::cout<<"               |_ |_" << std::endl;
    std::cout<<"                ./VV'" << std::endl;

    std::cout << "-------------------------------------------------------\n";

    //add picture of frog leaping
}

void Pepe::dance()
{
    happyLevel = happyLevel + 40;
    hungerLevel = hungerLevel + 10;
    boredomLevel = boredomLevel - 35;
    std::cout << "-------------------------------------------------------\n";
    std::cout << '\n';
    std::cout << name << " is dancing like a mad man.\n";
    std::cout <<" o| '|o" << std::endl;
    std::cout<< "{_|  |_}" << std::endl;
    std::cout <<"  |  |" << std::endl;
    std::cout <<"   --" << std::endl;
     std::cout <<"  V  V"<< std::endl;
    std::cout << "-------------------------------------------------------\n";

    //add picture of frog dancing
}

void Pepe::glide()
{
    happyLevel = happyLevel + 20;
    hungerLevel = hungerLevel + 10;
    boredomLevel = boredomLevel - 15;
    std::cout << "-------------------------------------------------------\n";
    std::cout << '\n';
    std::cout << name << " trolled you he can't glide xd.\n";
    std::cout<<"⠄⠄⠄⠄⠄⠄⠄⢀⣠⣶⣾⣿⣶⣦⣤⣀⠄⢀⣀⣤⣤⣤⣤⣄⠄⠄⠄⠄⠄.\n";
    std::cout<<"⠄⠄⠄⠄⠄⢀⣴⣿⣿⣿⡿⠿⠿⠿⠿⢿⣷⡹⣿⣿⣿⣿⣿⣿⣷⠄⠄⠄⠄⠄\n";
    std::cout<<"⠄⠄⠄⠄⠄⣾⣿⣿⣿⣯⣵⣾⣿⣿⡶⠦⠭⢁⠩⢭⣭⣵⣶⣶⡬⣄⣀⡀⠄⠄\n";
    std::cout<<"⠄⠄⠄⡀⠘⠻⣿⣿⣿⣿⡿⠟⠩⠶⠚⠻⠟⠳⢶⣮⢫⣥⠶⠒⠒⠒⠒⠆⠐⠒\n";
    std::cout<<"⠄⢠⣾⢇⣿⣿⣶⣦⢠⠰⡕⢤⠆⠄⠰⢠⢠⠄⠰⢠⠠⠄⡀⠄⢊⢯⠄⡅⠂⠄\n";
    std::cout<<"⢠⣿⣿⣿⣿⣿⣿⣿⣏⠘⢼⠬⠆⠄⢘⠨⢐⠄⢘⠈⣼⡄⠄⠄⡢⡲⠄⠂⠠⠄\n";
    std::cout<<"⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣥⣀⡁⠄⠘⠘⠘⢀⣠⣾⣿⢿⣦⣁⠙⠃⠄⠃⠐⣀\n";
    std::cout<<"⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣋⣵⣾⣿⣿⣿⣿⣦⣀⣶⣾⣿⣿⡉⠉⠉\n";
    std::cout<<"⣿⣿⣿⣿⣿⣿⣿⠟⣫⣥⣬⣭⣛⠿⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡆⠄\n";
    std::cout<<"⣿⣿⣿⣿⣿⣿⣿⠸⣿⣏⣙⠿⣿⣿⣶⣦⣍⣙⠿⠿⠿⠿⠿⠿⠿⠿⣛⣩⣶⠄\n";
    std::cout<<"⣛⣛⣛⠿⠿⣿⣿⣿⣮⣙⠿⢿⣶⣶⣭⣭⣛⣛⣛⣛⠛⠛⠻⣛⣛⣛⣛⣋⠁⢀\n";
    std::cout<<"⣿⣿⣿⣿⣿⣶⣬⢙⡻⠿⠿⣷⣤⣝⣛⣛⣛⣛⣛⣛⣛⣛⠛⠛⣛⣛⠛⣡⣴⣿\n";
    std::cout<<"⣛⣛⠛⠛⠛⣛⡑⡿⢻⢻⠲⢆⢹⣿⣿⣿⣿⣿⣿⠿⠿⠟⡴⢻⢋⠻⣟⠈⠿⠿\n";
    std::cout<<"⣿⡿⡿⣿⢷⢤⠄⡔⡘⣃⢃⢰⡦⡤⡤⢤⢤⢤⠒⠞⠳⢸⠃⡆⢸⠄⠟⠸⠛⢿\n";
    std::cout<<"⡟⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠁⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⢸\n";
    
    std::cout << "-------------------------------------------------------\n";

}

void Pepe::DisplayPetBehavior()
{
    if(happyLevel >= 70){
        std::cout << "-------------------------------------------------------\n";

        std::cout << name << " is happy.\n";
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

void Pepe::menu()
{
    std::cout << "-------------------------------------------------------\n";
    std::cout << "Happy level: " << happyLevel << std::endl;
    std::cout << "Hunger level: " << hungerLevel << std::endl;
    std::cout << "Boredom level: " << boredomLevel << std:: endl;
    std::cout << "-------------------------------------------------------\n";

    
}
