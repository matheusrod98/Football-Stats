#include "movingAverage.h"
#include <iostream>
#include <ostream>
#include <vector>

MovingAverage::MovingAverage(float seasons, std::vector<float> goalsPerSeason) {
    for (unsigned int window = 0; window < goalsPerSeason.size(); window++) {

        float seasonAverage = 0;
        for (unsigned int season = 0; season <= window; season++)
            seasonAverage = seasonAverage + goalsPerSeason.at(season) / seasons;

        averagesPerSeason.push_back(seasonAverage);
    }
}

std::vector<float> MovingAverage::getMovingAverage() {
    return averagesPerSeason;
}
