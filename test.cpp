#include <cassert>
#include <iostream>
#include <vector>

#include "movingAverage.h"

void test() {
    const float seasons = 5.0;
    const std::vector<float> goalsPerSeasons({ 2.0, 3.0, 4.0, 5.0, 6.0 });

    const std::vector<float> expectedResult({ 0.4, 1.0, 1.8, 2.8, 4.0 });
    MovingAverage testMovingAverage(seasons, goalsPerSeasons);
    assert(expectedResult == testMovingAverage.getMovingAverage());
    std::cout << "Passed Moving Average testing case!" << std::endl;
}
