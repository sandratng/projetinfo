/**
    Dans l'urgence de la livraison d'un code op�rationnel
    ce fichier source n'a pas �t� proprement restructur�
    Ceci n'est pas un code "mod�le" !
**/

#include "util.h"

#include <random>
#include <ctime>
#include <iostream>

namespace util
{

/// Vide tampon clavier
void videCin()
{
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}


/// Cette fonction retourne un entier al�atoire dans [min...max]
int alea(int min, int max)
{
    // Sur un syst�me Linux il est possible(pr�f�rable ?) de faire
    //static std::mt19937 randGen( std::random_device{}() );
    static std::mt19937 randGen(time(nullptr));
    return std::uniform_int_distribution<>(min, max)(randGen);
}

/// Cette fonction retourne un entier al�atoire dans [min...max]
int alea(int min, int max, std::mt19937& randGen)
{
    return std::uniform_int_distribution<>(min, max)(randGen);
}

/// Cette fonction retourne un r�el al�atoire dans [min...max[
double alea(double min, double max,  std::mt19937& randGen)
{
    return std::uniform_real_distribution<>(min, max)(randGen);
}

void testAlea()
{
    int graine1=0;
    int graine2=1;
    std::mt19937 rg1{graine1};
    std::mt19937 rg2{graine2};
    for (int i=0; i<20; ++i)
        std::cout << util::alea(1, 6, rg1) << " ";
    std::cout << std::endl;
    for (int i=0; i<20; ++i)
        std::cout << util::alea(1, 6, rg2) << " ";
    std::cout << std::endl;
}

}
