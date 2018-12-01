#include "neige.h"
#include <iostream>

Neige::Neige(Disque disque) :
    m_disque{disque}
{}

Neige::~Neige()
{}

void Neige::dessinerNeige(Svgfile& svgout)
{
        std::mt19937 rg;
    for(int i=0; i<150; ++i)
    {
        double xn= util::alea(0,1000,rg);
        double yn=util::alea(230,800,rg);
        svgout.addDisk( xn, yn, 5, "white");
    }
}
