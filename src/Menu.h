#include "Hangman.h"
#include "GuessTheNumber.h"

void menu_loop(){
    int user_input;
    std::cout << "What do you want to do ? " << std::endl;
    std::cout << "1 : Guess the number" << std::endl;
    std::cout << "2 : Hangman" << std::endl;
    std::cin >> user_input;

    if(user_input == 1){
        GuessTheNumber();
    }

    if(user_input == 2){
        Hangman_loop();
    }
}