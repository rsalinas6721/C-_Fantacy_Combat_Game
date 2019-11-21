/*
Author: Ricky Salinas
Due Date: 5 August 2018
Description: Vampire Class
*/

#ifndef VAMPIRE_HPP
#define VAMPIRE_HPP
#include "character.hpp"

        // Constructor and function prototypes for class are initialized
class Vampire : public Character
{
    
protected:
    std::string name;
    int armor;
    int strength;
    int charm;
    
public:
    Vampire();
    
    int attack();
    int defense();
    
    int rollAttack();
    int rollDefend();
    
    std::string getCharacter();
    int getArmor();
    int getStrengthPoints();
    void setStrengthPoints(int);

};
#endif