#include "movingAverage.h"
#include <vector>

MovingAverage::MovingAverage(unsigned int seasons, std::vector<unsigned int> goalsPerSeason) {
    // TODO Rename this movingAverageIndex variable, give it a better name
    for (unsigned int window = 0; window < goalsPerSeason.size(); window++) {

        unsigned int seasonAverage = 0;
        for (unsigned int season = 0; season <= movingAverageIndex; season++)
            seasonAverage = seasonAverage + goalsPerSeason.at(season) / seasons;

        averagesPerSeason.push_back(seasonAverage);
    }
}
