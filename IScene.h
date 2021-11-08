#ifndef ISCENE_H
#define ISCENE_H
#include "ISquad.h"
#include <vector>
#include <memory>

class IScene
{
public:
    ~IScene() = default;
    virtual std::vector<std::shared_ptr<ISquad>> getSquads() const = 0;
};
#endif // ISCENE_H
