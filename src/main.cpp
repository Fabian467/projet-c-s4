#include <iostream>
#include <random>

//------------------------ASSIGNEMENT------------------------------//

/// Returns a random int between min (included) and max (included)
int rand(int min, int max) {
    static std::default_random_engine  generator{std::random_device{}()};
    std::uniform_int_distribution<int> distribution{min, max};
    return distribution(generator);
}

int nombre_utilisateur(){
    int x;
    std::cout << "Choississez un nombre : " << std::endl;
    std::cin >> x;
    return x;
}

bool comparaison(int x,int y){
    if (x != y){
        if(x<y){
            std::cout << "Plus grand!" << std::endl;
            return 0;
        }
        else{
            std::cout << "Plus petit!" << std::endl;
             return 0;
        }
        
    }
    return 1;
}


int main()
{ 
    int y = rand(0,100);
    int x = nombre_utilisateur();

     while (!comparaison(x,y))
    {
        x = nombre_utilisateur();
        comparaison(x,y);
    }
    std::cout << "Bien joue !" << std::endl;
}