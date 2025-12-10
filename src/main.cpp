#include <iostream>
#include <string>

#include "cristiansClock.h"

int main(int argc, char *argv[]) {

    if (argc == 1) {
        std::cout << "Algorithm not chosen\n";
        return 1;
    }

    std::string clockAlgorithm = argv[1];

    if (clockAlgorithm == "cristian") {
        cristiansClock newClock{};
        newClock.start();
    }
    else if (clockAlgorithm == "berkeley") {
        std::cout << "In progress\n";
    }

    return 0;
}