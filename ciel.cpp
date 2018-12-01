#include "ciel.h"
#include <iostream>

Ciel::Ciel(std::vector<Nuage*> nuages):
    m_nuages{nuages}
{}

Ciel::Ciel()
{}

Ciel::~Ciel()
{}

void Ciel::dessinerCiel(Svgfile& svgout)
{
    svgout.addRect(0,0, 1000, 800, Couleur(119,215,242));
}


void Ciel::ajouterNuage(int taille, std::string couleur, int graine)
{
    std::mt19937 rg(graine);

    double x = util::alea(20,980,rg);
    double y =util::alea(10,200,rg);

    Ellipse ellipse1(x,y-20,50+taille,30+taille, "white");
    Ellipse ellipse2(x+50,y-20, 40+taille, 20+taille, "white");
    Ellipse ellipse3(x+25,y, 35+taille, 20+taille, "white");
    m_nuages.push_back(new Nuage(ellipse1, ellipse2, ellipse3, taille));

}

void Ciel::afficherNuage(Svgfile& svgout)
{
    std::list<Nuage*>::iterator ite;
    for(const auto&ite:m_nuages)
    {
        ite->dessinerNuage(svgout);
    }
}

void Ciel::genererNuages()
{
    char choix;
    int nbNuages=5;
    int taille=0;
    do
    {
        std::cout << std::endl <<"========== Ciel ==========" << std::endl;
        std::cout << std::endl << "Changer la densite(1) ou la taille(2) des nuages: ";
        std::cin >> choix;
        ///blindage pour ne saisir que 1 ou 2
        if((choix!=49)&&(choix!=50))
        {
            std::cout << std::endl << "Ressaisir le choix: " << std::endl << std::endl;
        }
        switch(choix)
        {
        ///choix densite nuage
        case 49:
        {
            std::cout << "Nombre de nuages souhaite: ";
            std::cin >> nbNuages;
            break;
        }
        ///choix taille nuage
        case 50:
        {

            std::cout << "Choisir la taille: ";
            std::cin >> taille;
            break;
        }
        }
    }
    while ((choix!=49)&&(choix!=50));

    for (int i=0; i<nbNuages; ++i)
    {
        ajouterNuage(taille,"blanc", i);
    }
}
