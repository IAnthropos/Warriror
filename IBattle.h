#ifndef IBATTLE_H

#define IBATTLE_H
#include "Scene.h"

class IBattle
{
public:
    ~IBattle() = default;
    virtual void start() = 0;
    virtual void end() = 0;
};
#endif // IBATTLE_H
