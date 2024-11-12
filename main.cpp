// use the main function to use the Enemy class

#include <iostream>
#include "enemy.h"

using namespace std;

int main() {
    for (int i = 0; i < 10; i++) {
        Enemy enemy(100, 10, "Name");
        cout << enemy.name << endl;
        cout << enemy.health << endl;
        cout << enemy.speed << endl;
    }
    return 0;
}