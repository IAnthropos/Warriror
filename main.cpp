#include <iostream>
#include "Battle.h"
#include "Squad.h"
#include "Warrior.h"
#include "Rules.h"
#include "Scene.h"
#include <memory>

int main()
{

    std::vector<std::shared_ptr<IWarrior>> warriors;

    warriors.push_back(std::make_shared<Warrior>(Warrior(1, "Рыцарь", 100, 50, 40, 20, 10, "blue")));
    warriors.push_back(std::make_shared<Warrior>( Warrior(2, "Лучник", 100, 40, 15, 35, 20, "blue")));

    std::vector<std::shared_ptr<IWarrior>> enemies;
    enemies.push_back(std::make_shared<Warrior>(Warrior(3, "Тролль", 200, 80, 30, 15, 10, "red")));
    enemies.push_back(std::make_shared<Warrior>(Warrior(4, "Гоблин", 150, 35, 10, 25, 10, "red")));


    std::vector<std::shared_ptr<ISquad>> squads;
    squads.push_back(std::make_shared<Squad>(warriors));
    squads.push_back(std::make_shared<Squad>(enemies));

    Scene scene(squads);

    auto battle = std::make_shared<Battle>();
    auto rules_ptr = std::make_shared<Rules>();
    battle->start(rules_ptr, scene);
    return 0;
}
