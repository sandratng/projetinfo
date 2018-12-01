#ifndef PINGOUIN_H_INCLUDED
#define PINGOUIN_H_INCLUDED

#include "couleur.h"
#include "svgfile.h"
#include "util.h"
#include "triangle.h"
#include "coords.h"
#include "ellipse.h"
#include "quadri.h"
#include "hexagone.h"
#include "disque.h"

class Pingouin
{
private :
    //pieds
    Hexagone m_pied1;
    Hexagone m_pied2;
    //corps
    Ellipse m_corps1;
    Ellipse m_corps2;
    Disque m_corps3;
    Disque m_corps4;
    //yeux
    Disque m_oeil1;
    Disque m_oeil2;
    //nez
    Triangle m_nez;
    //bras
    Quadri m_bras1;
    Quadri m_bras2;


public :
    Pingouin(Hexagone pied1, Hexagone pied2, Ellipse corps1, Ellipse corps2,Disque corps3, Disque corps4,
            Disque oeil1, Disque oeil2, Triangle nez, Quadri bras1, Quadri bras2);
    ~Pingouin();
    void dessinerPingouin(Svgfile& svgout);
};


#endif // PINGOUIN_H_INCLUDED
