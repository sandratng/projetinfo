#ifndef LIGNE_H_INCLUDED
#define LIGNE_H_INCLUDED

#include "svgfile.h"
#include "couleur.h"
#include "util.h"
#include "coords.h"
#include <fstream>
#include <string>
#include <vector>
#include <stdio.h>

class Ligne
{
private:
    Coords m_coords1;
    Coords m_coords2;
    std::string m_couleur;
public :
    Ligne (double x1, double y1, double x2, double y2, std::string color);
    ~Ligne();
    void dessinerLigne(Svgfile& svgout);
};


#endif // LIGNE_H_INCLUDED

