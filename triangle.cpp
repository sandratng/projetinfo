#include "triangle.h"
#include <iostream>

Triangle::Triangle(double x1, double y1, double x2, double y2, double x3, double y3, std::string color):
    m_sommet1{x1,y1},m_sommet2{x2,y2},m_sommet3{x3,y3}, m_couleur{color}
{}

Triangle::~Triangle()
{}

void Triangle::dessinerTriangle(Svgfile& svgout)
{
    double x1 = this->m_sommet1.getX();
    double y1 = this->m_sommet1.getY();
    double x2 = this->m_sommet2.getX();
    double y2 = this->m_sommet2.getY();
    double x3 = this->m_sommet3.getX();
    double y3 = this->m_sommet3.getY();
    svgout.addTriangle(x1, y1, x2, y2, x3, y3, m_couleur);
}

