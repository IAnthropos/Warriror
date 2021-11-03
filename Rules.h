#ifndef RULES_H
#define RULES_H
#include <IRules.h>
class Rules : IRules
{
public:
    const int MAX_ROUNDS = 25;
    virtual bool isDone(Scene& scene) override;
    virtual std::vector<Warrior> generateStepQueue(Scene& scene) override;
    virtual void doStep(Warrior& warrior, Scene& scene) override;
};
#endif // RULES_H
