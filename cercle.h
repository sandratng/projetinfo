#ifndef CERCLE_H_INCLUDED
#define CERCLE_H_INCLUDED

#include "svgfile.h"
#include "couleur.h"
#include "util.h"
#include "coords.h"
#include <fstream>
#include <string>
#include <vector>

class Cercle
{
private:
    Coords m_coords;
    double m_r;
    double m_ep;
    std::string m_couleur;
public :
    Cercle (double x, double y, double r,double ep, std::string color);
    ~Cercle();
    void dessinerCercle(Svgfile& svgout);
};


#endif // CERCLE_H_INCLUDED
