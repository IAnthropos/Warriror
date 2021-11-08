#ifndef BATTLE_H
#define BATTLE_H
#include "IBattle.h"

class Battle : public IBattle
{
public:
    virtual void start(const std::shared_ptr<IRules>& rules, IScene& scene) override;
};
#endif // BATTLE_H
