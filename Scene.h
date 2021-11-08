#ifndef SCENE_H
#define SCENE_H
#include "IScene.h"
#include <vector>

class Scene : public IScene
{
public:
    Scene(std::vector<std::shared_ptr<ISquad>>& squads) : _squads(squads){}
    virtual std::vector<std::shared_ptr<ISquad>>  getSquads() const override {return  _squads;}
    std::vector<std::shared_ptr<ISquad>> _squads;
};
#endif // SCENE_H
