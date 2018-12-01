#ifndef DISQUE_H_INCLUDED
#define DISQUE_H_INCLUDED

#include "svgfile.h"
#include "couleur.h"
#include "util.h"
#include "coords.h"
#include <fstream>
#include <string>
#include <vector>
#include <stdio.h>

class Disque
{
private:
    Coords m_coords;
    double m_r;
    std::string m_couleur;
public :
    Disque (double x, double y, double r, std::string color);
    ~Disque();
    void dessinerDisque(Svgfile& svgout);
};


#endif // DISQUE_H_INCLUDED
