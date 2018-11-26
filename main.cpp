#include "svgfile.h"
#include <iostream>

void afficherMenu()
{
    std::cout << std::endl << "========== Menu =========="  << std::endl << std::endl
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


/// Code initial pour comprendre les ajouts de primitives
void svgTest()
{
    /// Sortie graphique dans le fichier output.svg
    /// ( options à voir svgfile.h ligne 23 )
    Svgfile svgout;

    /// Dessin du repère cartésien
    // svgout.addGrid();

    /// Dessins de sphères
    svgout.addDisk(100, 100, 90, "redball");
    svgout.addDisk(300, 100, 70, "greenball");
    svgout.addDisk(500, 100, 50, "blueball");
    svgout.addDisk(700, 100, 30, "greyball");

    /// Dessins de disques
    svgout.addDisk(100, 300, 30, "red");
    svgout.addDisk(300, 300, 50, "green");
    svgout.addDisk(500, 300, 70, "blue");
    svgout.addDisk(700, 300, 90, "grey");

    /// Dessins de croix
    svgout.addCross(300, 300, 50);

    for (int y=50; y<400; y+=50)
        svgout.addCross(400, y, 15);

    /// L'objet svgout est automatiquement libéré à la sortie
    /// de ce sous-programme : le fichier output.svg est alors fermé
}


int main()
{
    svgTest();
    editeur();
    return 0;
}
