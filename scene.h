#ifndef SCENE_H_INCLUDED
#define SCENE_H_INCLUDED

#include "svgfile.h"
#include "couleur.h"
#include "util.h"
#include "coords.h"
#include <fstream>
#include <string>
#include <vector>

class Scene
{
private :

public :
    Scene();
    ~Scene();
    void dessinerScene(Svgfile& svgout);
};


#endif // SCENE_H_INCLUDED

