#ifndef _CHAMPIONSHIP_
#define _CHAMPIONSHIP_

#include <string>

class ChampionshipParticipation {

    public:
        ChampionshipParticipation(std::string name, unsigned int season, unsigned int goalsScored, unsigned int goalsTaken);

        std::string getChampionshipParticipationName();
        void setChampionshipParticipationName(std::string championshipParticipationName);

        unsigned int getSeason();
        void setSeason(unsigned int seasonYear);

        unsigned int getGoalsScored();
        void setGoalsScored(unsigned int goalsScored);

        unsigned int getGoalsTaken();
        void setGoalsTaken(unsigned int goalsTaken);

    private:
        std::string name;
        unsigned int season;
        unsigned int goalsScored;
        unsigned int goalsTaken;
};

#endif /* _CHAMPIONSHIP_ */
