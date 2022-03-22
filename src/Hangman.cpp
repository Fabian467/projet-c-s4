#include "Hangman.h"

std::string choix_du_mot(){
    std::string liste_mots[] = {"Code", "Jules", "Prog", "Erreur", "Joie"};
    int x = rand(0,4);
    return (liste_mots[x]);
}

std::vector<bool> mot_to_boolean(std::string word){
    std::vector<bool> Complete_word;
    for (size_t i = 0; i<word.length(); i++){
        if (int(word[i]) != 32){ //This is used so that we can put words with spaces
            Complete_word.push_back(0);
            std::cout << Complete_word[i];
        }
    }
    return (Complete_word);
}



void Affichage_tirets(std::string word, std::vector<bool> Complete_word){
    for (size_t i=0; i<word.length(); i++){
        if (int(word[i]) != 32 && Complete_word[i] == false){
            std::cout << "_";
        }
        else if (int(word[i]) != 32 && Complete_word[i] == true)
        {
             std::cout << word[i];
        }
        else{
            std::cout << " ";
        }
    }
}

char demande_lettre(){
    std::cout << "Quelle lettre?" << std::endl;
    char user_input;
    std::cin >> user_input;
    return (user_input);
}

std::vector<bool> Update_boolean_mot(char a, std::string word, std::vector<bool> Complete_word, bool char_in_word){
    if (char_in_word){    
        for (size_t i=0; i<word.length(); i++){
             if (int(a) == int(word[i]) || int(a)+32 == int(word[i]) || int(a)-32 == int(word[i])){
                 if(Complete_word[i] == false){
                    Complete_word[i] = true;
                 }
                 else{
                     std::cout << "Tu as deja trouvé cette lettre, essaies-en une autre!" << std::endl;
                 }
            }
        }
    }
    return Complete_word;
    }

bool Is_Char_In_Word(char a, std::string word){
    for (size_t i=0; i<word.length(); i++){
        if (int(a) == int(word[i]) || int(a)+32 == int(word[i]) || int(a)-32 == int(word[i])){
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
    std::string mot = choix_du_mot();
    std::vector<bool> Complete_word = mot_to_boolean(mot);
    std::cout << std::endl;
    Affichage_tirets(mot, Complete_word);
    int vie = 10;
    bool letter_in_word;
    while(vie != 0){
        auto User_input = demande_lettre();
        letter_in_word = Is_Char_In_Word(User_input, mot);
        if(!letter_in_word){
            vie = vie-1;
            std::cout << "Non! Essaye encore! Il te reste " << vie << " vie !" << std::endl;

        }
        std::cout << std::endl;
        Complete_word = Update_boolean_mot(User_input,mot, Complete_word, letter_in_word);
        Affichage_tirets(mot,Complete_word);
        std::cout << std::endl;
        if (Victory_condition(Complete_word)){
            std::cout << "BRAVO, TU AS TROUVE!" << std::endl;
            break;
        }
        if (vie == 0){
            std::cout << "Desole, c'est perdu :p" << std::endl;
        }
    
    }
}