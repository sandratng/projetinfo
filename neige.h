#ifndef NEIGE_H_INCLUDED
#define NEIGE_H_INCLUDED


#include "svgfile.h"
#include "couleur.h"
#include "util.h"
#include "coords.h"
#include <fstream>
#include <string>
#include <vector>
#include "disque.h"

class Neige
{
    private :
Disque m_disque;
    public :
        Neige(Disque disque);
        ~Neige();
        void dessinerNeige(Svgfile& svgout);
};


#endif // NEIGE_H_INCLUDED
