// g++ -o main main.cpp simulacio.cpp single_player.cpp && ./main 
#include <iostream>
#include "operacions.h"

int main()
{

    bool gameOver = false;

    while(!gameOver)
    {
        // variable declarations 
        int choice;
        bool valid;


        // we clear the screen and then we project the main menu        
        std::cout << 
        "======================= The Monty Hall Problem Simulator =======================" << std::endl <<
        "Hello and welcome to the Monty Hall Problem Simulator, here is what you can do:" << std::endl <<
        "1) What is The Monty Hall Problem?" << std::endl <<
        "2) Play the MHP" << std::endl <<
        "3) Simulate the MHP (doesn't keep results stats)" << std::endl <<
        "4) See results stats" << std::endl << 
        "5) Exit" << std::endl <<
        "What will you do? ";
        
        // we get the user choice
        do
        {
            valid = true;
            std::cin >> choice;
            
            if (choice < 1 or 5 < choice)
            {
                valid = false;
                std::cout << "Please insert valid value (1 - 5)" << std::endl << "What will you do? " << std::endl;
            }

        } while (!valid);
        

        switch (choice)
        {
        case 1:
            std::cout << "\nSuppose you're on a game show, and you're given the choice of three doors: Behind one door is a car; behind the others, goats." << 
            std::endl << "You pick a door, say No. 1, and the host, who knows what's behind the doors, opens another door, say No. 3, which has a goat." <<
            std::endl << "He then says to you, \"Do you want to pick door No. 2?\" Is it to your advantage to switch your choice?";
            
            std::cout << std::endl << std::endl << std::endl;
            break;
        case 2:
            printf("\nYou've choosen to play the Monty Hall Problem.\n\n");
            SinglePlayer();
            std::cout << std::endl << std::endl << std::endl;
            break;
        case 3:
            printf("\nYou've choosen to simulate the Monty Hall Problem\n\n");
            simulacioMHP();
            std::cout << std::endl << std::endl << std::endl;
            break;
        case 4:
            printf("\nnot available at the moment\n");
            std::cout << std::endl << std::endl << std::endl;
            break;
        case 5:
            printf("\nThanks for playing :)\n");
            gameOver = true;
            break;

        default:
            printf("Not a valid choice\n");
            std::cout << std::endl << std::endl << std::endl;
            break;
        }


        
    }

    return 0;
}