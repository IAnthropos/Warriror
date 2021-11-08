#include "Squad.h"
#include <iostream>

int Squad::getSquadAlives(){
    int alives = 0;
    for(auto& warrior: _war_squad){
        if (warrior->getHealth() > 0){
            alives++;
        }
    }
    if(alives == 0)
    {
        for(auto& warrior: _war_squad){
            std::cout << "Команда "  << warrior->getTeam() << " проиграла!" << std::endl;
            break;
        }
    }
    return alives;
}

std::vector<std::shared_ptr<IWarrior>> Squad::getWarSquad(){
    return _war_squad;
}
