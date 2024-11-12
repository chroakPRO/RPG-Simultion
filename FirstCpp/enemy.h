#ifndef ENEMY_H
#define ENEMY_H

#include <string>
using namespace std;

class Enemy {
public:
    int health;
    int mana;
    int strength;
    int agility;
    int speed;
    string name;

    Enemy(string type);  // Constructor to handle specific types of enemies
    Enemy();             // Constructor to create a completely random enemy
};

#endif
