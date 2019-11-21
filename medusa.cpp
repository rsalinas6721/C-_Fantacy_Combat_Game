/*
Author: Ricky Salinas
Due Date: 5 August 2018
Description: This contains the constructors and functions for the Medusa Class
*/

#include "medusa.hpp"
#include <iostream>
#include <cstdlib>

        // Constructor and function prototypes for class are set up

Medusa::Medusa() : Character()
{
    name = "Medusa";
    armor = 3;
    strength = 8;
}

int Medusa::attack() 
{
    int damage = rollAttack();
    std::cout << "Medusa attacks with " << damage << " damage." << std::endl;
    return damage;
}

int Medusa::defense() 
{
    int defense = rollDefend();
    std::cout << "Medusa defends with a " << defense << " defense and " << armor << " armor." << std::endl;
    return defense;
}

int Medusa::rollAttack()
{
    int roll = rand() % 6 + 1;
    roll = roll + (rand() % 6 + 1);
    
    if (roll == 12)
    {
        std::cout << "Medusa uses her stone attack! Damage is over 100! Enemy turns to stone!" << std::endl;
        roll = 101;
    }
    return roll;
}

int Medusa::rollDefend()
{
    int roll = rand() % 6 + 1;
    return roll;
}

std::string Medusa::getCharacter()
{
    return name;
}
    
int  Medusa::getArmor()
{
    return armor;  
}
    
int  Medusa::getStrengthPoints()
{
    return strength;
}

void Medusa::setStrengthPoints(int a)
{
strength = a;
}
    
