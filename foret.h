#ifndef FORET_H_INCLUDED
#define FORET_H_INCLUDED

#include "svgfile.h"
#include "couleur.h"
#include "util.h"
#include "coords.h"
#include <fstream>
#include <string>
#include <vector>
#include "sapin.h"
#include "nuage.h"
#include "rectangle.h"
#include "triangle.h"
#include <list>

class Foret
{
private :
    //creation d'un tableau de sapin
    std::vector<Sapin*> m_sapin;
    //la fonction forme le sapin
    void ajouterSapin(int taille, std::string couleur, int graine);
public :
    //constructeur
    Foret(std::vector<Sapin*> sapin);
    //constructeur par defaut
    Foret();
    ~Foret();
    //affiche la couleur du fond de la foret
    void dessinerForet(Svgfile& svgout);
    //affiche les sapins dans le svg
    void afficherSapin(Svgfile& svgout);
    //genere les sapin
    void genererSapins();
};


#endif // FORET_H_INCLUDED

