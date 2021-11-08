#ifndef SQUAD_H
#define SQUAD_H
#include "ISquad.h"
#include <vector>
#include <memory>

class Squad : public ISquad
{
public:
    Squad(std::vector<std::shared_ptr<IWarrior>> war_squad) : _war_squad(war_squad){}
    std::vector<std::shared_ptr<IWarrior>> _war_squad;
    virtual int getSquadAlives() override;
    virtual std::vector<std::shared_ptr<IWarrior>> getWarSquad() override;
};
#endif // SQUAD_H
