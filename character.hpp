/*
Author: Ricky Salinas
Due Date: 5 August 2018
Description: Character Class
*/

#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <iostream>
        
        // Constructor and function prototypes for class are initialized
class Character
{
  
protected:
    std::string character;
    int armor;
    int strength;

public:
    Character();
    
    virtual int attack();
    virtual int defense();
    
    virtual int rollAttack();
    virtual int rollDefend();
    
    virtual std::string getCharacter();
    virtual int getArmor();
    virtual int getStrengthPoints();
    virtual void setStrengthPoints(int);
    
    virtual int bdefense(int);
    virtual int brollDefend(int);
    
};
#endif