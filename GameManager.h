#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H

#include <iostream>
#include "enemy.h"

class GameManager {
    public:
        static constexpr int ITERATIONS = 10;  // Number of iterations in the game loop
        static constexpr int ENEMY_COUNT = 100; // Constant for enemy health or count

        GameManager();
};

#endif
