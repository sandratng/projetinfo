#include "disque.h"
#include <iostream>

Disque::Disque(double x, double y, double r, std::string color):
    m_coords{x,y}, m_r{r}, m_couleur{color}
{}

Disque::~Disque()
{}

void Disque::dessinerDisque(Svgfile& svgout)
{
    double x = this->m_coords.getX();
    double y = this->m_coords.getY();
    double r = m_r;
    svgout.addDisk(x, y, r, m_couleur);
}
