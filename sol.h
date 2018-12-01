#ifndef SOL_H_INCLUDED
#define SOL_H_INCLUDED

#include "svgfile.h"
#include "couleur.h"
#include "util.h"
#include "coords.h"
#include <fstream>
#include <string>
#include <vector>
#include <list>
#include "bonhomme.h"
#include "pingouin.h"
#include "triangle.h"
#include "ellipse.h"
#include "quadri.h"
#include "hexagone.h"
#include "rectangle.h"
#include "triangle.h"
#include "disque.h"
#include "cercle.h"
#include "ligne.h"

class Sol
{
    //creation d'une tableau de nuage
    std::vector<Bonhomme*> m_bonhomme;
    std::vector<Pingouin*> m_pingouin;
    //la fonction forme le nuage
    void ajouterBonhomme(int taille, std::string couleur, int graine);
    void ajouterPingouin(int taille, std::string couleur, int graine);
public :
    //constructeur
    Sol(std::vector<Bonhomme*> bonhomme, std::vector<Pingouin*> pingouin);
    //constructeur par defaut
    Sol();
    ~Sol();
    //affiche la couleur du fond du ciel
    void dessinerSol(Svgfile& svgout);
    //affiche les nuages dans le svg
    void afficherBonhomme(Svgfile& svgout);
    //affiche les nuages dans le svg
    void afficherPingouin(Svgfile& svgout);
    //genere les nuages
    void genererBonhommesPingouins();
};


#endif // SOL_H_INCLUDED
