#include "Battle.h"
#include "Squad.h"
#include "Warrior.h"
#include "Rules.h"

#include <iostream>
#include <vector>

void Battle::start(){
    std::cout << "Бой начался" << std::endl;
    std::vector<Warrior> warriors
    {
        Warrior(1, "Рыцарь", 100, 50, 40, 20, 10, "blue"),
        Warrior(2, "Лучник", 100, 40, 15, 35, 20, "blue")
    };
    std::vector<Warrior> enemies
    {
        Warrior(3, "Тролль", 200, 80, 30, 15, 10, "red"),
        Warrior(4, "Гоблин", 70, 35, 10, 25, 10, "red")
    };

    std::vector<Squad>  squads{Squad(warriors), Squad(enemies)};

    Scene scene(squads);

    Rules rules;

    int round = 1;
    while(true){
        auto queue = rules.generateStepQueue(scene);
        for(auto warrior: queue){
            rules.doStep(warrior, scene);
        }
        if(!rules.isDone(scene)) break;
        std::cout << "\n"  <<  "Round " << round++ << std::endl;
    }
    this->end();

}

void Battle::end(){
    std::cout << "Битва завершена" << std::endl;
}
