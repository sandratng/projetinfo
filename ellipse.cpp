#include "ellipse.h"
#include <iostream>

Ellipse::Ellipse(double x, double y, double rx, double ry, std::string color):
    m_coords{x,y}, m_rx{rx}, m_ry{ry}, m_couleur{color}
{}

Ellipse::~Ellipse()
{}

void Ellipse::dessinerEllipse(Svgfile& svgout)
{
    double x = this->m_coords.getX();
    double y = this->m_coords.getY();
    double rx = m_rx;
    double ry = m_ry;
    svgout.addEllipse(x, y, rx, ry,m_couleur);
}
