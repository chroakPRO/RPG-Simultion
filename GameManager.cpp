#include "GameManager.h"

using namespace std;

GameManager::GameManager() {
    for (int i = 0; i < ITERATIONS; i++) {
        Enemy enemy(ENEMY_COUNT, 10, "Name");
        cout << enemy.name << endl;
        cout << enemy.health << endl;
        cout << enemy.speed << endl;
    }
}
