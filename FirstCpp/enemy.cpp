#include "enemy.h"
#include <cstdlib> // For random number generation
#include <ctime>   // To seed the random number generator
// strenght is not a emmber of Enemy error
// FIX: Change strenght to strength
Enemy::Enemy(string type) {
    if (type == "Warrior") {
        name = "Warrior";
        health = 400;
        mana = 0;
        strength = 200;
        agility = 80;
        speed = 50;
    }
    else if (type == "Rogue") {
        name = "Rogue";
        health = 200;
        mana = 0;
        strength = 100;
        agility = 150;
        speed = 200;
    }
    else if (type == "Mage") {
        name = "Mage";
        health = 180;
        mana = 250;
        strength = 80;
        agility = 50;
        speed = 50;
    }
    else if (type == "Hunter") {
        name = "Hunter";
        health = 400;
        mana = 50;
        strength = 120;
        agility = 200;
        speed = 100;
    }
    else {
        // If an unrecognized type is provided, generate a random enemy
        *this = Enemy();
    }
}

Enemy::Enemy() {
    srand(time(nullptr));  // Seed random number generator
    // Randomly set attributes
    name = "Random Enemy";
    health = rand() % 501 + 10; // Random health between 100 and 600
    mana = rand() % 101;          // Random mana between 0 and 100
    strength = rand() % 201 + 10; // Random strength between 50 and 250
    agility = rand() % 151 + 100;  // Random agility between 50 and 200
    speed = rand() % 101 + 45;    // Random speed between 20 and 120
}
