#ifndef SAPIN_H_INCLUDED
#define SAPIN_H_INCLUDED

#include "svgfile.h"
#include "couleur.h"
#include "util.h"
#include "coords.h"
#include <fstream>
#include <string>
#include <vector>
#include "triangle.h"
#include "rectangle.h"

class Sapin
{
private :
    Triangle m_haut;
    Triangle m_milieu;
    Triangle m_bas;
    Rectangle m_tronc;

public :
    Sapin(Triangle haut, Triangle milieu, Triangle bas, Rectangle tronc);
    ~Sapin();
    void dessinerSapin(Svgfile& svgout);
};


#endif // SAPIN_H_INCLUDED
