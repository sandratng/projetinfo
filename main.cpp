#include "header.h"

void afficherMenu()
{
    std::cout << std::endl << "        ========== Menu =========="  << std::endl << std::endl
              << "1/ Creer une scene" << std::endl
              << "2/ Quitter" << std::endl ;
}

void choixParametres()
{
    int graine;
    int densite;
    int taille;
    std::cout << std::endl << std::endl << "========== Choix des parametres =========="  << std::endl << std::endl
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
    //svgTest(graine,densite,taille);

}

void editeur ()
{
    char choix;

    do
    {
        afficherMenu();
        std::cout << std::endl << "Choix menu :  ";
        std::cin >> choix;
        ///blindage pour ne saisir que 1 ou 2
        if((choix!=49)&&(choix!=50))
        {
            std::cout << std::endl << "Ressaisir le choix" << std::endl << std::endl;
        }

        switch(choix)
        {
        ///Dessiner une scene
        case 49:
        {
            choixParametres();
            break;
        }
        ///Quitter
        case 50:
            break;
        }
    }
    while (choix!=50);
}





int main()
{
    /*     int graine;
     int densite;
     std::mt19937 rg{graine};
     Svgfile svgout;
      std::cout << "La graine: ";
         std::cin >> graine;
     std::cout << "La densite: ";
     std::cin >> densite;
     for(int i=0;i<densite;++i)
     {
     int x1= util::alea(60,940,rg);
     int y1=util::alea(0,800,rg);

     svgout.addDisk(x1, y1-(40+(y1-40)/20)*2-(25+(y1-105)/20), 25+(y1-105)/20, "black" );
     svgout.addDisk(x1, y1-(40+(y1-40)/20), 40+(y1-40)/20, "black");
     }
    */
    //editeur();
    Svgfile svgout;

    Ciel ciel;
    ciel.dessinerCiel(svgout);
    ciel.genererNuages();
    ciel.afficherNuage(svgout);

    Foret foret;
    foret.dessinerForet(svgout);
    foret.genererSapins();
    foret.afficherSapin(svgout);

    Sol sol;
    sol.dessinerSol(svgout);
    sol.genererBonhommesPingouins();
    sol.afficherBonhomme(svgout);
    sol.afficherPingouin(svgout);

    return 0;
}
