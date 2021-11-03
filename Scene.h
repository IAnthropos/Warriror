#ifndef SCENE_H
#define SCENE_H
#include "Squad.h"
#include "IScene.h"
#include <vector>

class Scene : public IScene
{
public:
    Scene(std::vector<Squad> squads) : _squads(squads){}
    std::vector<Squad> _squads;
};
#endif // SCENE_H
