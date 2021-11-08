#ifndef WARRIOR_H
#define WARRIOR_H
#include <string>
#include "IWarrior.h"

class Warrior : public IWarrior
{
public:
    Warrior(int id,
            std::string name,
            float health,
            float force,
            float protection,
            float dodge,
            float agility,
            std::string team) :
       _id(id) ,_name(name), _health(health), _force(force), _protection(protection), _dodge(dodge), _agility(agility), _team(team){}
    virtual float makeDamage() override;
    virtual void takeDamage(float damage) override;
    virtual void printAtr() override;
    virtual float getHealth() override;
    virtual int getId() override;
    virtual std::string getTeam() override;

private:
    float _id;
    std::string _name;
    float _health;
    float _force;
    float _protection;
    float _dodge;
    float _agility;
    std::string _team;

};
#endif // WARRIOR_H
