#include <iostream>
#include "../includes/Mission.hpp"

int main(void) {
    Mission mission1("Reading Book", "2023,11,13");

    std::cout << mission1.getGoal() << std::endl;
    std::cout << mission1.getDeadLine() << std::endl;
    std::cout << mission1.isDone() << std::endl;
    mission1.doneThisGoal();
    std::cout << mission1.isDone() << std::endl;
    return (0);
}