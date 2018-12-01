#include "ligne.h"
#include <iostream>

Ligne::Ligne(double x1, double y1, double x2, double y2, std::string color):
    m_coords1{x1,y1},m_coords2{x2,y2}, m_couleur{color}
{}

Ligne::~Ligne()
{}

void Ligne::dessinerLigne(Svgfile& svgout)
{
    double x1 = this->m_coords1.getX();
    double y1 = this->m_coords1.getY();
    double x2 = this->m_coords2.getX();
    double y2 = this->m_coords2.getY();
    svgout.addLine(x1, y1, x2,y2, m_couleur);
}

