#include "Rules.h"
#include "Scene.h"
#include "Warrior.h"
#include <iostream>
#include <vector>

bool Rules::isDone(const IScene& scene) const{
    int alives_squads = 0;
    for(auto& squad : scene.getSquads()){
        if(squad->getSquadAlives() > 0)
        {
            alives_squads++;
        }
    }
    return (alives_squads > 1);
}

 std::vector<std::shared_ptr<IWarrior>> Rules::generateStepQueue(const IScene& scene) const{
    std::vector<std::shared_ptr<IWarrior>> warrior_queue;
    for(auto& squad : scene.getSquads()){
        for(auto& warrior: squad->getWarSquad()){
            if(warrior->getHealth() > 0)
            {
                warrior_queue.push_back(warrior);
                warrior->printAtr();
            }
        }
    }
    return warrior_queue;
}

void Rules::doStep(std::shared_ptr<IWarrior>& warrior, IScene &scene){
    for(auto& squad : scene.getSquads()){
        for(auto& war: squad->getWarSquad()){
            if(warrior->getId() == war->getId())
            {
               warrior = war;
            }
        }
    }
    for(auto& squad : scene.getSquads()){
        for(auto& war: squad->getWarSquad()){
            if((war->getTeam() != warrior->getTeam()) & ((war->getHealth() > 0) & (warrior->getHealth() > 0))){
                war->takeDamage(warrior->makeDamage());
                if(war->getHealth() > 0) war->printAtr();
                break;
            }
        }
    }
}

