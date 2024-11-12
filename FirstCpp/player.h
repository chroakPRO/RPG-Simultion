#ifndef PLAYER_H
#define PLAYER_H

#include <string>
using namespace std;

class Player {
public:
    int health;
    int mana;
    int strength;
    int agility;
    int speed;
    string classType;

    // Constructor to initialize player with specific class type
    Player(string type);
    // Method to display player stats
    void displayStats() const;
};

#endif