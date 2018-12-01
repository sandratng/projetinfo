#ifndef NUAGE_H_INCLUDED
#define NUAGE_H_INCLUDED

#include "svgfile.h"
#include "couleur.h"
#include "util.h"
#include "coords.h"
#include <fstream>
#include <string>
#include <vector>
#include "ellipse.h"

class Nuage
{
    private :
Ellipse m_ellipse1;
Ellipse m_ellipse2;
Ellipse m_ellipse3;
double m_taille;
    public :
        Nuage(Ellipse ellipse1, Ellipse ellipse2, Ellipse ellipse3, double taille);
        ~Nuage();
        void dessinerNuage(Svgfile& svgout);
};


#endif // NUAGE_H_INCLUDED
