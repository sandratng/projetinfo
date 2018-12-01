#include "nuage.h"
#include <iostream>

Nuage::Nuage(Ellipse ellipse1, Ellipse ellipse2, Ellipse ellipse3, double taille) :
    m_ellipse1{ellipse1}, m_ellipse2{ellipse2}, m_ellipse3{ellipse3}, m_taille{taille}
{}

Nuage::~Nuage()
{}

void Nuage::dessinerNuage(Svgfile& svgout)
{
        m_ellipse1.dessinerEllipse(svgout);
        m_ellipse2.dessinerEllipse(svgout);
        m_ellipse3.dessinerEllipse(svgout);
}
