#ifndef RULES_H
#define RULES_H
#include <IRules.h>
class Rules : public IRules
{
public:
    const int MAX_ROUNDS = 25;
    virtual bool isDone(const IScene& scene) const override;
    virtual std::vector<std::shared_ptr<IWarrior>> generateStepQueue(const IScene& scene) const override;
    virtual void doStep(std::shared_ptr<IWarrior>& warrior, IScene& scene) override;
};
#endif // RULES_H
