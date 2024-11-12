#include "player.h"
#include <iostream>

Player::Player(string type) {
    if (type == "Warrior") {
        classType = "Warrior";
        health = 350;
        mana = 0;
        strength = 180;
        agility = 80;
        speed = 50;
    }
    else if (type == "Rogue") {
        classType = "Rogue";
        health = 2000;
        mana = 0;
        strength = 100;
        agility = 250;
        speed = 200;
    }
    else if (type == "Mage") {
        classType = "Mage";
        health = 180;
        mana = 250;
        strength = 80;
        agility = 50;
        speed = 50;
    }
    else if (type == "Hunter") {
        classType = "Hunter";
        health = 400;
        mana = 50;
        strength = 120;
        agility = 200;
        speed = 100;
    }
    else {
        // Default class type if invalid type provided
        classType = "Unknown";
        health = 100;
        mana = 0;
        strength = 50;
        agility = 50;
        speed = 50;
    }
}

void Player::displayStats() const {
    cout << "Class: " << classType << endl;
    cout << "Health: " << health << endl;
    cout << "Mana: " << mana << endl;
    cout << "Strength: " << strength << endl;
    cout << "Agility: " << agility << endl;
    cout << "Speed: " << speed << endl;
}
