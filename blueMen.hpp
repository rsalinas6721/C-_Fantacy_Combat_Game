/*
Author: Ricky Salinas
Due Date: 5 August 2018
Description: BlueMen Class
*/

#ifndef BLUEMEN_HPP
#define BLUEMEN_HPP
#include "character.hpp"


        // Constructor and function prototypes for class are initialized
class BlueMen : public Character
{
    
protected:
    std::string name;
    int armor;
    int strength;
    
public:
    BlueMen();
    
    int attack();
    int bdefense(int);
    
    int rollAttack();
    int brollDefend(int);
    
    std::string getCharacter();
    int getArmor();
    int getStrengthPoints();
    
    void setStrengthPoints(int);

};
#endif