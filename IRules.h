#ifndef IRULES_H
#define IRULES_H
#include <vector>
#include "IWarrior.h"
#include "IScene.h"
#include <memory>

class IRules
{
public:
    ~IRules() = default;
    virtual bool isDone(const IScene& scene) const = 0;
    virtual std::vector<std::shared_ptr<IWarrior>> generateStepQueue(const IScene& scene) const= 0;
    virtual void doStep(std::shared_ptr<IWarrior>& warrior, IScene& scene) = 0;
};
#endif // IRULES_H
