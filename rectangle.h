#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED

#include "svgfile.h"
#include "couleur.h"
#include "util.h"
#include "coords.h"
#include <fstream>
#include <string>
#include <vector>

class Rectangle
{
    private :
    Coords m_coords;
    double m_w;
    double m_h;
    std::string m_couleur;

    public :
        Rectangle(double x, double y, double w, double h, std::string color);
        ~Rectangle();
        void dessinerRectangle(Svgfile& svgout);
};


#endif // RECTANGLE_H_INCLUDED
