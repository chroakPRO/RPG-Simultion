#include "GameManager.h"
#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

class SimulationManager {
public:
    void runSimulation(int simulationCount) {
        // "Rogue", "Mage", "Hunter"
        vector<string> playerTypes = { "Warrior", "Rogue", "Mage", "Hunter" };
        vector<string> enemyTypes = { "Goblin", "Troll", "Dragon" };

        // Create a results table to store wins and losses for each player against each enemy
        vector<vector<int>> results(playerTypes.size(), vector<int>(enemyTypes.size(), 0));

        for (size_t p = 0; p < playerTypes.size(); p++) {
            for (size_t e = 0; e < enemyTypes.size(); e++) {
                int playerWins = 0;
                int enemyWins = 0;

                for (int i = 0; i < simulationCount; i++) {
                    Player player(playerTypes[p]);
                    Enemy enemy(enemyTypes[e]);

                    GameManager gameManager;

                    // Start a fight between player and enemy without detailed output
                    gameManager.startFight(player, enemy);

                    // Check the outcome
                    if (player.health > 0) {
                        playerWins++;
                    }
                    else {
                        enemyWins++;
                    }
                }

                // Store the results for this player vs enemy combination
                results[p][e] = playerWins;
            }
        }

        // Output simulation results as a table
        cout << "\nSimulation Results (Player vs Enemy):\n";
        cout << left << setw(12) << "Player/Enemy";
        for (const auto& enemyType : enemyTypes) {
            cout << setw(10) << enemyType;
        }
        cout << endl;

        for (size_t p = 0; p < playerTypes.size(); p++) {
            cout << left << setw(12) << playerTypes[p];
            for (size_t e = 0; e < enemyTypes.size(); e++) {
                cout << setw(10) << results[p][e];
            }
            cout << endl;
        }
    }
};
