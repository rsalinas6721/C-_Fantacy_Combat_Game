/*
Author: Ricky Salinas
Due Date: 5 August 2018
Description: This contains the constructors and functions for the Barbarian Class
*/

#include "barbarian.hpp"
#include <iostream>
#include <cstdlib>
        // Constructor and function prototypes for class are set up

Barbarian::Barbarian() : Character()
{
    name = "Barbarian";
    armor = 0;
    strength = 12;
}


int Barbarian::attack() 
{
    int damage = rollAttack();
    std::cout << "Barbarian attacks with " << damage << " damage." << std::endl;
    return damage;
}

int Barbarian::defense() 
{
    int defense = rollDefend();
    std::cout << "Barbarian defends with a " << defense << " defense and " << armor << " armor." << std::endl;
    return defense;
}



int Barbarian::rollAttack()
{
    int roll = rand() % 6 + 1;
    roll = roll + (rand() % 6 + 1);
    return roll;
}

int Barbarian::rollDefend()
{
    int roll = rand() % 6 + 1;
    roll = roll + (rand() % 6 + 1);
    return roll;
}


std::string Barbarian::getCharacter()
{
    return name;
}
    
int  Barbarian::getArmor()
{
    return armor;  
}
    
int  Barbarian::getStrengthPoints()
{
    return strength;
}

void Barbarian::setStrengthPoints(int a)
{
    strength = a;
}
