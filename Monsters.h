#ifndef MONSTERS_H
#define MONSTERS_H

#include <iostream>
using namespace std;

class Monsters {
    private:
    int survivalPoints;
    bool armorCondition;
    bool white_flag;
    int bossAngerLevel;
    int monster_damage;
    int foodScore;
    int waterScore;
    bool weaponCondition;
    int monsterPoints;


    public:
    //Monsters();
    //Monsters(int survivalPoints, bool armorCondition, bool white_flag, int bossAngerLevel, int foodScore, int waterScore, bool weaponCondition, int monster_damage, int monsterPoints);

    string getMonster();
    char getWeapon();
    int setAttack(int numPoints, int numWater, int numFood, int boss_anger);
};
#endif