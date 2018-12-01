#include "rectangle.h"
#include <iostream>

Rectangle::Rectangle(double x, double y, double w, double h, std::string color):
    m_coords{x,y},m_w{w},m_h{h}, m_couleur{color}
{}

Rectangle::~Rectangle()
{}

void Rectangle::dessinerRectangle(Svgfile& svgout)
{
    double x = this->m_coords.getX();
    double y = this->m_coords.getY();
    double w = m_w;
    double h = m_h;
    svgout.addRect(x, y, w,h, m_couleur);
}
