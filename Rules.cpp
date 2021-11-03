#include "Rules.h"
#include "Scene.h"

#include <iostream>
#include <vector>

bool Rules::isDone(Scene& scene){
    int alives_squads = 0;
    for(auto squad: scene._squads){
        if(squad.getSquadAlives() > 0)
        {
            alives_squads++;
        }
    }
    return (alives_squads > 1);
}

std::vector<Warrior> Rules::generateStepQueue(Scene& scene){
    std::vector<Warrior> warrior_queue;
    for(auto squad : scene._squads){
        for(auto warrior: squad._war_squad){
            if(warrior.getHealth() > 0)
            {
                warrior_queue.push_back(warrior);
                warrior.printAtr();
            }
        }
    }
    return warrior_queue;
}

void Rules::doStep(Warrior& warrior, Scene& scene){
    for(auto& squad : scene._squads){
        for(auto& war: squad._war_squad){
            if(warrior.getId() == war.getId())
            {
               warrior = war;
            }
        }
    }
    for(auto& squad : scene._squads){
        for(auto& war: squad._war_squad){
            if(war.getTeam() != warrior.getTeam() & war.getHealth() > 0 & warrior.getHealth() > 0){
                war.takeDamage(warrior.makeDamage());
                if(war.getHealth() > 0) war.printAtr();
                break;
            }
        }
    }
}

