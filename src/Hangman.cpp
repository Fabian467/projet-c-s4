#include "Hangman.h"

std::string Choose_word(){
    std::vector<std::string> liste_mots = {/*"Code", "Jules", "Prog", "Erreur", */"Joie", "Bonjour ca va", "Bonjour ca va", "Bonjour ca va", "Bonjour ca va"};
    int x = rand(0,liste_mots.size());
    return (liste_mots[x]);
}

std::vector<bool> Word_to_boolean(std::string word){
    std::vector<bool> Complete_word;
    for (size_t i = 0; i<word.length(); i++){
        if (word[i] != ' '){
            Complete_word.push_back(0);
            std::cout << Complete_word[i];
        }
    }
    return (Complete_word);
}



void Word_to_dash(const std::string &word, const std::vector<bool> &Complete_word){
    for (size_t i=0; i<word.length(); i++){
        if (word[i] != ' ' && Complete_word[i] == false){
            std::cout << "_";
        }
        else if (word[i] != ' ' && Complete_word[i] == true)
        {
             std::cout << word[i];
        }
        else{
            std::cout << " ";
        }
    }
}

char Ask_letter(){
    std::cout << "Quelle lettre?" << std::endl;
    char user_input;
    std::cin >> user_input;
    return (user_input);
}

std::vector<bool> Update_liste_boolean(char a, std::string word, std::vector<bool> Complete_word, bool char_in_word){
    if (char_in_word){    
        for (size_t i=0; i<word.length(); i++){
             if (a == word[i] || int(a)+32 == int(word[i]) || int(a)-32 == int(word[i])){
                 if(Complete_word[i] == false){
                    Complete_word[i] = true;
                 }
                 else{
                     std::cout << "Tu as deja trouv" << "\202" << " cette lettre, essaies-en une autre!" << std::endl;
                 }
            }
        }
    }
    return Complete_word;
    }

bool Is_Char_In_Word(char a, std::string word){
    for (size_t i=0; i<word.length(); i++){
        if (a == word[i] || int(a)+32 == int(word[i]) || int(a)-32 == int(word[i])){
           return 1;
        }
    }
    return 0;
}

bool Victory_condition (std::vector<bool> Complete_word){
    for (size_t i=0; i<Complete_word.size(); i++){
        if (Complete_word[i]==false){
            return false;
        }
    }
    return true;
}



// ---------- à re-séparer en fonctions --------
void Hangman_loop(){
    std::string mot = Choose_word();
    std::vector<bool> Liste_boolean = Word_to_boolean(mot);
    std::cout << std::endl;
    Word_to_dash(mot, Liste_boolean);
    int vie = 10;
    bool letter_in_word;
    while(vie != 0){
        auto User_input = Ask_letter();
        letter_in_word = Is_Char_In_Word(User_input, mot);
        if(!letter_in_word){
            vie = vie-1;
            std::cout << "Non! Essaye encore! Il te reste " << vie << " vie !" << std::endl;

        }
        std::cout << std::endl;
        Liste_boolean = Update_liste_boolean(User_input,mot, Liste_boolean, letter_in_word);
        Word_to_dash(mot,Liste_boolean);
        std::cout << std::endl;
        if (Victory_condition(Liste_boolean)){
            std::cout << "BRAVO, TU AS TROUVE!" << std::endl;
            break;
        }
        if (vie == 0){
            std::cout << "Desole, c'est perdu :p" << std::endl;
        }
    
    }
}