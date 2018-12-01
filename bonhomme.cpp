#include "bonhomme.h"
#include <iostream>

Bonhomme::Bonhomme(Disque corps1, Disque corps2, Cercle corps3, Cercle corps4,
                   Triangle nez, Disque oeil1, Disque oeil2,
                   Disque bouton1, Disque bouton2, Disque bouton3,
                   Rectangle chapeau1, Rectangle chapeau2,
                   Ligne bras1,Ligne bras2,Ligne bras3,Ligne bras4,Ligne bras5,Ligne bras6) :
    m_corps1{corps1}, m_corps2{corps2},m_corps3{corps3},m_corps4{corps4},
    m_nez{nez}, m_oeil1{oeil1}, m_oeil2{oeil2},
    m_bouton1{bouton1},m_bouton2{bouton2},m_bouton3{bouton3},
    m_chapeau1{chapeau1},m_chapeau2{chapeau2},
    m_bras1{bras1},m_bras2{bras2},m_bras3{bras3},m_bras4{bras4},m_bras5{bras5},m_bras6{bras6}
{}

Bonhomme::~Bonhomme()
{}

void Bonhomme::dessinerBonhomme(Svgfile& svgout)
{
        ///tete et corps
        m_corps1.dessinerDisque(svgout);
        m_corps2.dessinerDisque(svgout);
        m_corps3.dessinerCercle(svgout);
        m_corps4.dessinerCercle(svgout);
        ///nez
        m_nez.dessinerTriangle(svgout);
        ///yeux
        m_oeil1.dessinerDisque(svgout);
        m_oeil2.dessinerDisque(svgout);
        ///bouton
        m_bouton1.dessinerDisque(svgout);
        m_bouton2.dessinerDisque(svgout);
        m_bouton3.dessinerDisque(svgout);
        ///chapeau
        m_chapeau1.dessinerRectangle(svgout);
        m_chapeau2.dessinerRectangle(svgout);
        ///bras
        m_bras1.dessinerLigne(svgout);
        m_bras2.dessinerLigne(svgout);
        m_bras3.dessinerLigne(svgout);
        m_bras4.dessinerLigne(svgout);
        m_bras5.dessinerLigne(svgout);
        m_bras6.dessinerLigne(svgout);
}
