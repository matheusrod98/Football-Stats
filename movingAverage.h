#ifndef _MOVING_AVERAGE_
#define _MOVING_AVERAGE_

#include <vector>
class MovingAverage {

    public:
        MovingAverage(unsigned int seasons, std::vector<unsigned int> goalsPerSeason);

    private:
        std::vector<unsigned int> averagesPerSeason;
};

#endif /* _MOVING_AVERAGE_ */
