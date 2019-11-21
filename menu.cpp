/*
Author: Ricky Salinas
Due Date: 5 August 2018
Description: This contains the constructors and functions for the Menu header file
*/

#include "menu.hpp"
#include "character.hpp"
#include "vampire.hpp"
#include "barbarian.hpp"
#include "blueMen.hpp"
#include "medusa.hpp"
#include "harryPotter.hpp"

        // Fight function is initialized
        // Characters used as parameters and pushed through if statements to identify matchup
void fight(Character *characterOne, Character *characterTwo)

{
    // Vampire Fights Barbarian  
    if ((characterOne->getCharacter() == "Vampire") && (characterTwo->getCharacter() == "Barbarian"))
    {
        bool deathVampire = false;
        bool deathBarbarian = false;
        while ((deathVampire == false) && (deathBarbarian == false))
        {
            
            // Player one attacks
            // Strength is calculated and displayed
            int attackOne = characterOne->attack();
            int defenseOne = characterTwo->defense();
            int armorOne = characterTwo->getArmor();
            int effectOne = ((attackOne - defenseOne) - armorOne);
            if (effectOne <= 0)
            {
                effectOne = 0;
            }
            std::cout << "Barbarian recieves " << effectOne << " damage."<< std::endl;
            characterTwo->setStrengthPoints(characterTwo->getStrengthPoints() - effectOne);
            if (characterTwo->getStrengthPoints() <= 0)
            {
                characterTwo->setStrengthPoints(0);
            }
            std::cout << "Barbarian strength: " << characterTwo->getStrengthPoints() << std::endl;
            if (characterTwo->getStrengthPoints() <= 0)
            {
                deathBarbarian = true;
                std::cout << "Barbarian Died" << std::endl;
                break;
            }
            std::cout << std::endl;
        
            // Player two attacks
            // Strength is calculated and displayed
            int attackTwo = characterTwo->attack();
            int defenseTwo = characterOne->defense();
            int armorTwo = characterOne->getArmor();
            int effectTwo = ((attackTwo - defenseTwo) - armorTwo);
            if (effectTwo <= 0)
            {
                effectTwo = 0;
            }
            std::cout << "Vampire recieves " << effectTwo << " damage."<< std::endl;
            characterOne->setStrengthPoints(characterOne->getStrengthPoints() - effectTwo);
            if (characterOne->getStrengthPoints() <= 0)
            {
                characterOne->setStrengthPoints(0);
            }
            std::cout << "Vampire strength: " << characterOne->getStrengthPoints() << std::endl;
            if (characterOne->getStrengthPoints() <= 0)
            {
                deathVampire = true;
                std::cout << "Vampire Died" << std::endl;
            }
            std::cout << std::endl;
        }
        
    }
        // Vampire Fights BlueMen  
    else if ((characterOne->getCharacter() == "Vampire") && (characterTwo->getCharacter() == "Blue Men"))
    {
        bool deathVampire = false;
        bool deathBlueMan = false;
        while ((deathVampire == false) && (deathBlueMan == false))
        {
            // Player one attacks
            // Strength is calculated and displayed
            int attackOne = characterOne->attack();
            int defenseOne;
            if ((characterTwo->getStrengthPoints() <= 12) && (characterTwo->getStrengthPoints() >= 9))
            {
                defenseOne = characterTwo->bdefense(3);
            }
            else if ((characterTwo->getStrengthPoints() <= 8) && (characterTwo->getStrengthPoints() >= 5))
            {
                defenseOne = characterTwo->bdefense(2);
            }
            else if ((characterTwo->getStrengthPoints() <= 4) && (characterTwo->getStrengthPoints() >= 0))
            {
                defenseOne = characterTwo->bdefense(1);
            }
            int armorOne = characterTwo->getArmor();
            int effectOne = ((attackOne - defenseOne) - armorOne);
            if (effectOne <= 0)
            {
                effectOne = 0;
            }
            std::cout << "Blue Men recieves " << effectOne << " damage."<< std::endl;
            characterTwo->setStrengthPoints(characterTwo->getStrengthPoints() - effectOne);
            if (characterTwo->getStrengthPoints() <= 0)
            {
                characterTwo->setStrengthPoints(0);
            }
            std::cout << "Blue Men strength: " << characterTwo->getStrengthPoints() << std::endl;
            if (characterTwo->getStrengthPoints() <= 0)
            {
                deathBlueMan = true;
                std::cout << "Blue Men Died" << std::endl;
                break;
            }
            std::cout << std::endl;
        
            // Player two attacks
            // Strength is calculated and displayed
            int attackTwo = characterTwo->attack();
            int defenseTwo = characterOne->defense();
            int armorTwo = characterOne->getArmor();
            int effectTwo = ((attackTwo - defenseTwo) - armorTwo);
            if (effectTwo <= 0)
            {
                effectTwo = 0;
            }
            std::cout << "Vampire recieves " << effectTwo << " damage."<< std::endl;
            characterOne->setStrengthPoints(characterOne->getStrengthPoints() - effectTwo);
            if (characterOne->getStrengthPoints() <= 0)
            {
                characterOne->setStrengthPoints(0);
            }
            std::cout << "Vampire strength: " << characterOne->getStrengthPoints() << std::endl;
            if (characterOne->getStrengthPoints() <= 0)
            {
                deathVampire = true;
                std::cout << "Vampire Died" << std::endl;
            }
            std::cout << std::endl;
        }
    }
        // Vampire fights Medusa
    else if ((characterOne->getCharacter() == "Vampire") && (characterTwo->getCharacter() == "Medusa"))
    {
        bool deathVampire = false;
        bool deathMedusa = false;
        while ((deathVampire == false) && (deathMedusa == false))
        {
            
            // Player one attacks
            // Strength is calculated and displayed
            int attackOne = characterOne->attack();
            int defenseOne = characterTwo->defense();
            int armorOne = characterTwo->getArmor();
            int effectOne = ((attackOne - defenseOne) - armorOne);
            if (effectOne <= 0)
            {
                effectOne = 0;
            }
            std::cout << "Medusa recieves " << effectOne << " damage."<< std::endl;
            characterTwo->setStrengthPoints(characterTwo->getStrengthPoints() - effectOne);
            if (characterTwo->getStrengthPoints() <= 0)
            {
                characterTwo->setStrengthPoints(0);
            }
            std::cout << "Medusa strength: " << characterTwo->getStrengthPoints() << std::endl;
            if (characterTwo->getStrengthPoints() <= 0)
            {
                deathMedusa = true;
                std::cout << "Medusa Died" << std::endl;
                break;
            }
            std::cout << std::endl;
        
            // Player two attacks
            // Strength is calculated and displayed
            int attackTwo = characterTwo->attack();
            int defenseTwo = characterOne->defense();
            int armorTwo = characterOne->getArmor();
            int effectTwo = ((attackTwo - defenseTwo) - armorTwo);
            if (effectTwo <= 0)
            {
                effectTwo = 0;
            }
            std::cout << "Vampire recieves " << effectTwo << " damage."<< std::endl;
            characterOne->setStrengthPoints(characterOne->getStrengthPoints() - effectTwo);
            if (characterOne->getStrengthPoints() <= 0)
            {
                characterOne->setStrengthPoints(0);
            }
            std::cout << "Vampire strength: " << characterOne->getStrengthPoints() << std::endl;
            if (characterOne->getStrengthPoints() <= 0)
            {
                deathVampire = true;
                std::cout << "Vampire Died" << std::endl;
            }
            std::cout << std::endl;
        }
    }
    
        // Vampire fights Harry Potter
    else if ((characterOne->getCharacter() == "Vampire") && (characterTwo->getCharacter() == "Harry Potter"))
    {
        bool deathPotterOne = false;
        bool deathPotterTwo = true;
        bool potterDeath = false;
        bool deathVampire = false;
        while ((deathVampire == false) && (potterDeath == false))
        {
            if ((deathPotterOne == false) && (deathPotterTwo == true))
            {
            
            // Player one attacks
            // Strength is calculated and displayed
                int attackOne = characterOne->attack();
                int defenseOne = characterTwo->defense();
                int armorOne = characterTwo->getArmor();
                int effectOne = ((attackOne - defenseOne) - armorOne);
                if (effectOne <= 0)
                {
                    effectOne = 0;
                }
                std::cout << "Harry Potter recieves " << effectOne << " damage."<< std::endl;
                characterTwo->setStrengthPoints(characterTwo->getStrengthPoints() - effectOne);
                if (characterTwo->getStrengthPoints() <= 0)
                {
                    characterTwo->setStrengthPoints(0);
                }
                std::cout << "Harry Potter strength: " << characterTwo->getStrengthPoints() << std::endl;
                if (characterTwo->getStrengthPoints() <= 0)
                {
                    deathPotterOne = true;
                    std::cout << "Harry Potter died and recovered using Hogwarts!" << std::endl;
                    characterTwo->setStrengthPoints(20);
                    std::cout << "Harry Potter strength: " << characterTwo->getStrengthPoints() << std::endl;
                }
                std::cout << std::endl;
            }
        
            else if ((deathPotterOne == true) && (deathPotterTwo == true))
           {
                int attackOne = characterOne->attack();
                int defenseOne = characterTwo->defense();
                int armorOne = characterTwo->getArmor();
                int effectOne = ((attackOne - defenseOne) - armorOne);
                if (effectOne <= 0)
                {
                    effectOne = 0;
                }
                std::cout << "Harry Potter recieves " << effectOne << " damage."<< std::endl;
                characterTwo->setStrengthPoints(characterTwo->getStrengthPoints() - effectOne);
                if (characterTwo->getStrengthPoints() <= 0)
                {
                characterTwo->setStrengthPoints(0);
                }
                std::cout << "Harry Potter strength: " << characterTwo->getStrengthPoints() << std::endl;
                if (characterTwo->getStrengthPoints() <= 0)
                {
                deathPotterTwo = false;
                std::cout << "Harry Potter died once again. He was unable to recover." << std::endl;
                potterDeath = true;
                }
                std::cout << std::endl;
           }
   
            // Player two attacks
            // Strength is calculated and displayed
            int attackTwo = characterTwo->attack();
            int defenseTwo = characterOne->defense();
            int armorTwo = characterOne->getArmor();
            int effectTwo = ((attackTwo - defenseTwo) - armorTwo);
            if (effectTwo <= 0)
            {
                effectTwo = 0;
            }
            std::cout << "Vampire recieves " << effectTwo << " damage."<< std::endl;
            characterOne->setStrengthPoints(characterOne->getStrengthPoints() - effectTwo);
            if (characterOne->getStrengthPoints() <= 0)
            {
                characterOne->setStrengthPoints(0);
            }
            std::cout << "Vampire strength: " << characterOne->getStrengthPoints() << std::endl;
            if (characterOne->getStrengthPoints() <= 0)
            {
                deathVampire = true;
                std::cout << "Vampire Died" << std::endl;
            }
            std::cout << std::endl;
        }
    }

        // Barbarian Fights Vampire 
    else if ((characterOne->getCharacter() == "Barbarian") && (characterTwo->getCharacter() == "Vampire"))
    {
        bool deathBarbarian = false;
        bool deathVampire = false;
        while ((deathBarbarian == false) && (deathVampire == false))
        {
            // Player one attacks
            // Strength is calculated and displayed
            int attackOne = characterOne->attack();
            int defenseOne = characterTwo->defense();
            int armorOne = characterTwo->getArmor();
            int effectOne = ((attackOne - defenseOne) - armorOne);
            if (effectOne <= 0)
            {
                effectOne = 0;
            }
            std::cout << "Vampire recieves " << effectOne << " damage."<< std::endl;
            characterTwo->setStrengthPoints(characterTwo->getStrengthPoints() - effectOne);
            if (characterTwo->getStrengthPoints() <= 0)
            {
                characterTwo->setStrengthPoints(0);
            }
            std::cout << "Vampire strength: " << characterTwo->getStrengthPoints() << std::endl;
            if (characterTwo->getStrengthPoints() <= 0)
            {
                deathVampire = true;
                std::cout << "Vampire Died" << std::endl;
                break;
            }
            std::cout << std::endl;
            
            // Player two attacks
            // Strength is calculated and displayed
            int attackTwo = characterTwo->attack();
            int defenseTwo = characterOne->defense();
            int armorTwo = characterOne->getArmor();
            int effectTwo = ((attackTwo - defenseTwo) - armorTwo);
            if (effectTwo <= 0)
            {
                effectTwo = 0;
            }
            std::cout << "Barbarian recieves " << effectTwo << " damage."<< std::endl;
            characterOne->setStrengthPoints(characterOne->getStrengthPoints() - effectTwo);
            if (characterOne->getStrengthPoints() <= 0)
            {
                characterOne->setStrengthPoints(0);
            }
            std::cout << "Barbarian strength: " << characterOne->getStrengthPoints() << std::endl;
            if (characterOne->getStrengthPoints() <= 0)
            {
                deathBarbarian = true;
                std::cout << "Barbarian Died" << std::endl;
            }
            std::cout << std::endl;
            
        }
    }
        // Barbarian Fights BlueMen 
    else if ((characterOne->getCharacter() == "Barbarian") && (characterTwo->getCharacter() == "Blue Men"))
    {
        
    bool deathBarbarian = false;
    bool deathBlueMan = false;
        while ((deathBarbarian == false) && (deathBlueMan == false))
        {
            
            // Player one attacks
            // Strength is calculated and displayed
            int attackOne = characterOne->attack();
            int defenseOne;
            if ((characterTwo->getStrengthPoints() <= 12) && (characterTwo->getStrengthPoints() >= 9))
            {
                defenseOne = characterTwo->bdefense(3);
            }
            else if ((characterTwo->getStrengthPoints() <= 8) && (characterTwo->getStrengthPoints() >= 5))
            {
                defenseOne = characterTwo->bdefense(2);
            }
            else if ((characterTwo->getStrengthPoints() <= 4) && (characterTwo->getStrengthPoints() >= 0))
            {
                defenseOne = characterTwo->bdefense(1);
            }
            int armorOne = characterTwo->getArmor();
            int effectOne = ((attackOne - defenseOne) - armorOne);
            if (effectOne <= 0)
            {
                effectOne = 0;
            }
            std::cout << "Blue Men recieves " << effectOne << " damage."<< std::endl;
            characterTwo->setStrengthPoints(characterTwo->getStrengthPoints() - effectOne);
            if (characterTwo->getStrengthPoints() <= 0)
            {
                characterTwo->setStrengthPoints(0);
            }
            std::cout << "Blue Men strength: " << characterTwo->getStrengthPoints() << std::endl;
            if (characterTwo->getStrengthPoints() <= 0)
            {
                deathBlueMan = true;
                std::cout << "Blue Men Died" << std::endl;
                break;
            }
            std::cout << std::endl;
            
            // Player two attacks
            // Strength is calculated and displayed
            int attackTwo = characterTwo->attack();
            int defenseTwo = characterOne->defense();
            int armorTwo = characterOne->getArmor();
            int effectTwo = ((attackTwo - defenseTwo) - armorTwo);
            if (effectTwo <= 0)
            {
                effectTwo = 0;
            }
            std::cout << "Barbarian recieves " << effectTwo << " damage."<< std::endl;
            characterOne->setStrengthPoints(characterOne->getStrengthPoints() - effectTwo);
            if (characterOne->getStrengthPoints() <= 0)
            {
                characterOne->setStrengthPoints(0);
            }
            std::cout << "Barbarian strength: " << characterOne->getStrengthPoints() << std::endl;
            if (characterOne->getStrengthPoints() <= 0)
            {
                deathBarbarian = true;
                std::cout << "Barbarian Died" << std::endl;
            }
            std::cout << std::endl;
        }
    }
    
    // Barbarian Fights Medusa 
    else if ((characterOne->getCharacter() == "Barbarian") && (characterTwo->getCharacter() == "Medusa"))
    {
        bool deathBarbarian = false;
        bool deathMedusa = false;
        while ((deathBarbarian == false) && (deathMedusa == false))
        {
            
            // Player one attacks
            // Strength is calculated and displayed
            int attackOne = characterOne->attack();
            int defenseOne = characterTwo->defense();
            int armorOne = characterTwo->getArmor();
            int effectOne = ((attackOne - defenseOne) - armorOne);
            if (effectOne <= 0)
            {
                effectOne = 0;
            }
            std::cout << "Medusa recieves " << effectOne << " damage."<< std::endl;
            characterTwo->setStrengthPoints(characterTwo->getStrengthPoints() - effectOne);
            if (characterTwo->getStrengthPoints() <= 0)
            {
                characterTwo->setStrengthPoints(0);
            }
            std::cout << "Medusa strength: " << characterTwo->getStrengthPoints() << std::endl;
            if (characterTwo->getStrengthPoints() <= 0)
            {
                deathMedusa = true;
                std::cout << "Medusa Died" << std::endl;
                break;
            }
            std::cout << std::endl;
    
            // Player two attacks
            // Strength is calculated and displayed
            int attackTwo = characterTwo->attack();
            int defenseTwo = characterOne->defense();
            int armorTwo = characterOne->getArmor();
            int effectTwo = ((attackTwo - defenseTwo) - armorTwo);
            if (effectTwo <= 0)
            {
                effectTwo = 0;
            }
            std::cout << "Barbarian recieves " << effectTwo << " damage."<< std::endl;
            characterOne->setStrengthPoints(characterOne->getStrengthPoints() - effectTwo);
            if (characterOne->getStrengthPoints() <= 0)
            {
                characterOne->setStrengthPoints(0);
            }
            std::cout << "Barbarian strength: " << characterOne->getStrengthPoints() << std::endl;
            if (characterOne->getStrengthPoints() <= 0)
            {
                deathBarbarian = true;
                std::cout << "Barbarian Died" << std::endl;
            }
            std::cout << std::endl;
        }
    }
    
    // Barbarian Fights Harry Potter 
    else if ((characterOne->getCharacter() == "Barbarian") && (characterTwo->getCharacter() == "Harry Potter"))
    {
    bool deathPotterOne = false;
    bool deathPotterTwo = true;
    bool potterDeath = false;
    bool deathBarbarian = false;
        while ((deathBarbarian == false) && (potterDeath == false))
        {
            if ((deathPotterOne == false) && (deathPotterTwo == true))
            {
                
                // Player one attacks
                // Strength is calculated and displayed
                int attackOne = characterOne->attack();
                int defenseOne = characterTwo->defense();
                int armorOne = characterTwo->getArmor();
                int effectOne = ((attackOne - defenseOne) - armorOne);
                if (effectOne <= 0)
                {
                    effectOne = 0;
                }
                std::cout << "Harry Potter recieves " << effectOne << " damage."<< std::endl;
                characterTwo->setStrengthPoints(characterTwo->getStrengthPoints() - effectOne);
                if (characterTwo->getStrengthPoints() <= 0)
                {
                    characterTwo->setStrengthPoints(0);
                }
                std::cout << "Harry Potter strength: " << characterTwo->getStrengthPoints() << std::endl;
                if (characterTwo->getStrengthPoints() <= 0)
                {
                    deathPotterOne = true;
                    std::cout << "Harry Potter died and recovered using Hogwarts!" << std::endl;
                    characterTwo->setStrengthPoints(20);
                    std::cout << "Harry Potter strength: " << characterTwo->getStrengthPoints() << std::endl;
                }
                std::cout << std::endl;
            }
        
            else if ((deathPotterOne == true) && (deathPotterTwo == true))
            {
                int attackOne = characterOne->attack();
                int defenseOne = characterTwo->defense();
                int armorOne = characterTwo->getArmor();
                int effectOne = ((attackOne - defenseOne) - armorOne);
                if (effectOne <= 0)
                {
                    effectOne = 0;
                }
                std::cout << "Harry Potter recieves " << effectOne << " damage."<< std::endl;
                characterTwo->setStrengthPoints(characterTwo->getStrengthPoints() - effectOne);
                if (characterTwo->getStrengthPoints() <= 0)
                {
                    characterTwo->setStrengthPoints(0);
                }
                std::cout << "Harry Potter strength: " << characterTwo->getStrengthPoints() << std::endl;
                if (characterTwo->getStrengthPoints() <= 0)
                {
                    deathPotterTwo = false;
                    std::cout << "Harry Potter died once again. He was unable to recover." << std::endl;
                    potterDeath = true;
                }
                std::cout << std::endl;
            }
   
        // Player two attacks
        // Strength is calculated and displayed
            int attackTwo = characterTwo->attack();
            int defenseTwo = characterOne->defense();
            int armorTwo = characterOne->getArmor();
            int effectTwo = ((attackTwo - defenseTwo) - armorTwo);
            if (effectTwo <= 0)
            {
                effectTwo = 0;
            }
            std::cout << "Barbarian recieves " << effectTwo << " damage."<< std::endl;
            characterOne->setStrengthPoints(characterOne->getStrengthPoints() - effectTwo);
            if (characterOne->getStrengthPoints() <= 0)
            {
                characterOne->setStrengthPoints(0);
            }
            std::cout << "Barbarian strength: " << characterOne->getStrengthPoints() << std::endl;
            if (characterOne->getStrengthPoints() <= 0)
            {
                deathBarbarian = true;
                std::cout << "Barbarian Died" << std::endl;
            }
            std::cout << std::endl;
        }
    }
        // Blue Men Fights Vampire    
    else if ((characterOne->getCharacter() == "Blue Men") && (characterTwo->getCharacter() == "Vampire"))
    {
        bool deathBlueMan = false;
        bool deathVampire = false;
        while ((deathBlueMan == false) && (deathVampire == false))
            {
                
            // Player one attacks
            // Strength is calculated and displayed
            int attackOne = characterOne->attack();
            int defenseOne = characterTwo->defense();
            int armorOne = characterTwo->getArmor();
            int effectOne = ((attackOne - defenseOne) - armorOne);
            if (effectOne <= 0)
            {
                effectOne = 0;
            }
            std::cout << "Vampire recieves " << effectOne << " damage."<< std::endl;
            characterTwo->setStrengthPoints(characterTwo->getStrengthPoints() - effectOne);
            if (characterTwo->getStrengthPoints() <= 0)
            {
                characterTwo->setStrengthPoints(0);
            }
            std::cout << "Vampire strength: " << characterTwo->getStrengthPoints() << std::endl;
            if (characterTwo->getStrengthPoints() <= 0)
            {
                deathVampire = true;
                std::cout << "Vampire Died" << std::endl;
                break;
            }
            std::cout << std::endl;
        
            // Player two attacks
            // Strength is calculated and displayed
            int attackTwo = characterTwo->attack();
            int defenseTwo;
            if ((characterOne->getStrengthPoints() <= 12) && (characterOne->getStrengthPoints() >= 9))
            {
                defenseTwo = characterOne->bdefense(3);
            }
            else if ((characterOne->getStrengthPoints() <= 8) && (characterOne->getStrengthPoints() >= 5))
            {
                defenseTwo = characterOne->bdefense(2);
            }
            else if ((characterOne->getStrengthPoints() <= 4) && (characterOne->getStrengthPoints() >= 0))
            {
                defenseTwo = characterOne->bdefense(1);
            }
            int armorTwo = characterOne->getArmor();
            int effectTwo = ((attackTwo - defenseTwo) - armorTwo);
            if (effectTwo <= 0)
            {
                effectTwo = 0;
            }
            std::cout << "Blue Men recieves " << effectTwo << " damage."<< std::endl;
            characterOne->setStrengthPoints(characterOne->getStrengthPoints() - effectTwo);
            if (characterOne->getStrengthPoints() <= 0)
            {
                characterOne->setStrengthPoints(0);
            }
            std::cout << "Blue Men strength: " << characterOne->getStrengthPoints() << std::endl;
            if (characterOne->getStrengthPoints() <= 0)
            {
                deathBlueMan = true;
                std::cout << "Blue Men Died" << std::endl;
            }
            std::cout << std::endl;
        }
    }
        
        // Blue Men Fights Barbarian  
    else if ((characterOne->getCharacter() == "Blue Men") && (characterTwo->getCharacter() == "Barbarian"))
    {
    bool deathBlueMan = false;
    bool deathBarbarian = false;
    
        while ((deathBlueMan == false) && (deathBarbarian == false))
        {
            
            // Player one attacks
            // Strength is calculated and displayed
            int attackOne = characterOne->attack();
            int defenseOne = characterTwo->defense();
            int armorOne = characterTwo->getArmor();
            int effectOne = ((attackOne - defenseOne) - armorOne);
            if (effectOne <= 0)
            {
                effectOne = 0;
            }
            std::cout << "Barbarian recieves " << effectOne << " damage."<< std::endl;
            characterTwo->setStrengthPoints(characterTwo->getStrengthPoints() - effectOne);
            if (characterTwo->getStrengthPoints() <= 0)
            {
                characterTwo->setStrengthPoints(0);
            }
            std::cout << "Barbarian strength: " << characterTwo->getStrengthPoints() << std::endl;
            if (characterTwo->getStrengthPoints() <= 0)
            {
                deathBarbarian = true;
                std::cout << "Barbarian Died" << std::endl;
                break;
            }
            std::cout << std::endl;
            
            
            // Player two attacks
            // Strength is calculated and displayed
            int attackTwo = characterTwo->attack();
            int defenseTwo;
            if ((characterOne->getStrengthPoints() <= 12) && (characterOne->getStrengthPoints() >= 9))
            {
            defenseTwo = characterOne->bdefense(3);
            }
            else if ((characterOne->getStrengthPoints() <= 8) && (characterOne->getStrengthPoints() >= 5))
            {
                defenseTwo = characterOne->bdefense(2);
            }
            else if ((characterOne->getStrengthPoints() <= 4) && (characterOne->getStrengthPoints() >= 0))
            {
                defenseTwo = characterOne->bdefense(1);
            }
            int armorTwo = characterOne->getArmor();
            int effectTwo = ((attackTwo - defenseTwo) - armorTwo);
            if (effectTwo <= 0)
            {
                effectTwo = 0;
            }
            std::cout << "Blue Men recieves " << effectTwo << " damage."<< std::endl;
            characterOne->setStrengthPoints(characterOne->getStrengthPoints() - effectTwo);
            if (characterOne->getStrengthPoints() <= 0)
            {
                characterOne->setStrengthPoints(0);
            }
            std::cout << "Blue Men strength: " << characterOne->getStrengthPoints() << std::endl;
            if (characterOne->getStrengthPoints() <= 0)
            {
                deathBlueMan = true;
                std::cout << "Blue Men Died" << std::endl;
            }
            std::cout << std::endl;
        }
    }
        
        // Blue Men Fights Medusa  
    else if ((characterOne->getCharacter() == "Blue Men") && (characterTwo->getCharacter() == "Medusa"))
    {
    bool deathBlueMan = false;
    bool deathMedusa = false;
    
        while ((deathBlueMan == false) && (deathMedusa == false))
        {
            
            // Player one attacks
            // Strength is calculated and displayed
            int attackOne = characterOne->attack();
            int defenseOne = characterTwo->defense();
            int armorOne = characterTwo->getArmor();
            int effectOne = ((attackOne - defenseOne) - armorOne);
            if (effectOne <= 0)
            {
                effectOne = 0;
            }
            std::cout << "Medusa recieves " << effectOne << " damage."<< std::endl;
            characterTwo->setStrengthPoints(characterTwo->getStrengthPoints() - effectOne);
            if (characterTwo->getStrengthPoints() <= 0)
            {
                characterTwo->setStrengthPoints(0);
            }
            std::cout << "Medusa strength: " << characterTwo->getStrengthPoints() << std::endl;
            if (characterTwo->getStrengthPoints() <= 0)
            {
                deathMedusa = true;
                std::cout << "Medusa Died" << std::endl;
                break;
            }        
            std::cout << std::endl;
        
        
            // Player two attacks
            // Strength is calculated and displayed
            int attackTwo = characterTwo->attack();
            int defenseTwo;
            if ((characterOne->getStrengthPoints() <= 12) && (characterOne->getStrengthPoints() >= 9))
            {
                defenseTwo = characterOne->bdefense(3);
            }
            else if ((characterOne->getStrengthPoints() <= 8) && (characterOne->getStrengthPoints() >= 5))
            {
                defenseTwo = characterOne->bdefense(2);
            }
            else if ((characterOne->getStrengthPoints() <= 4) && (characterOne->getStrengthPoints() >= 0))
            {
                defenseTwo = characterOne->bdefense(1);
            }
            int armorTwo = characterOne->getArmor();
            int effectTwo = ((attackTwo - defenseTwo) - armorTwo);
            if (effectTwo <= 0)
            {
                effectTwo = 0;
            }
            std::cout << "Blue Men recieves " << effectTwo << " damage."<< std::endl;
            characterOne->setStrengthPoints(characterOne->getStrengthPoints() - effectTwo);
            if (characterOne->getStrengthPoints() <= 0)
            {
                characterOne->setStrengthPoints(0);
            }
            std::cout << "Blue Men strength: " << characterOne->getStrengthPoints() << std::endl;
            if (characterOne->getStrengthPoints() <= 0)
            {
                deathBlueMan = true;
                std::cout << "Blue Men Died" << std::endl;
            }
            std::cout << std::endl;
        }
    }
    
        // Blue Men Fights Harry Potter  
    else if ((characterOne->getCharacter() == "Blue Men") && (characterTwo->getCharacter() == "Harry Potter"))
    {
    bool deathPotterOne = false;
    bool deathPotterTwo = true;
    bool potterDeath = false;
    bool deathBlueMan = false;
    
        while ((deathBlueMan == false) && (potterDeath == false))
        {
            if ((deathPotterOne == false) && (deathPotterTwo == true))
            {
                
            // Player one attacks
            // Strength is calculated and displayed
                int attackOne = characterOne->attack();
                int defenseOne = characterTwo->defense();
                int armorOne = characterTwo->getArmor();
                int effectOne = ((attackOne - defenseOne) - armorOne);
                if (effectOne <= 0)
                {
                    effectOne = 0;
                }
                std::cout << "Harry Potter recieves " << effectOne << " damage."<< std::endl;
                characterTwo->setStrengthPoints(characterTwo->getStrengthPoints() - effectOne);
                if (characterTwo->getStrengthPoints() <= 0)
                {
                    characterTwo->setStrengthPoints(0);
                }
                std::cout << "Harry Potter strength: " << characterTwo->getStrengthPoints() << std::endl;
                if (characterTwo->getStrengthPoints() <= 0)
                {
                    deathPotterOne = true;
                    std::cout << "Harry Potter died and recovered using Hogwarts!" << std::endl;
                    characterTwo->setStrengthPoints(20);
                    std::cout << "Harry Potter strength: " << characterTwo->getStrengthPoints() << std::endl;
                }
                std::cout << std::endl;
                }
        
            else if ((deathPotterOne == true) && (deathPotterTwo == true))
            {
                int attackOne = characterOne->attack();
                int defenseOne = characterTwo->defense();
                int armorOne = characterTwo->getArmor();
                int effectOne = ((attackOne - defenseOne) - armorOne);
                if (effectOne <= 0)
                {
                    effectOne = 0;
                }
                std::cout << "Harry Potter recieves " << effectOne << " damage."<< std::endl;
                characterTwo->setStrengthPoints(characterTwo->getStrengthPoints() - effectOne);
                if (characterTwo->getStrengthPoints() <= 0)
                {
                    characterTwo->setStrengthPoints(0);
                }
                std::cout << "Harry Potter strength: " << characterTwo->getStrengthPoints() << std::endl;
                if (characterTwo->getStrengthPoints() <= 0)
                {
                    deathPotterTwo = false;
                    std::cout << "Harry Potter died once again. He was unable to recover." << std::endl;
                    potterDeath = true;
                    break;
                }
                std::cout << std::endl;
            }
   
        // Player two attacks
        // Strength is calculated and displayed
            int attackTwo = characterTwo->attack();
            int defenseTwo;
            if ((characterOne->getStrengthPoints() <= 12) && (characterOne->getStrengthPoints() >= 9))
            {
                defenseTwo = characterOne->bdefense(3);
            }
            else if ((characterOne->getStrengthPoints() <= 8) && (characterOne->getStrengthPoints() >= 5))
            {
                defenseTwo = characterOne->bdefense(2);
            }
            else if ((characterOne->getStrengthPoints() <= 4) && (characterOne->getStrengthPoints() >= 0))
            {
                defenseTwo = characterOne->bdefense(1);
            }
            int armorTwo = characterOne->getArmor();
            int effectTwo = ((attackTwo - defenseTwo) - armorTwo);
            if (effectTwo <= 0)
            {
                effectTwo = 0;
            }
            std::cout << "Blue Men recieves " << effectTwo << " damage."<< std::endl;
            characterOne->setStrengthPoints(characterOne->getStrengthPoints() - effectTwo);
            if (characterOne->getStrengthPoints() <= 0)
            {
                characterOne->setStrengthPoints(0);
            }
            std::cout << "Blue Men strength: " << characterOne->getStrengthPoints() << std::endl;
            if (characterOne->getStrengthPoints() <= 0)
            {
                deathBlueMan = true;
                std::cout << "Blue Men Died" << std::endl;
            }
            std::cout << std::endl;
        }
    }

        // Medusa Fights Vmpire   
    else if ((characterOne->getCharacter() == "Medusa") && (characterTwo->getCharacter() == "Vampire"))
    {
        bool deathMedusa = false;
        bool deathVampire = false;
        while ((deathMedusa == false) && (deathVampire == false))
        {
            
        // Player one attacks
        // Strength is calculated and displayed
            int attackOne = characterOne->attack();
            int defenseOne = characterTwo->defense();
            int armorOne = characterTwo->getArmor();
            int effectOne = ((attackOne - defenseOne) - armorOne);
            if (effectOne <= 0)
            {
                effectOne = 0;
            }
            std::cout << "Vampire recieves " << effectOne << " damage."<< std::endl;
            characterTwo->setStrengthPoints(characterTwo->getStrengthPoints() - effectOne);
            if (characterTwo->getStrengthPoints() <= 0)
            {
                characterTwo->setStrengthPoints(0);
            }
            std::cout << "Vampire strength: " << characterTwo->getStrengthPoints() << std::endl;
            if (characterTwo->getStrengthPoints() <= 0)
            {
                deathVampire = true;
                std::cout << "Vampire Died" << std::endl;
                break;
            }
            std::cout << std::endl;
            
        // Player two attacks
        // Strength is calculated and displayed
            int attackTwo = characterTwo->attack();
            int defenseTwo = characterOne->defense();
            int armorTwo = characterOne->getArmor();
            int effectTwo = ((attackTwo - defenseTwo) - armorTwo);
            if (effectTwo <= 0)
            {
                effectTwo = 0;
            }
            std::cout << "Medusa recieves " << effectTwo << " damage."<< std::endl;
            characterOne->setStrengthPoints(characterOne->getStrengthPoints() - effectTwo);
            if (characterOne->getStrengthPoints() <= 0)
            {
                characterOne->setStrengthPoints(0);
            }
            std::cout << "Medusa strength: " << characterOne->getStrengthPoints() << std::endl;
            if (characterOne->getStrengthPoints() <= 0)
            {
                deathMedusa = true;
                std::cout << "Medusa Died" << std::endl;
            }
            std::cout << std::endl;
        }
    }
    
    // Medusa Fights Barbarian 
    else if ((characterOne->getCharacter() == "Medusa") && (characterTwo->getCharacter() == "Barbarian"))
    {
        bool deathMedusa = false;
        bool deathBarbarian = false;
        while ((deathMedusa == false) && (deathBarbarian == false))
        {
            
        // Player one attacks
        // Strength is calculated and displayed
            int attackOne = characterOne->attack();
            int defenseOne = characterTwo->defense();
            int armorOne = characterTwo->getArmor();
            int effectOne = ((attackOne - defenseOne) - armorOne);
            if (effectOne <= 0)
            {
                effectOne = 0;
            }
            std::cout << "Barbarian recieves " << effectOne << " damage."<< std::endl;
            characterTwo->setStrengthPoints(characterTwo->getStrengthPoints() - effectOne);
            if (characterTwo->getStrengthPoints() <= 0)
            {
                characterTwo->setStrengthPoints(0);
            }
            std::cout << "Barbarian strength: " << characterTwo->getStrengthPoints() << std::endl;
            if (characterTwo->getStrengthPoints() <= 0)
            {
                deathBarbarian = true;
                std::cout << "Barbarian Died" << std::endl;
                break;
            }
            std::cout << std::endl;
        
        // Player two attacks
        // Strength is calculated and displayed
            int attackTwo = characterTwo->attack();
            int defenseTwo = characterOne->defense();
            int armorTwo = characterOne->getArmor();
            int effectTwo = ((attackTwo - defenseTwo) - armorTwo);
            if (effectTwo <= 0)
            {
                effectTwo = 0;
            }
            std::cout << "Medusa recieves " << effectTwo << " damage."<< std::endl;
            characterOne->setStrengthPoints(characterOne->getStrengthPoints() - effectTwo);
            if (characterOne->getStrengthPoints() <= 0)
            {
                characterOne->setStrengthPoints(0);
            }
            std::cout << "Medusa strength: " << characterOne->getStrengthPoints() << std::endl;
            if (characterOne->getStrengthPoints() <= 0)
            {
                deathMedusa = true;
                std::cout << "Medusa Died" << std::endl;
            }
            std::cout << std::endl;
        }
    }
    
        // Medusa Fights BlueMen 
    else if ((characterOne->getCharacter() == "Medusa") && (characterTwo->getCharacter() == "Blue Men"))
    {
        
        bool deathMedusa = false;
        bool deathBlueMan = false;
        while ((deathMedusa == false) && (deathBlueMan == false))
        {
            
        // Player one attacks
        // Strength is calculated and displayed
            int attackOne = characterOne->attack();
            int defenseOne;
            if ((characterTwo->getStrengthPoints() <= 12) && (characterTwo->getStrengthPoints() >= 9))
            {
                defenseOne = characterTwo->bdefense(3);
            }
            else if ((characterTwo->getStrengthPoints() <= 8) && (characterTwo->getStrengthPoints() >= 5))
            {
                defenseOne = characterTwo->bdefense(2);
            }
            else if ((characterTwo->getStrengthPoints() <= 4) && (characterTwo->getStrengthPoints() >= 0))
            {
                defenseOne = characterTwo->bdefense(1);
            }
            int armorOne = characterTwo->getArmor();
            int effectOne = ((attackOne - defenseOne) - armorOne);
            if (effectOne <= 0)
            {
                effectOne = 0;
            }
            std::cout << "Blue Men recieves " << effectOne << " damage."<< std::endl;
            characterTwo->setStrengthPoints(characterTwo->getStrengthPoints() - effectOne);
            if (characterTwo->getStrengthPoints() <= 0)
            {
                characterTwo->setStrengthPoints(0);
            }
            std::cout << "Blue Men strength: " << characterTwo->getStrengthPoints() << std::endl;
            if (characterTwo->getStrengthPoints() <= 0)
            {
                deathBlueMan = true;
                std::cout << "Blue Men Died" << std::endl;
                break;
            }
            std::cout << std::endl;
        
        // Player two attacks
        // Strength is calculated and displayed
            int attackTwo = characterTwo->attack();
            int defenseTwo = characterOne->defense();
            int armorTwo = characterOne->getArmor();
            int effectTwo = ((attackTwo - defenseTwo) - armorTwo);
            if (effectTwo <= 0)
            {
                effectTwo = 0;
            }
            std::cout << "Medusa recieves " << effectTwo << " Medusa."<< std::endl;
            characterOne->setStrengthPoints(characterOne->getStrengthPoints() - effectTwo);
            if (characterOne->getStrengthPoints() <= 0)
            {
                characterOne->setStrengthPoints(0);
            }
            std::cout << "Medusa strength: " << characterOne->getStrengthPoints() << std::endl;
            if (characterOne->getStrengthPoints() <= 0)
            {
                deathMedusa = true;
                std::cout << "Medusa Died" << std::endl;
            }
            std::cout << std::endl;
        }
    }
    
        // Medusa Fights HarryPotter 
    else if ((characterOne->getCharacter() == "Medusa") && (characterTwo->getCharacter() == "Harry Potter"))
    {
        bool deathPotterOne = false;
        bool deathPotterTwo = true;
        bool potterDeath = false;
        bool deathMedusa = false;
        while ((deathMedusa == false) && (potterDeath == false))
        {
            if ((deathPotterOne == false) && (deathPotterTwo == true))
            {
                
            // Player one attacks
            // Strength is calculated and displayed
                int attackOne = characterOne->attack();
                int defenseOne = characterTwo->defense();
                int armorOne = characterTwo->getArmor();
                int effectOne = ((attackOne - defenseOne) - armorOne);
                if (effectOne <= 0)
                {
                    effectOne = 0;
                }
                std::cout << "Harry Potter recieves " << effectOne << " damage."<< std::endl;
                characterTwo->setStrengthPoints(characterTwo->getStrengthPoints() - effectOne);
                if (characterTwo->getStrengthPoints() <= 0)
                {
                    characterTwo->setStrengthPoints(0);
                }
                std::cout << "Harry Potter strength: " << characterTwo->getStrengthPoints() << std::endl;
                if (characterTwo->getStrengthPoints() <= 0)
                {
                    deathPotterOne = true;
                    std::cout << "Harry Potter died and recovered using Hogwarts!" << std::endl;
                    characterTwo->setStrengthPoints(20);
                    std::cout << "Harry Potter strength: " << characterTwo->getStrengthPoints() << std::endl;
                }
                std::cout << std::endl;
            }   
        
            else if ((deathPotterOne == true) && (deathPotterTwo == true))
            {
                int attackOne = characterOne->attack();
                int defenseOne = characterTwo->defense();
                int armorOne = characterTwo->getArmor();
                int effectOne = ((attackOne - defenseOne) - armorOne);
                if (effectOne <= 0)
                {
                    effectOne = 0;
                }
                std::cout << "Harry Potter recieves " << effectOne << " damage."<< std::endl;
                characterTwo->setStrengthPoints(characterTwo->getStrengthPoints() - effectOne);
                if (characterTwo->getStrengthPoints() <= 0)
                {
                    characterTwo->setStrengthPoints(0);
                }
                std::cout << "Harry Potter strength: " << characterTwo->getStrengthPoints() << std::endl;
                if (characterTwo->getStrengthPoints() <= 0)
                {
                    deathPotterTwo = false;
                    std::cout << "Harry Potter died once again. He was unable to recover." << std::endl;
                    potterDeath = true;
                    break;
                }
                std::cout << std::endl;
           }
        
        // Player two attacks
        // Strength is calculated and displayed
            int attackTwo = characterTwo->attack();
            int defenseTwo = characterOne->defense();
            int armorTwo = characterOne->getArmor();
            int effectTwo = ((attackTwo - defenseTwo) - armorTwo);
            if (effectTwo <= 0)
            {
                effectTwo = 0;
            }
            std::cout << "Medusa recieves " << effectTwo << " damage."<< std::endl;
            characterOne->setStrengthPoints(characterOne->getStrengthPoints() - effectTwo);
            if (characterOne->getStrengthPoints() <= 0)
            {
                characterOne->setStrengthPoints(0);
            }
            std::cout << "Medusa strength: " << characterOne->getStrengthPoints() << std::endl;
            if (characterOne->getStrengthPoints() <= 0)
            {
                deathMedusa = true;
                std::cout << "Medusa Died" << std::endl;
            }
            std::cout << std::endl;
        }
    }
    
    
        // Harry Potter Fights Vampire   
    else if ((characterOne->getCharacter() == "Harry Potter") && (characterTwo->getCharacter() == "Vampire"))
    {

        bool deathPotterOne = false;
        bool deathPotterTwo = true;
        bool potterDeath = false;
        bool deathVampire = false;
        while ((deathVampire == false) && (potterDeath == false))
        {
            
        // Player one attacks
        // Strength is calculated and displayed
            int attackOne = characterOne->attack();
            int defenseOne = characterTwo->defense();
            int armorOne = characterTwo->getArmor();
            int effectOne = ((attackOne - defenseOne) - armorOne);
            if (effectOne <= 0)
            {
                effectOne = 0;
            }
            std::cout << "Vampire recieves " << effectOne << " damage."<< std::endl;
            characterTwo->setStrengthPoints(characterTwo->getStrengthPoints() - effectOne);
            if (characterTwo->getStrengthPoints() <= 0)
            {
                characterTwo->setStrengthPoints(0);
            }
            std::cout << "Vampire strength: " << characterTwo->getStrengthPoints() << std::endl;
            if (characterTwo->getStrengthPoints() <= 0)
            {
                deathVampire = true;
                std::cout << "Vampire Died" << std::endl;
                break;
            }
            std::cout << std::endl;
    
        
        // Player two attacks
        // Strength is calculated and displayed
            if ((deathPotterOne == false) && (deathPotterTwo == true))
            {
                int attackTwo = characterTwo->attack();
                int defenseTwo = characterOne->defense();
                int armorTwo = characterOne->getArmor();
                int effecTwo = ((attackTwo - defenseTwo) - armorTwo);
                if (effecTwo <= 0)
                {
                    effecTwo = 0;
                }
                std::cout << "Harry Potter recieves " << effecTwo << " damage."<< std::endl;
                characterOne->setStrengthPoints(characterOne->getStrengthPoints() - effecTwo);
                if (characterOne->getStrengthPoints() <= 0)
                {
                    characterOne->setStrengthPoints(0);
                }
                std::cout << "Harry Potter strength: " << characterOne->getStrengthPoints() << std::endl;
                if (characterOne->getStrengthPoints() <= 0)
                {
                    deathPotterOne = true;
                    std::cout << "Harry Potter died and recovered using Hogwarts!" << std::endl;
                    characterOne->setStrengthPoints(20);
                    std::cout << "Harry Potter strength: " << characterOne->getStrengthPoints() << std::endl;
                }
                std::cout << std::endl;
            }
    
            else if ((deathPotterOne == true) && (deathPotterTwo == true))
            {
                int attackTwo = characterTwo->attack();
                int defenseTwo = characterOne->defense();
                int armorTwo = characterOne->getArmor();
                int effecTwo = ((attackTwo - defenseTwo) - armorTwo);
                if (effecTwo <= 0)
                {
                    effecTwo = 0;
                }
                std::cout << "Harry Potter recieves " << effecTwo << " damage."<< std::endl;
                characterOne->setStrengthPoints(characterOne->getStrengthPoints() - effecTwo);
                if (characterOne->getStrengthPoints() <= 0)
                {
                    characterOne->setStrengthPoints(0);
                }
                std::cout << "Harry Potter strength: " << characterOne->getStrengthPoints() << std::endl;
                if (characterOne->getStrengthPoints() <= 0)
                {
                    deathPotterTwo = false;
                    std::cout << "Harry Potter died once again. He was unable to recover." << std::endl;
                    potterDeath = true;
                break;
                }
                std::cout << std::endl;
            }
        }
    }

        // Harry Potter Fights Barbarian   
    else if ((characterOne->getCharacter() == "Harry Potter") && (characterTwo->getCharacter() == "Barbarian"))
    {
        bool deathPotterOne = false;
        bool deathPotterTwo = true;
        bool potterDeath = false;
        bool deathBarbarian = false;
        while ((deathBarbarian == false) && (potterDeath == false))
        {
            
        // Player one attacks
        // Strength is calculated and displayed    
            int attackOne = characterOne->attack();
            int defenseOne = characterTwo->defense();
            int armorOne = characterTwo->getArmor();
            int effectOne = ((attackOne - defenseOne) - armorOne);
            if (effectOne <= 0)
            {
                effectOne = 0;
            }
            std::cout << "Barbarian recieves " << effectOne << " damage."<< std::endl;
            characterTwo->setStrengthPoints(characterTwo->getStrengthPoints() - effectOne);
            if (characterTwo->getStrengthPoints() <= 0)
            {
                characterTwo->setStrengthPoints(0);
            }
            std::cout << "Barbarian strength: " << characterTwo->getStrengthPoints() << std::endl;
            if (characterTwo->getStrengthPoints() <= 0)
            {
                deathBarbarian = true;
                std::cout << "Barbarian Died" << std::endl;
                break;
            }
            std::cout << std::endl;
    
    
    // Player two attacks
    // Strength is calculated and displayed
        if ((deathPotterOne == false) && (deathPotterTwo == true))
        {
            int attackTwo = characterTwo->attack();
            int defenseTwo = characterOne->defense();
            int armorTwo = characterOne->getArmor();
            int effecTwo = ((attackTwo - defenseTwo) - armorTwo);
            if (effecTwo <= 0)
            {
                effecTwo = 0;
            }
            std::cout << "Harry Potter recieves " << effecTwo << " damage."<< std::endl;
            characterOne->setStrengthPoints(characterOne->getStrengthPoints() - effecTwo);
            if (characterOne->getStrengthPoints() <= 0)
            {
                characterOne->setStrengthPoints(0);
            }
            std::cout << "Harry Potter strength: " << characterOne->getStrengthPoints() << std::endl;
            if (characterOne->getStrengthPoints() <= 0)
            {
                deathPotterOne = true;
                std::cout << "Harry Potter died and recovered using Hogwarts!" << std::endl;
                characterOne->setStrengthPoints(20);
                std::cout << "Harry Potter strength: " << characterOne->getStrengthPoints() << std::endl;
            }
            std::cout << std::endl;
        }
    
        else if ((deathPotterOne == true) && (deathPotterTwo == true))
        {
            int attackTwo = characterTwo->attack();
            int defenseTwo = characterOne->defense();
            int armorTwo = characterOne->getArmor();
            int effecTwo = ((attackTwo - defenseTwo) - armorTwo);
            if (effecTwo <= 0)
            {
                effecTwo = 0;
            }
            std::cout << "Harry Potter recieves " << effecTwo << " damage."<< std::endl;
            characterOne->setStrengthPoints(characterOne->getStrengthPoints() - effecTwo);
            if (characterOne->getStrengthPoints() <= 0)
            {
                characterOne->setStrengthPoints(0);
            }
            std::cout << "Harry Potter strength: " << characterOne->getStrengthPoints() << std::endl;
            if (characterOne->getStrengthPoints() <= 0)
            {
                deathPotterTwo = false;
                std::cout << "Harry Potter died once again. He was unable to recover." << std::endl;
                potterDeath = true;
                break;
            }
            std::cout << std::endl;
        }
    }
}
    
        // Harry Potter Fights BlueMen 
    else if ((characterOne->getCharacter() == "Harry Potter") && (characterTwo->getCharacter() == "Blue Men"))
    {
        bool deathPotterOne = false;
        bool deathPotterTwo = true;
        bool potterDeath = false;
        bool deathBlueMan = false;
        while ((deathBlueMan == false) && (potterDeath == false))
        {
            
        // Player one attacks
        // Strength is calculated and displayed
            int attackOne = characterOne->attack();
            int defenseOne;
            if ((characterTwo->getStrengthPoints() <= 12) && (characterTwo->getStrengthPoints() >= 9))
            {
                defenseOne = characterTwo->bdefense(3);
            }
            else if ((characterTwo->getStrengthPoints() <= 8) && (characterTwo->getStrengthPoints() >= 5))
            {
                defenseOne = characterTwo->bdefense(2);
            }
            else if ((characterTwo->getStrengthPoints() <= 4) && (characterTwo->getStrengthPoints() >= 0))
            {
                defenseOne = characterTwo->bdefense(1);
            }
            int armorOne = characterTwo->getArmor();
            int effectOne = ((attackOne - defenseOne) - armorOne);
            if (effectOne <= 0)
            {
                effectOne = 0;
            }
            std::cout << "Blue Men recieves " << effectOne << " damage."<< std::endl;
            characterTwo->setStrengthPoints(characterTwo->getStrengthPoints() - effectOne);
            if (characterTwo->getStrengthPoints() <= 0)
            {
                characterTwo->setStrengthPoints(0);
            }
            std::cout << "Blue Men strength: " << characterTwo->getStrengthPoints() << std::endl;
            if (characterTwo->getStrengthPoints() <= 0)
            {
                deathBlueMan = true;
                std::cout << "Blue Men Died" << std::endl;
                break;
            }
            std::cout << std::endl;
        
        // Player two attacks
        // Strength is calculated and displayed
            if ((deathPotterOne == false) && (deathPotterTwo == true))
            {
                int attackTwo = characterTwo->attack();
                int defenseTwo = characterOne->defense();
                int armorTwo = characterOne->getArmor();
                int effecTwo = ((attackTwo - defenseTwo) - armorTwo);
                if (effecTwo <= 0)
                {
                    effecTwo = 0;
                }
                std::cout << "Harry Potter recieves " << effecTwo << " damage."<< std::endl;
                characterOne->setStrengthPoints(characterOne->getStrengthPoints() - effecTwo);
                if (characterOne->getStrengthPoints() <= 0)
                {
                    characterOne->setStrengthPoints(0);
                }
                std::cout << "Harry Potter strength: " << characterOne->getStrengthPoints() << std::endl;
                if (characterOne->getStrengthPoints() <= 0)
                {
                    deathPotterOne = true;
                    std::cout << "Harry Potter died and recovered using Hogwarts!" << std::endl;
                    characterOne->setStrengthPoints(20);
                    std::cout << "Harry Potter strength: " << characterOne->getStrengthPoints() << std::endl;
                }
                std::cout << std::endl;
            }
    
            else if ((deathPotterOne == true) && (deathPotterTwo == true))
            {
                int attackTwo = characterTwo->attack();
                int defenseTwo = characterOne->defense();
                int armorTwo = characterOne->getArmor();
                int effecTwo = ((attackTwo - defenseTwo) - armorTwo);
                if (effecTwo <= 0)
                {
                    effecTwo = 0;
                }
                std::cout << "Harry Potter recieves " << effecTwo << " damage."<< std::endl;
                characterOne->setStrengthPoints(characterOne->getStrengthPoints() - effecTwo);
                if (characterOne->getStrengthPoints() <= 0)
                {
                    characterOne->setStrengthPoints(0);
                }
                std::cout << "Harry Potter strength: " << characterOne->getStrengthPoints() << std::endl;
                if (characterOne->getStrengthPoints() <= 0)
                {
                    deathPotterTwo = false;
                    std::cout << "Harry Potter died once again. He was unable to recover." << std::endl;
                    potterDeath = true;
                    break;
                }
                std::cout << std::endl;
            }
        }
    }

        // Harry Potter Fights Medusa 
    else if ((characterOne->getCharacter() == "Harry Potter") && (characterTwo->getCharacter() == "Medusa"))
    {
        bool deathPotterOne = false;
        bool deathPotterTwo = true;
        bool potterDeath = false;
        bool deathMedusa = false;
        while ((deathMedusa == false) && (potterDeath == false))
        {
            
        // Player one attacks
        // Strength is calculated and displayed
            int attackOne = characterOne->attack();
            int defenseOne = characterTwo->defense();
            int armorOne = characterTwo->getArmor();
            int effectOne = ((attackOne - defenseOne) - armorOne);
            if (effectOne <= 0)
            {
                effectOne = 0;
            }
            std::cout << "Medusa recieves " << effectOne << " damage."<< std::endl;
            characterTwo->setStrengthPoints(characterTwo->getStrengthPoints() - effectOne);
            if (characterTwo->getStrengthPoints() <= 0)
            {
                characterTwo->setStrengthPoints(0);
            }
            std::cout << "Medusa strength: " << characterTwo->getStrengthPoints() << std::endl;
            if (characterTwo->getStrengthPoints() <= 0)
            {
                deathMedusa = true;
                std::cout << "Medusa Died" << std::endl;
                break;
            }
            std::cout << std::endl;
    
    // Player two attacks
    // Strength is calculated and displayed
            if ((deathPotterOne == false) && (deathPotterTwo == true))
            {
                int attackTwo = characterTwo->attack();
                int defenseTwo = characterOne->defense();
                int armorTwo = characterOne->getArmor();
                int effecTwo = ((attackTwo - defenseTwo) - armorTwo);
                if (effecTwo <= 0)
                {
                effecTwo = 0;
                }
                std::cout << "Harry Potter recieves " << effecTwo << " damage."<< std::endl;
                characterOne->setStrengthPoints(characterOne->getStrengthPoints() - effecTwo);
                if (characterOne->getStrengthPoints() <= 0)
                {
                    characterOne->setStrengthPoints(0);
                }
                std::cout << "Harry Potter strength: " << characterOne->getStrengthPoints() << std::endl;
                if (characterOne->getStrengthPoints() <= 0)
                {
                    deathPotterOne = true;
                    std::cout << "Harry Potter died and recovered using Hogwarts!!" << std::endl;
                    characterOne->setStrengthPoints(20);
                    std::cout << "Harry Potter Strength: " << characterOne->getStrengthPoints() << std::endl;
                }
                std::cout << std::endl;
            }   
    
            else if ((deathPotterOne == true) && (deathPotterTwo == true))
            {
                int attackTwo = characterTwo->attack();
                int defenseTwo = characterOne->defense();
                int armorTwo = characterOne->getArmor();
                int effecTwo = ((attackTwo - defenseTwo) - armorTwo);
                if (effecTwo <= 0)
                {
                    effecTwo = 0;
                }
                std::cout << "Harry Potter recieves " << effecTwo << " damage."<< std::endl;
                characterOne->setStrengthPoints(characterOne->getStrengthPoints() - effecTwo);
                if (characterOne->getStrengthPoints() <= 0)
                {
                    characterOne->setStrengthPoints(0);
                }
                std::cout << "Harry Potter strength: " << characterOne->getStrengthPoints() << std::endl;
                if (characterOne->getStrengthPoints() <= 0)
                {
                    deathPotterTwo = false;
                    std::cout << "Harry Potter died once again. He was unable to recover." << std::endl;
                    potterDeath = true;
                    break;
                }
                std::cout << std::endl;
            }
        }   
    }
}