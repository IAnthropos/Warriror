#ifndef IWARRIOR_H
#define IWARRIOR_H
#include <string>

class IWarrior
{
public:
    ~IWarrior() = default;
    virtual float makeDamage() = 0;
    virtual void takeDamage(float damage) = 0;
    virtual float getHealth() = 0;
    virtual void printAtr() = 0;
    virtual int getId() = 0;
    virtual std::string getTeam() = 0;
};
#endif // IWARRIOR_H
