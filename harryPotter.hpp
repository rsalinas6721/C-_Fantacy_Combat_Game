/*
Author: Ricky Salinas
Due Date: 5 August 2018
Description: HarryPotter Class
*/

#ifndef HARRYPOTTER_HPP
#define HARRYPOTTER_HPP
#include "character.hpp"


    // Constructor and function prototypes for class are initialized
class HarryPotter : public Character
{
    
protected:
    std::string name;
    int armor;
    int strength;
    
public:
    HarryPotter();
    
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