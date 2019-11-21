/*
Author: Ricky Salinas
Due Date: 5 August 2018
Description: This contains the constructors and functions for the Harry Potter Class
*/

#include "harryPotter.hpp"
#include <iostream>
#include <cstdlib>

        // Constructor and function prototypes for class are set up

HarryPotter::HarryPotter() : Character()
{
    name = "Harry Potter";
    armor = 0;
    strength = 10;
}

int HarryPotter::attack() 
{
    int damage = rollAttack();
    std::cout << "HarryPotter attacks with " << damage << " damage." << std::endl;
    return damage;
}

int HarryPotter::defense() 
{
    int defense = rollDefend();
    std::cout << "HarryPotter defends with a " << defense << " defense and " << armor << " armor." << std::endl;
    return defense;
}

int HarryPotter::rollAttack()
{
    int roll = rand() % 6 + 1;
    roll = roll + (rand() % 6 + 1);
    return roll;
}

int HarryPotter::rollDefend()
{
    int roll = rand() % 6 + 1;
    roll = roll + (rand() % 6 + 1);
    return roll;
}

std::string HarryPotter::getCharacter()
{
    return name;
}
    
int  HarryPotter::getArmor()
{
    return armor;  
}
    
int  HarryPotter::getStrengthPoints()
{
    return strength;
}
    
void HarryPotter::setStrengthPoints(int a)
{
strength = a;
}
