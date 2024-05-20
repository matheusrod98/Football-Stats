#ifndef _MOVING_AVERAGE_
#define _MOVING_AVERAGE_

#include <vector>
class MovingAverage {

    public:
        MovingAverage(float seasons, std::vector<float> goalsPerSeason);
        std::vector<float> getMovingAverage();

    private:
        std::vector<float> averagesPerSeason;
};

#endif /* _MOVING_AVERAGE_ */
