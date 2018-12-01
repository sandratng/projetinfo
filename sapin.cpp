#include "sapin.h"
#include <iostream>

Sapin::Sapin(Triangle haut, Triangle milieu, Triangle bas, Rectangle tronc) :
    m_haut{haut}, m_milieu{milieu}, m_bas{bas}, m_tronc{tronc}
{}

Sapin::~Sapin()
{}

void Sapin::dessinerSapin(Svgfile& svgout)
{
        m_haut.dessinerTriangle(svgout);
        m_milieu.dessinerTriangle(svgout);
        m_bas.dessinerTriangle(svgout);
        m_tronc.dessinerRectangle(svgout);
}
