#ifndef QUADRI_H_INCLUDED
#define QUADRI_H_INCLUDED

#include "svgfile.h"
#include "couleur.h"
#include "util.h"
#include "coords.h"
#include <fstream>
#include <string>
#include <vector>

class Quadri
{
private :
    Coords m_point1;
    Coords m_point2;
    Coords m_point3;
    Coords m_point4;
    std::string m_couleur;

public :
    Quadri(double x1, double y1, double x2, double y2,
             double x3, double y3,double x4, double y4, std::string colorFill);
    ~Quadri();
    void dessinerQuadri(Svgfile& svgout);
};


#endif // QUADRI_H_INCLUDED
