/*
Author: Ricky Salinas
Due Date: 5 August 2018
Description: This contains the constructors and functions for the Vampire Class
*/

#include "vampire.hpp"
#include <iostream>
#include <cstdlib>

        // Constructor and function prototypes for class are set up
Vampire::Vampire() : Character()
{
    name = "Vampire";
    armor = 1;
    strength = 18;
}


int Vampire::attack() 
{
    int damage = rollAttack();
    std::cout << "Vampire attacks with " << damage << " damage." << std::endl;
    return damage;
}

int Vampire::defense() 
{

charm = rand() % 2 + 1;

if (charm == 1) 
{
    std::cout << "Vampire charmed opponent into not attacking! Vampire takes no damage." << std::endl;
    int defense = 200;
    return defense;
    
}

else if (charm == 2) 
{
    int defense = rollDefend();
    std::cout << "Vampire defends with a " << defense << " defense and " << armor << " armor." << std::endl;
    return defense;
}
}


int Vampire::rollAttack()
{
    int roll = rand() % 12 + 1;
    return roll;
}

int Vampire::rollDefend()
{
    int roll = rand() % 6 + 1;
    return roll;
}


std::string Vampire::getCharacter()
{
    return name;
}
    
int  Vampire::getArmor()
{
    return armor;  
}
    
int  Vampire::getStrengthPoints()
{
    return strength;
}

void Vampire::setStrengthPoints(int a)
{
    strength = a;
}
    
