/*
Author: Ricky Salinas
Due Date: 5 August 2018
Description: This contains the constructors and functions for the Character Class
*/


        // Constructor and function prototypes for class are set up
#include "character.hpp"
#include <iostream>


Character::Character()
{
    character = " ";
    armor = 0;
    strength = 0;
}

int Character::attack() 
{
    
}
int Character::defense() 
{
    
}

int Character::rollAttack()
{
    
}

int Character::rollDefend()
{
    
}

int Character::bdefense(int b)
{

}

int Character::brollDefend(int a)
{

}

std::string Character::getCharacter()
{
    return character;
}

int Character::getArmor()
{
    return armor;
}


int Character::getStrengthPoints()
{
    return strength;
}

void Character::setStrengthPoints(int s)
{
    strength = s;
}

