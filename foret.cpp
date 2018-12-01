#include "foret.h"
#include <iostream>

Foret::Foret(std::vector<Sapin*> sapin):
    m_sapin{sapin}
{}

Foret::Foret()
{}

Foret::~Foret()
{}

void Foret::dessinerForet(Svgfile& svgout)
{
    svgout.addDisk(500, 1300, 1050,Couleur(218,244,252));
}


void Foret::ajouterSapin(int taille, std::string couleur, int graine)
{
    std::mt19937 rg(graine);
    double x2= util::alea(80,920,rg);
    double y2= util::alea(400,550,rg);
    Triangle haut(x2+taille,y2-185+taille, x2-40+taille, y2-150+taille, x2+40+taille, y2-150+taille, "green");
    Triangle milieu(x2+taille,y2-160+taille, x2-60+taille, y2-100+taille, x2+60+taille, y2-100+taille, "green");
    Triangle bas(x2+taille,y2-120+taille, x2-80+taille, y2-45+taille, x2+80+taille, y2-45+taille, "green");
    Rectangle tronc(x2-15,y2-45, 30+taille, 45+taille, "brown");

    m_sapin.push_back(new Sapin(haut,milieu,bas,tronc));

}

void Foret::afficherSapin(Svgfile& svgout)
{
    std::list<Sapin*>::iterator ite;
    for(const auto&ite:m_sapin)
    {
        ite->dessinerSapin(svgout);
    }
}

void Foret::genererSapins()
{
    char choix;
    int nbSapins=5;
    int taille=0;
    do
    {
        std::cout << std::endl <<"========== Foret ==========" << std::endl;
        std::cout << std::endl << "Changer la densite (1) ou la taille (2) des sapins: ";
        std::cin >> choix;
        ///blindage pour ne saisir que 1 ou 2
        if((choix!=49)&&(choix!=50))
        {
            std::cout << std::endl << "Ressaisir le choix" << std::endl << std::endl;
        }
        switch(choix)
        {
        ///choix densite sapin
        case 49:
        {
            std::cout << "Nombre de sapins souhaite:";
            std::cin >> nbSapins;
            break;
        }
        ///choix taille sapin
        case 50:
        {

            std::cout << "Choisir la taille:";
            std::cin >> taille;
            break;
        }
        }
    }
    while ((choix!=49)&&(choix!=50));

    for (int i=0; i<nbSapins; ++i)
    {
        ajouterSapin(taille,"blanc", i);
    }
}

