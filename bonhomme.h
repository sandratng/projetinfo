#ifndef BONHOMME_H_INCLUDED
#define BONHOMME_H_INCLUDED

#include "svgfile.h"
#include "couleur.h"
#include "util.h"
#include "coords.h"
#include <fstream>
#include <string>
#include <vector>
#include "triangle.h"
#include "rectangle.h"
#include "cercle.h"
#include "disque.h"
#include "ligne.h"

class Bonhomme
{
    private :
Disque m_corps1;
Disque m_corps2;
Cercle m_corps3;
Cercle m_corps4;

Triangle m_nez;
Disque m_oeil1;
Disque m_oeil2;

Disque m_bouton1;
Disque m_bouton2;
Disque m_bouton3;

Rectangle m_chapeau1;
Rectangle m_chapeau2;

Ligne m_bras1;
Ligne m_bras2;
Ligne m_bras3;
Ligne m_bras4;
Ligne m_bras5;
Ligne m_bras6;

    public :
        Bonhomme(Disque corps1, Disque corps2, Cercle corps3, Cercle corps4,
                 Triangle nez, Disque oeil1, Disque oeil2,
                 Disque bouton1, Disque bouton2, Disque bouton3,
                 Rectangle chapeau1, Rectangle chapeau2,
                 Ligne bras1,Ligne bras2,Ligne bras3,Ligne bras4,Ligne bras5,Ligne bras6);
        ~Bonhomme();
        void dessinerBonhomme(Svgfile& svgout);
};


#endif // BONHOMME_H_INCLUDED
