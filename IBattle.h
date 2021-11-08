#ifndef IBATTLE_H

#define IBATTLE_H
#include "ISquad.h"
#include "IWarrior.h"
#include "IRules.h"
#include "IScene.h"
#include <memory>

class IBattle
{
public:
    ~IBattle() = default;
    virtual void start(const std::shared_ptr<IRules>& rules, IScene& scene) = 0;
};
#endif // IBATTLE_H
