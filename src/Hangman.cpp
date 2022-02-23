#include "Hangman.h"


std::string choix_du_mot(){
    std::string liste_mots[5] = {"Code", "Jules", "Programmation", "Erreur", "Joie et volupte"};
    int x = rand(0,4);
    return (liste_mots[x]);
}

bool lettres_decouvertes(std::string word){
    std::vector<std::string> Complete_word;
    for (size_t i = 0; i<word)
}

bool bonne_lettre(char a){
    char b;
    std::cin >> b;
    if (a==b){
        return 1;
    }
    return 0;
}

void Affichage_tirets(std::string word){
    for (size_t i=0; i<word.length(); i++){
        if (int(word[i]) != 32 && lettre_decouverte(word[i]) == 0){
            std::cout << "_";
        }
        else if (int(word[i]) != 32 && lettre_decouverte(word[i]) == 0)
        {
             std::cout << word[i];
        }
        else{
            std::cout << " ";
        }
    }
}

void Hangman(){
    Affichage_tirets("Salut ca va");
}