#ifndef ISQUAD_H
#define ISQUAD_H
#include <vector>
#include "IWarrior.h"
#include <memory>
class ISquad
{
public:
    ~ISquad() = default;
    virtual int getSquadAlives() = 0;
    virtual std::vector<std::shared_ptr<IWarrior>> getWarSquad() = 0;
};
#endif // ISQUAD_H
