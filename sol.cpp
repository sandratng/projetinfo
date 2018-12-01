#include "sol.h"
#include <iostream>

Sol::Sol()
{}

Sol::~Sol()
{}

void Sol::dessinerSol(Svgfile& svgout)
{
    svgout.addDisk(0, 1800, 1250,Couleur{238,251,254});
    svgout.addDisk(1000, 1800, 1250,Couleur{238,251,254});
    svgout.addDisk(500, 1800, 1250,Couleur{238,251,254});
}

void Sol::ajouterBonhomme(int taille, std::string couleur, int graine)
{
    std::mt19937 rg(graine);

    double x1= util::alea(60,940,rg);
    double y1=util::alea(580,800,rg);

    ///tete et corps
    Disque corps1(x1, y1-105, 25+taille, "white" );
    Disque corps2(x1, y1-40, 40+taille, "white");
    Cercle corps3(x1, y1-105, 25+taille,2, Couleur(237,237,237) );
    Cercle corps4(x1, y1-40, 40+taille,2, Couleur(237,237,237) );
    ///nez
    Triangle nez(x1,y1-105, x1, y1-95, x1+20, y1-100, "orange");
    ///yeux
    Disque oeil1(x1-10, y1-112, 5+taille, "black");
    Disque oeil2(x1+10, y1-112, 5+taille,"black");
    ///bouton
    Disque bouton1(x1, ((y1-105)*2+90)/2, 5+taille,"brown");
    Disque bouton2(x1, y1-40, 5+taille,"brown");
    Disque bouton3(x1, ((y1-105)*2+170)/2, 5+taille,"brown");
    ///chapeau
    Rectangle chapeau1(x1-25,y1-130, 50+taille, 6+taille, "black");
    Rectangle chapeau2(x1-15,y1-150, 30+taille, 20+taille, "black");
    ///bras
    Ligne bras1( x1-60, y1-96, x1-35, ((y1-105)*2+90)/2-1, "brown");
    Ligne bras2( x1-60, y1-95, x1-35, ((y1-105)*2+90)/2, "brown");
    Ligne bras3( x1-60, y1-94, x1-35, ((y1-105)*2+90)/2+1, "brown");
    Ligne bras4( x1+60, y1-96, x1+35, ((y1-105)*2+90)/2-1, "brown");
    Ligne bras5( x1+60, y1-95, x1+35, ((y1-105)*2+90)/2, "brown");
    Ligne bras6( x1+60, y1-94, x1+35, ((y1-105)*2+90)/2+1, "brown");

    m_bonhomme.push_back(new Bonhomme(corps1,corps2,corps3,corps4,nez,oeil1,oeil2,bouton1,bouton2,bouton3,chapeau1,chapeau2,
                                      bras1,bras2,bras3,bras4,bras5,bras6));
}

void Sol::ajouterPingouin(int taille, std::string couleur, int graine)
{
    std::mt19937 rg(graine);

    double x4= util::alea(40,960,rg);
    double y4=util::alea(580,780,rg);
    ///pied
    Hexagone pied1(x4+12, y4-21,x4+34,y4+2,x4+24,y4-3,x4+25,y4+9,x4+18,y4+2,x4+14,y4+14,"orange");
    Hexagone pied2(x4-12, y4-21,x4-34,y4+2,x4-24,y4-3,x4-25,y4+9,x4-18,y4+2,x4-14,y4+14,"orange");
    ///corps
    Ellipse corps1(x4, y4-61, 30, 60,"black" );
    Ellipse corps2(x4, y4-121+65, 25, 50, "white");
    Disque corps3(x4, y4-121-5, 25, "black");
    Disque corps4(x4, y4-121, 20, "white");
    ///yeux
    Disque oeil1(x4-8, y4-121-7, 4.5, "black");
    Disque oeil2(x4+8, y4-121-7, 4.5, "black");
    ///nez
    Triangle nez(x4-5,y4-121+1, x4+5,y4-121+1, x4, y4-121+10, "orange");
    ///bras
    Quadri bras1(x4-22,y4-121+20,x4-34,y4-121+40,x4-39,y4-121+60,x4-37,y4-121+80, "black");
    Quadri bras2(x4+22,y4-121+20,x4+34,y4-121+40,x4+39,y4-121+60,x4+37,y4-121+80, "black");

    m_pingouin.push_back(new Pingouin(pied1,pied2,corps1,corps2,corps3,corps4,oeil1,oeil2,nez,bras1,bras2));
}

void Sol::afficherBonhomme(Svgfile& svgout)
{
    std::list<Bonhomme*>::iterator ite;
    for(const auto&ite:m_bonhomme)
    {
        ite->dessinerBonhomme(svgout);
    }
}

void Sol::afficherPingouin(Svgfile& svgout)
{
    std::list<Pingouin*>::iterator ite;
    for(const auto&ite:m_pingouin)
    {
        ite->dessinerPingouin(svgout);
    }
}

void Sol::genererBonhommesPingouins()
{
    char choix;
    char choix2;
    int nbBonhommes=5;
    int nbPingouins=5;
    int taille=0;
    do
    {
        std::cout << std::endl <<"========== Sol ==========" << std::endl;
        std::cout << std::endl << "Changer les bonhommes de neige(1) ou les pingouins(2): ";
        std::cin >> choix;
        ///blindage pour ne saisir que 1 ou 2
        if((choix!=49)&&(choix!=50))
        {
            std::cout << std::endl << "Ressaisir le choix: " << std::endl << std::endl;
        }
        switch(choix)
        {
        ///changer les bonhommes de neige
        case 49:
        {
            do
            {
                std::cout << std::endl << "Changer la densite(1) ou la taille(2) des bonhommes de neige: ";
                std::cin >> choix2;
                ///blindage pour ne saisir que 1 ou 2
                if((choix2!=49)&&(choix2!=50))
                {
                    std::cout << std::endl << "Ressaisir le choix: " << std::endl << std::endl;
                }
                switch(choix2)
                {
                ///choix densite bonhommes de neige
                case 49:
                {
                    std::cout << "Nombre de bonhommes de neige souhaite: ";
                    std::cin >> nbBonhommes;
                    break;
                }
                ///choix taille bonhomme
                case 50:
                {

                    std::cout << "Choisir la taille: ";
                    std::cin >> taille;
                    break;
                }
                }
            }
            while ((choix2!=49)&&(choix2!=50));
            break;
        }
        ///choix les pingouins
        case 50:
        {
            do
            {
                std::cout << std::endl << "Changer la densite(1) ou la taille(2) des pingouins: ";
                std::cin >> choix2;
                ///blindage pour ne saisir que 1 ou 2
                if((choix2!=49)&&(choix2!=50))
                {
                    std::cout << std::endl << "Ressaisir le choix: " << std::endl << std::endl;
                }
                switch(choix2)
                {
                ///choix densite pingouins
                case 49:
                {
                    std::cout << "Nombre de pingouins souhaite: ";
                    std::cin >> nbPingouins;
                    break;
                }
                ///choix taille pingouins
                case 50:
                {

                    std::cout << "Choisir la taille: ";
                    std::cin >> taille;
                    break;
                }
                }
            }
            while ((choix2!=49)&&(choix2!=50));
            break;
        }
        }
    }
    while ((choix!=49)&&(choix!=50));

    for (int i=0; i<nbBonhommes; ++i)
    {
        ajouterBonhomme(taille,"blanc", i);
    }
        for (int j=0; j<nbPingouins; ++j)
    {
        ajouterPingouin(taille,"blanc", j);
    }
}
