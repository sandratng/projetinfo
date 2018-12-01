#ifndef HEXAGONE_H_INCLUDED
#define HEXAGONE_H_INCLUDED

#include "svgfile.h"
#include "couleur.h"
#include "util.h"
#include "coords.h"
#include <fstream>
#include <string>
#include <vector>

class Hexagone
{
private :
    Coords m_point1;
    Coords m_point2;
    Coords m_point3;
    Coords m_point4;
    Coords m_point5;
    Coords m_point6;
    std::string m_couleur;

public :
    Hexagone(double x1, double y1, double x2, double y2,
             double x3, double y3,double x4, double y4,double x5, double y5,double x6, double y6, std::string colorFill);
    ~Hexagone();
    void dessinerHexagone(Svgfile& svgout);
};


#endif // HEXAGONE_H_INCLUDED

