#include "GameManager.h"
#include "simulation_manager.h"
#include <iostream>

using namespace std;

int main() {
    SimulationManager simulationManager;
    const int SIMULATION_COUNT = 1000000; // Number of battles to simulate
    simulationManager.runSimulation(SIMULATION_COUNT);

    return 0;
}
