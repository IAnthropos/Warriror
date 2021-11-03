#ifndef BATTLE_H
#define BATTLE_H
#include "IBattle.h"
#include "Scene.h"

class Battle : public IBattle
{
public:
    virtual void start() override;
    virtual void end() override;

};
#endif // BATTLE_H
