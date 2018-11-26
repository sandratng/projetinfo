#include <iostream>

void afficherMenu()
{
    std::cout << "========== Menu =========="  << std::endl << std::endl
              << "1/ Creer une scene" << std::endl
              << "2/ Quitter" << std::endl ;
}

void choixParametres()
{
    int graine;
    int densite;
    int taille;
    std::cout << std::endl << "========== Choix des parametres =========="  << std::endl << std::endl
              << "Entrer la valeur de" << std::endl
              << "La graine: ";
    std::cin >> graine;
    //std::cout << graine  << std::endl;
    std::cout << "La densite: ";
    std::cin >> densite;
   // std::cout << densite  << std::endl;
    std::cout << "La taille: ";
    std::cin >> taille;
    //std::cout << taille  << std::endl;
}

void editeur ()
{
    int choix;
    do
    {
        afficherMenu();
        std::cout << std::endl << "Choix menu : ";
        std::cin >> choix;
        switch(choix)
        {
        ///Dessiner une scene
        case 1:
        {
            choixParametres();
            break;
        }
        ///Quitter
        case 2:
            break;


        }
    }
    while (choix!=2);
}


int main()
{
    editeur();
    return 0;
}
