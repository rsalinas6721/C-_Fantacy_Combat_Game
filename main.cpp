/*
Author: Ricky Salinas
Due Date: 5 August 2018
Description: This program runs a Fantasy Combat Game
*/

#include "menu.hpp"
#include "character.hpp"
#include "vampire.hpp"
#include "barbarian.hpp"
#include "blueMen.hpp"
#include "medusa.hpp"
#include "harryPotter.hpp"
#include <iostream>

int main()
{
    char input;
    
        // Do while loop is initiated to keep program running
    do{
    
        char player1, player2;
        bool play = true;
        bool charOne = false;
        bool charTwo = false;

        
            // Character options are displayed
            // Players are allowed to select a fantacy character
        std::cout << "This program plays Fantasy Combat Game" << std::endl;
        std::cout << "Each player will have the option of selecting the following characters:" << std::endl;
        std::cout << "A/a) Vampire" << std::endl;
        std::cout << "B/b) Barbarian" << std::endl;
        std::cout << "C/c) Blue Men" << std::endl;
        std::cout << "D/d) Medusa" << std::endl;
        std::cout << "E/e) Harry Potter" << std::endl;
    
        Character *characterOne;
        while (charOne == false)
        {
            std::cout<<"Which character would you like Player 1?" << std::endl;
            std::cin >> player1;
    
            if ((player1 == 'A') || (player1 == 'a')) 
            {
                characterOne = new Vampire;
                charOne = true;
            }
            else if ((player1 == 'B') || (player1 == 'b')) 
            {
                characterOne = new Barbarian;
                charOne = true;
            }
            else if ((player1 == 'C') || (player1 == 'c')) 
            {
                characterOne = new BlueMen;
                charOne = true;
            }
            else if ((player1 == 'D') || (player1 == 'd')) 
            {
                characterOne = new Medusa;
                charOne = true;
            }
            else if ((player1 == 'E') || (player1 == 'e')) 
            {
                characterOne = new HarryPotter;
                charOne = true;
            }
            else
            {
                std::cout << "Try Again" << std::endl;
                std::cin.ignore();
                std::cin.clear();
            }
        }
    
        Character *characterTwo;
        while (charTwo == false)
        {
            std::cout<<"Which character would you like Player 2?" << std::endl;
            std::cin >> player2;
    
            if (player2 == player1)
            {
                std::cout << "Please Select Another Character." << std::endl;
                std::cin.ignore();
                std::cin.clear();
            }
    
            else
            {
                if ((player2 == 'A') || (player2 == 'a')) 
                {
                    characterTwo = new Vampire;
                    charTwo = true;
                }
                else if ((player2 == 'B') || (player2 == 'b')) 
                {
                    characterTwo = new Barbarian;
                    charTwo = true;
                }
                else if ((player2 == 'C') || (player2 == 'c')) 
                {
                    characterTwo = new BlueMen;
                    charTwo = true;
                }
                else if ((player2 == 'D') || (player2 == 'd')) 
                {
                    characterTwo = new Medusa;
                    charTwo = true;
                }
                else if ((player2 == 'E') || (player2 == 'e')) 
                {
                    characterTwo = new HarryPotter;
                    charTwo = true;
                }
                else
                {
                    std::cout << "Try Again" << std::endl;
                    std::cin.ignore();
                    std::cin.clear();
                }
            }
        }
    
        // Character stats are displayed before fight begins
        std::cout << "Player 1 character: " << characterOne->getCharacter() << std::endl;
        std::cout << "Starting armor: " << characterOne->getArmor() << std::endl;
        std::cout << "Starting strength: " << characterOne->getStrengthPoints() << std::endl;
        std::cout << std::endl;
        std::cout << "Player 2 character: " << characterTwo->getCharacter() << std::endl;
        std::cout << "Starting armor: " << characterTwo->getArmor() << std::endl;
        std::cout << "Starting strength: " << characterTwo->getStrengthPoints() << std::endl;
        std::cout << std::endl;
 
        // Function fight is called
        // Fight begins
        fight(characterOne, characterTwo);
        std::cout << std::endl;
        
        // Memory is cleared
delete characterOne;
delete characterTwo;

        // Player is given option to play again
        std::cout << "Select p or P to play again?" << std::endl;
        std::cout << "Select any other key to quit." << std::endl;
        std::cin >> input;
    }
while ((input == 'P') || (input == 'p'));

return 0;
}
