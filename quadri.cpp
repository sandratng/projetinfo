#include "quadri.h"
#include <iostream>

Quadri::Quadri(double x1, double y1, double x2, double y2,
                   double x3, double y3,double x4, double y4, std::string colorFill):
    m_point1{x1,y1}, m_point2{x2,y2}, m_point3{x3,y3}, m_point4{x4,y4}, m_couleur{colorFill}
{}

Quadri::~Quadri()
{}

void Quadri::dessinerQuadri(Svgfile& svgout)
{
    double x1 = this->m_point1.getX();
    double y1 = this->m_point1.getY();
    double x2 = this->m_point2.getX();
    double y2 = this->m_point2.getY();
    double x3 = this->m_point3.getX();
    double y3 = this->m_point3.getY();
    double x4 = this->m_point4.getX();
    double y4 = this->m_point4.getY();
    svgout.addQuadri(x1, y1, x2, y2, x3, y3, x4, y4, m_couleur);
}

