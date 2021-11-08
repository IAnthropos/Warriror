#include "Battle.h"

#include <iostream>
#include <vector>
#include <memory>
#include "Warrior.h"
void Battle::start(const std::shared_ptr<IRules>& rules, IScene& scene){
    int round = 1;
    while(true){
        if(!rules->isDone(scene)) break;
        auto queue = rules->generateStepQueue(scene);
        for(auto& warrior: queue){
            rules->doStep(warrior, scene);
        }
        std::cout << "\n"  <<  "Round " << round++ << std::endl;
    }

    std::cout << "Битва завершена" << std::endl;

}

