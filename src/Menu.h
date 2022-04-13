#include "Hangman.h"
#include "GuessTheNumber.h"

void menu_loop(){
    char user_input;
    std::cout << "What do you want to do ? " << std::endl;
    std::cout << "1 : Guess the number" << std::endl;
    std::cout << "2 : Hangman" << std::endl;
    std::cout << "Q : Quit" << std::endl;
    std::cin >> user_input;

    while (user_input != '1' || user_input != '2' || user_input != 'q'){  
        if(user_input == '1'){
            GuessTheNumber();
            break;
        }

        else if(user_input == '2'){
            Hangman_loop();
            break;
        }

        else if(user_input == 'Q' || user_input == 'q'){
            std::cout << "A la prochaine !" << std::endl;
            break;
        }

        else{
            std::cout << "Merci de rentrer une réponse viable" << std::endl;
        }
        std::cout << "What do you want to do ? " << std::endl;
        std::cout << "1 : Guess the number" << std::endl;
        std::cout << "2 : Hangman" << std::endl;
        std::cout << "Q : Quit" << std::endl;
        std::cin >> user_input;
        
    }
    

}