#ifndef SQUAD_H
#define SQUAD_H
#include "ISquad.h"
#include "Warrior.h"
#include <vector>

class Squad : public ISquad
{
public:
    Squad(std::vector<Warrior> war_squad) : _war_squad(war_squad){}
    std::vector<Warrior> _war_squad;
    virtual int getSquadAlives() override;
};
#endif // SQUAD_H
