#include "Hangman.h"


std::string choix_du_mot(){
    std::string liste_mots[5] = {"Code", "Jules", "Programmation", "Erreur", "Joie et volupte"};
    int x = rand(0,4);
    return (liste_mots[x]);
}

std::vector<bool> Vecteur_mot(std::string word){
    std::vector<bool> Complete_word;
    for (size_t i = 0; i<word.length(); i++){
        if (int(word[i]) != 32){
            Complete_word.push_back(0);
            std::cout << Complete_word[i];
        }
    }
    return (Complete_word);
}



void Affichage_tirets(std::string word, std::vector<bool> Complete_word){
    for (size_t i=0; i<word.length(); i++){
        if (int(word[i]) != 32 && Complete_word[i] == 0){
            std::cout << "_";
        }
        else if (int(word[i]) != 32 && Complete_word[i] == 1)
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

std::vector<bool> Is_char_in_word(char a, std::string word, std::vector<bool> Complete_word){
    for (size_t i=0; i<word.length(); i++){
        if (int(a) == int(word.at(i)) || int(a)+20 == int(word.at(i)) || int(a)-20 == int(word.at(i))){
            Complete_word[i] = 1;
            return (Complete_word);
        }
    }
    return Complete_word;
}

void Hangman(){
    //std::vector<bool> Complete_word = Vecteur_mot("Bonjour");
    std::vector<bool> Complete_word = { 0, 0, 1, 1, 0, 1, 0};
    std::cout << std::endl;
    Affichage_tirets("Bonjour", Complete_word);
}