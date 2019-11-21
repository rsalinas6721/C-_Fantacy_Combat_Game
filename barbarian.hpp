/*
Author: Ricky Salinas
Due Date: 5 August 2018
Description: Barbarian Class
*/

#ifndef BARBARIAN_HPP
#define BARBARIAN_HPP
#include "character.hpp"
        
        // Constructor and function prototypes for class are initialized
class Barbarian : public Character
{
    
protected:
    std::string name;
    int armor;
    int strength;
    
public:
    Barbarian();
    
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