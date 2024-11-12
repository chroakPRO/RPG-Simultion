// Create a class called Enemy with the following attributes:
// int health, int speed, string name, and a constructor that takes
// these attributes as parameters.

#include <string>
using namespace std;

class Enemy {
    public:
        int health;
        int speed;
        string name;
        
        Enemy(int, int, string);
};