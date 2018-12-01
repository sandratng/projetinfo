#include "pingouin.h"
#include <iostream>

Pingouin::Pingouin(Hexagone pied1, Hexagone pied2, Ellipse corps1, Ellipse corps2,Disque corps3, Disque corps4,
                   Disque oeil1, Disque oeil2, Triangle nez, Quadri bras1, Quadri bras2) :
    m_pied1{pied1}, m_pied2{pied2}, m_corps1{corps1},m_corps2{corps2},m_corps3{corps3},m_corps4{corps4},
    m_oeil1{oeil1},m_oeil2{oeil2}, m_nez{nez}, m_bras1{bras1}, m_bras2{bras2}
{}

Pingouin::~Pingouin()
{}

void Pingouin::dessinerPingouin(Svgfile& svgout)
{
        ///pied
        m_pied1.dessinerHexagone(svgout);
        m_pied2.dessinerHexagone(svgout);
        ///corps
        m_corps1.dessinerEllipse(svgout);
        m_corps2.dessinerEllipse(svgout);
        m_corps3.dessinerDisque(svgout);
        m_corps4.dessinerDisque(svgout);
        ///yeux
        m_oeil1.dessinerDisque(svgout);
        m_oeil2.dessinerDisque(svgout);
        ///nez
        m_nez.dessinerTriangle(svgout);
        ///bras
        m_bras1.dessinerQuadri(svgout);
        m_bras2.dessinerQuadri(svgout);
}
