#ifndef IRULES_H
#define IRULES_H
#include <vector>
#include "Warrior.h"
#include "Scene.h"

class IRules
{
public:
    ~IRules() = default;
    virtual bool isDone(Scene& scene) = 0;
    virtual std::vector<Warrior> generateStepQueue(Scene& scene) = 0;
    virtual void doStep(Warrior& warrior, Scene& scene) = 0;
};
#endif // IRULES_H
