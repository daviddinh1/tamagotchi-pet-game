//
//  main.cpp
//  Tamagotchi_pet
//
//  Created by David Dinh on 4/18/22.
//

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <fstream>
#include "Pet.h"
#include "Doge.h"
#include "Pepe.h"
#include "Cat.hpp"

int main() {
    int pickPet;
    std::string petName; //used to name the pet duh
    int _load; //number for user picking if he wants to load a pet or create a new one
    
    std::cout << "*******************************************************\n";
    std::cout << "Would you like to load a pet or create a new pet?\n";
    std::cout << "-------------------------------------------------------\n";
    std::cout << "Please enter: \n";
    std::cout << "1- Load an existing pet\n";
    std::cout << "2- Create a new pet\n";
    std::cout << "-------------------------------------------------------\n";
    std::cout << "*******************************************************\n";
    
    std::cout <<std::endl; //used to make the game menu more clear
    std::cin >> _load;
    
    if(_load == 1){ //where u load the files
        std::string data;
        std::cout << "************************************************************\n";
        std::cout <<"Please enter the filename of the file you would like to load.\n";
        std::cout << "************************************************************\n";

        std::string fileName;
        std::cin >> fileName;
        std::ifstream fin(fileName);
        while(!fin.is_open()){
            std::cout << "*******************************************************\n";
            std::cout << "Sorry the filename is incorrect or not found.\n";
            std::cout << "-------------------------------------------------------\n";
            std::cout <<"Please enter the a filename:\n";
            std::cout << "*******************************************************\n";
            std::cout << '\n';
            std::cin >>fileName;
        }
        while(!fin.eof()){
            getline(fin,data);
            std::cout << data;
        }
        fin.close();
    }
    
    else{ //used to create a new pet
        std::cout << '\n';
        std::cout <<"*******************************************************\n";
        std::cout << "Please select a Pet :)\n";
        std::cout << "-------------------------------------------------------\n";
        std::cout << "Enter number based on pet value\n";
        std::cout << "-------------------------------------------------------\n";
        std::cout << "Pet 1 - Doggo\n";
        std::cout << "Doggo is a very energetic and loves to play and bark.\n";
        std::cout <<"              ;~~,____" <<std::endl;
        std::cout<<":-....,-------'`-'._.''"<<std::endl;
        std::cout <<" `-,,,  ,       ,'~~'"<<std::endl;
        std::cout <<"     ; ,'~.__; /"<<std::endl;
        std::cout <<"     :|      :|"<<std::endl;
        std::cout <<"     `-'     `-''"<<std::endl;
        std::cout << "-------------------------------------------------------\n";
        std::cout << "Pet 2 - Frog\n";
        std::cout << "Frog loves to leap and dance,but he gets bored very easily.\n";
        std::cout<<"          .--._.--." << std::endl;
        std::cout<<"         ( --   -- )" <<std::endl;
        std::cout <<"         {   . .   }"<<std::endl;
        std::cout<<"        .`._______.'." << std::endl;
        std::cout <<"       {(           )}"<<std::endl;
        std::cout <<"     _[  {  {   }  }  ]_" << std::endl;
        std::cout<<"  .~   `  ^  ^ ^  ^  '   ~.\n";
        std::cout<<" {    -.   ^  V  ^   .-    }\n";
        std::cout <<"_ _`.      |  |  |  /    .'_ _" << std::endl;
        std::cout<<">_       _} |  |  | {_       _<" << std::endl;
        std::cout <<"|. - ~ ,_-'  .^.  `-_, ~ - .|" << std::endl;
        std::cout <<"        '-'|^   ^|`-` " << std::endl;
        std::cout << "-------------------------------------------------------\n";
        std::cout << "Pet 3 - Cat\n";
        std::cout <<"Cat loves to cuddle and scratch random stuff.\n";
        std::cout<<"  o   ^^" << std::endl;
        std::cout <<"  )  ( ') "<< std::endl;
        std::cout <<" (  /  )" << std::endl;
        std::cout<<" |~(__)|"<< std::endl;
        
        std::cout << "-------------------------------------------------------\n";
        std::cout<< "*******************************************************\n";
        std::cin >> pickPet;
        
        if(pickPet == 1){
            std::cout<< "*******************************************************\n";
            std::cout << "you have chosen Doggo\n";
            std::cout << "-------------------------------------------------------\n";

            std::cout << "Please enter a name for your pet: \n";
            std::cout<< "*******************************************************\n";

            std::cin >> petName;
            
            Doge n;//uses the doge class which has the special interactions for a dog
            n.setHappyLevel(50);
            n.setHungerLevel(50);
            n.setBoredomLevel(50);
            n.setName(petName);
            int i;

            
            do{ //do while loop that continutes the game until the pet dies or the user wants to save their file
                std::cout << std::endl;
                std::cout<< "*******************************************************\n";
                std::cout <<"Please enter a interaction: \n";
                std::cout << "-------------------------------------------------------\n";
                std::cout <<"0- save and end the game\n";
                std::cout << "1- play with "<< n.getName() <<std::endl;
                std::cout << "2- feed "<< n.getName() <<std::endl;
                std::cout << "3- make "<< n.getName() << " bark at random stuff."<<std::endl;
                std::cout << "4- make "<<n.getName() <<" fetch a ball." << std::endl;
                std::cout << "5- take "<<n.getName() <<" outside to dig holes.\n";
                std::cout<< "*******************************************************\n";
                n.menu();
                std::cin >> i;
                std::cout << std::endl;
                //each if is the menu option the user picks
                if(i==0){
                    break;
                }
                else if(i ==1){
                    n.play();
                    n.nextHour();
                    n.DisplayPetBehavior();
                    if(n.getHappylevel() <30 || n.getHungerLevel() >100|| n.getBoredomLevel() >100){
                        break; //basically the conditions for the pet to die
                    }
                }
                else if(i ==2){
                    n.feedPet();
                    n.nextHour();
                    n.DisplayPetBehavior();
                    if(n.getHappylevel() <30 || n.getHungerLevel() >100 || n.getBoredomLevel() >100){ //death
                        break;
                    }
                }
                else if(i ==3){
                    n.bark();
                    n.nextHour();
                    n.DisplayPetBehavior();
                    if(n.getHappylevel() <30 || n.getHungerLevel() >100 || n.getBoredomLevel() >100){
                        break;
                    }
                }
                else if(i ==4){
                    n._catch();
                    n.nextHour();
                    n.DisplayPetBehavior();
                    if(n.getHappylevel() <30 || n.getHungerLevel() >100 || n.getBoredomLevel() >100){
                        break;
                    }
                }
                else if(i == 5){
                    n.dig();
                    n.nextHour();
                    n.DisplayPetBehavior();
                    if(n.getHappylevel() <30 || n.getHungerLevel() >100 || n.getBoredomLevel() >100){
                        break;
                    }
                }
            }while(i != 0); //breaks the loop if the user wants to save
            if(i == 0){// all the save stuff
                std::string fileName;
                std::cout << "-------------------------------------------------------\n";
                std::cout<< "Please enter a name for the save file\n";
                std::cout << "-------------------------------------------------------\n";
                std::cin >> fileName;
                std::ofstream fout;
                fout.open(fileName);
                while(!fout){
                    std::cout << "*******************************************************\n";
                    std::cerr << "Error: file could not be opened or found." << std::endl;
                    std::cout << "-------------------------------------------------------\n";
                    std::cout << "Please enter a filename:\n";
                    std::cout << "*******************************************************\n";
                    std::cin >> fileName;
                    std::cout << '\n';


                    exit(1);
                }
                fout << "Pet name : " << n.getName()<< ",Happy level: " << n.getHappylevel() <<",Hunger level: " << n.getHungerLevel() << ",Boredom level: " << n.getBoredomLevel();

                fout.close();
            }
            else{//if the user didnt enter save,but his dog died with the if in the choice then it outputs the dead pet
                std::cout<< "*******************************************************\n";

                std::cout << n.getName() << " has died :c\n";
                std::cout << '\n';
                std::cout <<"              ;~~X____" <<std::endl;
                std::cout<<":-....,-------'`-'._.''"<<std::endl;
                std::cout <<" `-,,,  ,       ,'~~'"<<std::endl;
                std::cout <<"     ; ,'~.__; /"<<std::endl;
                std::cout <<"     :|      :|"<<std::endl;
                std::cout <<"     `-'     `-''"<<std::endl;
                
                std::cout<< "*******************************************************\n";

            }
        }
                
        else if(pickPet == 2){
            std::cout<< "*******************************************************\n";
            std::cout << "you have chosen Frog\n";
            std::cout << "-------------------------------------------------------\n";
            std::cout << "Please enter a name for your pet: \n";
            std::cout<< "*******************************************************\n";

            std::cin >> petName;
            
            Pepe a;//testing out the class
            a.setHappyLevel(50);
            a.setHungerLevel(50);
            a.setBoredomLevel(50);
            a.setName(petName);
            int i;
            
            
            do{
                std::cout<< "*******************************************************\n";
                std::cout <<"Please enter a interaction: \n";
                std::cout << "-------------------------------------------------------\n";
                std::cout <<"0- save and end the game\n";
                std::cout << "1- play with "<< a.getName() <<std::endl;
                std::cout << "2- feed "<< a.getName() <<std::endl;
                std::cout << "3- take "<< a.getName() << " outside to leap over things."<<std::endl;
                std::cout << "4- play music to let "<<a.getName() <<" dance to his/her's heart content." << std::endl;
                std::cout << "5- take "<< a.getName() <<" outside to glide freely\n";
                std::cout<< "*******************************************************\n";
                a.menu();
                std::cin >> i;
                std::cout << std::endl;

                if(i ==0){
                    break;
                }
                else if(i ==1){
                    a.play();
                    a.nextHour();
                    a.DisplayPetBehavior();
                    if(a.getHappylevel() <30 || a.getHungerLevel() >100 || a.getBoredomLevel() >100){
                        break;
                    }
                }
                else if(i ==2){
                    a.feedPet();
                    a.nextHour();
                    a.DisplayPetBehavior();
                    if(a.getHappylevel() <30 || a.getHungerLevel() >100 || a.getBoredomLevel() >100){
                        break;
                    }
                }
                else if(i ==3){
                    a.leap();
                    a.nextHour();
                    a.DisplayPetBehavior();
                    if(a.getHappylevel() <30 || a.getHungerLevel() >100 || a.getBoredomLevel() >100){
                        break;
                    }
                }
                else if(i ==4){
                    a.dance();
                    a.nextHour();
                    a.DisplayPetBehavior();
                    if(a.getHappylevel() <30 || a.getHungerLevel() >100 || a.getBoredomLevel() >100){
                        break;
                    }
                }
                else if(i == 5){
                    a.glide();
                    a.nextHour();
                    a.DisplayPetBehavior();
                    if(a.getHappylevel() <30 || a.getHungerLevel() >100 || a.getBoredomLevel() >100){
                        break;
                    }
                }
            }while(i != 0);
            if(i == 0){
                std::string fileName;
                std::cout << "-------------------------------------------------------\n";
                std::cout<< "Please enter a name for the save file\n";
                std::cout << "-------------------------------------------------------\n";
                std::cin >> fileName;
                std::ofstream fout;
                fout.open(fileName);
                while(!fout){
                    std::cout << "*******************************************************\n";
                    std::cerr << "Error: file could not be opened or found." << std::endl;
                    std::cout << "-------------------------------------------------------\n";
                    std::cout << "Please enter a filename:\n";
                    std::cout << "*******************************************************\n";
                    std::cin >> fileName;
                    std::cout << '\n';


                    exit(1);
                }
                fout << "Pet name : " << a.getName()<< ",Happy level: " << a.getHappylevel() <<",Hunger level: " << a.getHungerLevel() << ",Boredom level: " << a.getBoredomLevel();
                fout.close();
            }
            else{
                std::cout<< "*******************************************************\n";
                std::cout << a.getName() << " has died :c\n";
                std::cout << '\n';
                std::cout<<"          .--._.--." << std::endl;
                std::cout<<"          ( x   x )" <<std::endl;
                std::cout <<"         {   . .   }"<<std::endl;
                std::cout<<"        .`._______.'." << std::endl;
                std::cout <<"       {(           )}"<<std::endl;
                std::cout <<"     _[  {  {   }  }  ]_" << std::endl;
                std::cout<<"  .~   `  ^  ^ ^  ^  '   ~.\n";
                std::cout<<" {    -.   ^  V  ^   .-    }\n";
                std::cout <<"_ _`.      |  |  |  /    .'_ _" << std::endl;
                std::cout<<">_       _} |  |  | {_       _<" << std::endl;
                std::cout <<"|. - ~ ,_-'  .^.  `-_, ~ - .|" << std::endl;
                std::cout <<"        '-'|^   ^|`-` " << std::endl;
                std::cout<< "*******************************************************\n";

            }
        }

        else if(pickPet == 3){
            std::cout<< "*******************************************************\n";
            std::cout << "you have chosen Cat\n";
            std::cout << "-------------------------------------------------------\n";
            std::cout << "Please enter a name for your pet: \n";
            std::cout<< "*******************************************************\n";

            std::cin >> petName;
            
            Cat z;//testing out the class
            z.setHappyLevel(50);
            z.setHungerLevel(50);
            z.setBoredomLevel(50);
            z.setName(petName);

            int i;

            do{
                std::cout<< "*******************************************************\n";
                std::cout <<"Please enter a interaction: \n";
                std::cout << "-------------------------------------------------------\n";
                std::cout <<"0- save and end the game\n";
                std::cout << "1- play with "<< z.getName() <<std::endl;
                std::cout << "2- feed "<< z.getName() <<std::endl;
                std::cout << "3- let "<< z.getName() << " scratch something."<<std::endl;
                std::cout << "4- cuddle with "<<z.getName() << std::endl;
                std::cout << "5- take " << z.getName()<< " outside to hunt for mice.\n";
                std::cout<< "*******************************************************\n";
                z.menu();
                std::cout << std::endl;

                std::cin >> i;
                if(i ==0){
                    break;
                }
                else if(i ==1){
                    z.play();
                    z.nextHour();
                    z.DisplayPetBehavior();
                    if(z.getHappylevel() <30 || z.getHungerLevel() >100 || z.getBoredomLevel() >100){
                        break;
                    }
                }
                else if(i ==2){
                    z.feedPet();
                    z.nextHour();
                    z.DisplayPetBehavior();
                    if(z.getHappylevel() <30 || z.getHungerLevel() >100 || z.getBoredomLevel() >100){
                        break;
                    }
                }
                else if(i ==3){
                    z.scratch();
                    z.nextHour();
                    z.DisplayPetBehavior();
                    if(z.getHappylevel() <30 || z.getHungerLevel() >100 || z.getBoredomLevel() >100){
                        break;
                    }
                }
                else if(i ==4){
                    z.cuddle();
                    z.nextHour();
                    z.DisplayPetBehavior();
                    if(z.getHappylevel() <30 || z.getHungerLevel() >100 || z.getBoredomLevel() >100){
                        break;
                    }
                }
                else if(i==5){
                    z.hunt();
                    z.nextHour();
                    z.DisplayPetBehavior();
                    if(z.getHappylevel() <30 || z.getHungerLevel() >100 || z.getBoredomLevel() >100){
                        break;
                    }
                }
            }while(i != 0); //death and save
            if(i == 0){
                std::string fileName;
                std::cout << "-------------------------------------------------------\n";
                std::cout<< "Please enter a name for the save file\n";
                std::cout << "-------------------------------------------------------\n";
                std::cin >> fileName;
                std::ofstream fout;
                fout.open(fileName);
                while(!fout){
                    std::cout << "*******************************************************\n";
                    std::cerr << "Error: file could not be opened or found." << std::endl;
                    std::cout << "-------------------------------------------------------\n";
                    std::cout << "Please enter a filename:\n";
                    std::cout << "*******************************************************\n";
                    std::cin >> fileName;
                    std::cout << '\n';


                    exit(1);
                }
                fout << "Pet name : " << z.getName()<< ",Happy level: " << z.getHappylevel() <<",Hunger level: " << z.getHungerLevel() << ",Boredom level: " << z.getBoredomLevel();
                fout.close();
            }
            else{
                std::cout<< "*******************************************************\n";
                std::cout << z.getName() << " has died :c\n";
                std::cout << '\n';
                std::cout<<"  o   ^^" << std::endl;
                std::cout <<"  )  ( x) "<< std::endl;
                std::cout <<" (  /  )" << std::endl;
                std::cout<<" |~(__)|"<< std::endl;
                std::cout<< "*******************************************************\n";

            }
        }
    }
    return 0;
}
