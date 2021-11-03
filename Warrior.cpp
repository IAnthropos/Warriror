#include "Warrior.h"
#include <iostream>

float Warrior::makeDamage(){
    if(this->getHealth() <= 0){
        std::cout << _name << " без сознания, пропускает ход" << std::endl;
        return 0;
    }
    float true_damage = _force + _agility;
    std::cout << _name + " нанес урон " << true_damage << std::endl;
    return true_damage;
}

void Warrior::takeDamage(float damage){
    if(damage <= 0){
        std::cout << "Урон нанесен не был" << std::endl;
    }
    else{
        float block;
        if (damage > _protection + _dodge) block = _protection + _dodge;
        else block = damage - 1;
        damage = damage - block;
        std::cout << _name << " блокирует " << block << ", получил урон " << damage << ", потеряно 5 очков защиты" << std::endl;
        _health -= damage;
        if(_protection > 0) _protection -=5;
        if(_health <= 0)
        {
            _health = 0;
            std::cout << _name << " теряет сознание" << std::endl;
        }
    }
}

void Warrior::printAtr(){
    std::cout << _name << " " << _health << " " << _force << " " << _protection << " " << _dodge << " " << _agility << " " <<_team << std::endl;
}

float Warrior::getHealth(){
    return _health;
}

int Warrior::getId()
{
   return _id;
}

std::string Warrior::getTeam(){
    return _team;
}
