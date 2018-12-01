#include "cercle.h"
#include <iostream>

Cercle::Cercle(double x, double y, double r, double ep, std::string color):
    m_coords{x,y}, m_r{r}, m_ep{ep}, m_couleur{color}
{}

Cercle::~Cercle()
{}

void Cercle::dessinerCercle(Svgfile& svgout)
{
    double x = this->m_coords.getX();
    double y = this->m_coords.getY();
    double r = m_r;
    double ep = m_ep;
    svgout.addCircle(x, y, r, ep, m_couleur);
}
