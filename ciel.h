#ifndef CIEL_H_INCLUDED
#define CIEL_H_INCLUDED

#include "svgfile.h"
#include "couleur.h"
#include "util.h"
#include "coords.h"
#include <fstream>
#include <string>
#include <vector>
#include "ellipse.h"
#include "nuage.h"
#include <list>


class Ciel
{
private :
    //creation d'une tableau de nuage
    std::vector<Nuage*> m_nuages;
    //la fonction forme le nuage
    void ajouterNuage(int taille, std::string couleur, int graine);
public :
    //constructeur
    Ciel(std::vector<Nuage*> nuages);
    //constructeur par defaut
    Ciel();
    ~Ciel();
    //affiche la couleur du fond du ciel
    void dessinerCiel(Svgfile& svgout);
    //affiche les nuages dans le svg
    void afficherNuage(Svgfile& svgout);
    //genere les nuages
    void genererNuages();
};


#endif // CIEL_H_INCLUDED
