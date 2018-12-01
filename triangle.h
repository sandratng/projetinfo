#ifndef TRIANGLE_H_INCLUDED
#define TRIANGLE_H_INCLUDED

#include "svgfile.h"
#include "couleur.h"
#include "util.h"
#include "coords.h"
#include <fstream>
#include <string>
#include <vector>

class Triangle
{
private :
    Coords m_sommet1;
    Coords m_sommet2;
    Coords m_sommet3;
    std::string m_couleur;
public:
    Triangle (double x1, double y1, double x2, double y2,
            double x3, double y3, std::string color);
    ~Triangle();
    Coords getPos();
    void dessinerTriangle(Svgfile& svgout);
};


#endif // TRIANGLE_H_INCLUDED
