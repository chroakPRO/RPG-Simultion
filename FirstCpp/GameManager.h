#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H

#include "player.h"
#include "enemy.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

class GameManager {
public:
    GameManager();
    void startFight(Player& player, Enemy& enemy);
    void gameLoop();
};

#endif
