/*
Author: Ricky Salinas
Due Date: 5 August 2018
Description: Medusa Class
*/

#ifndef MEDUSA_HPP
#define MEDUSA_HPP
#include "character.hpp"



        // Constructor and function prototypes for class are initialized
class Medusa : public Character
{
    
protected:
    std::string name;
    int armor;
    int strength;
    
public:
    Medusa();
    
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