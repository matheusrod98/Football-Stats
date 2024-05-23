#ifndef _TEAM_
#define _TEAM_

#include <string>
#include <vector>

class Team {

    public:
        Team(std::string name, unsigned int goalsTaken, unsigned int goalsScored);

        std::string getName();
        void setName(std::string name);

        unsigned int getGoalsScored();
        void setGoalsScored(unsigned int goalsScored);

        unsigned int getGoalsTaken();
        void setGoalsTaken(unsigned int goalsTaken);

    private:
        std::string name;
        unsigned int goalsScored;
        unsigned int goalsTaken;
};

#endif /* _TEAM_ */
