/*
Author: Ricky Salinas
Due Date: 5 August 2018
Description: This contains the constructors and functions for the BlueMen Class
*/

#include "blueMen.hpp"
#include <iostream>
#include <cstdlib>
        // Constructor and function prototypes for class are set up

BlueMen::BlueMen() : Character()
{
    name = "Blue Men";
    armor = 3;
    strength = 12;
}


int BlueMen::attack()
{
    int damage = rollAttack();
    std::cout << "Blue Men attacks with " << damage << " damage." << std::endl;
    return damage;
}

int BlueMen::bdefense(int mob) 
{
    int att = mob; 
    int defense = brollDefend(att);
    std::cout << "Blue Men defends with a " << defense << " defense and " << armor << " armor." << std::endl;
    return defense;
}


int BlueMen::rollAttack()
{
    int roll = rand() % 10 + 1;
    roll = roll + (rand() % 10 + 1);
    return roll;
}


int BlueMen::brollDefend(int mob)
{
    if (mob == 3)
    {
        int roll = rand() % 6 + 1;
        roll = roll + (rand() % 6 + 1);
        roll = roll + (rand() % 6 + 1);
        return roll;
    }
    
    else if (mob == 2)
    {
        int roll = rand() % 6 + 1;
        roll = roll + (rand() % 6 + 1);
        return roll;
    }
    
    else if (mob == 1)
    {
        int roll = rand() % 6 + 1;
        return roll;
    }
    
}

std::string BlueMen::getCharacter()
{
    return name;
}
    
int  BlueMen::getArmor()
{
    return armor;  
}
    
int  BlueMen::getStrengthPoints()
{
    return strength;
}
void BlueMen::setStrengthPoints(int a)
{
    strength = a;
}
    
