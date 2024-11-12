#include "GameManager.h"
#include <cstdlib>
#include <ctime>
#include <vector> // Include the vector header
#include <string> // Include the string header

GameManager::GameManager() {
    // Seed the random number generator
    srand(static_cast<unsigned int>(time(nullptr)));
}

void GameManager::startFight(Player& player, Enemy& enemy) {
    // Suppress detailed fight output when running simulations
#ifndef SUPPRESS_OUTPUT
    std::cout << "A fight has started between " << player.classType << " and " << enemy.name << "!" << std::endl;
#endif

    while (player.health > 0 && enemy.health > 0) {
        // Player attacks first
        int playerDamage = (player.strength + (rand() % 20 + 1)) - (enemy.agility / 10);
        playerDamage = playerDamage < 0 ? 0 : playerDamage;
        enemy.health -= playerDamage;

#ifndef SUPPRESS_OUTPUT
        std::cout << player.classType << " attacks " << enemy.name << " for " << playerDamage << " damage." << std::endl;
#endif

        if (enemy.health <= 0) {
#ifndef SUPPRESS_OUTPUT
            std::cout << enemy.name << " has been defeated!" << std::endl;
#endif
            break;
        }

        // Enemy attacks back
        int enemyDamage = (enemy.strength + (rand() % 15 + 1)) - (player.agility / 10);
        enemyDamage = enemyDamage < 0 ? 0 : enemyDamage;
        player.health -= enemyDamage;

#ifndef SUPPRESS_OUTPUT
        std::cout << enemy.name << " attacks " << player.classType << " for " << enemyDamage << " damage." << std::endl;
#endif

        if (player.health <= 0) {
#ifndef SUPPRESS_OUTPUT
            std::cout << player.classType << " has been defeated! Game Over!" << std::endl;
#endif
            break;
        }
    }
}

void GameManager::gameLoop() {
    std::cout << "Welcome to the RPG Game! Choose your player class: Warrior, Rogue, Mage, Hunter." << std::endl;
    std::string classType;
    std::cin >> classType;

    Player player(classType);
    player.displayStats();

    // Randomize enemy stats for every gameLoop call
    std::vector<std::string> enemyTypes = { "Goblin", "Troll", "Dragon" };
    std::string randomEnemyType = enemyTypes[rand() % enemyTypes.size()];
    Enemy enemy(randomEnemyType);

    // Randomize enemy stats
    enemy.health = rand() % 501 + 100; // Random health between 100 and 600
    enemy.mana = rand() % 101;         // Random mana between 0 and 100
    enemy.strength = rand() % 201 + 50; // Random strength between 50 and 250
    enemy.agility = rand() % 151 + 50;  // Random agility between 50 and 200
    enemy.speed = rand() % 101 + 20;    // Random speed between 20 and 120

    std::cout << "An enemy appears!" << std::endl;
    std::cout << "Enemy details: " << std::endl;
    std::cout << "Name: " << enemy.name << ", Health: " << enemy.health << ", Strength: " << enemy.strength << ", Agility: " << enemy.agility << ", Speed: " << enemy.speed << std::endl;

    startFight(player, enemy);
}
