#ifndef ELLIPSE_H_INCLUDED
#define ELLIPSE_H_INCLUDED

#include "couleur.h"
#include "svgfile.h"
#include "util.h"
#include "coords.h"
#include <fstream>
#include <string>
#include <vector>
#include <stdio.h>

class Ellipse
{
    private :
        Coords m_coords;
        std::string m_couleur;
        double m_rx;
        double m_ry;

    public :
        Ellipse(double x, double y, double rx, double ry, std::string color);
        ~Ellipse();
        void dessinerEllipse(Svgfile& svgout);
};


#endif // ELLIPSE_H_INCLUDED

