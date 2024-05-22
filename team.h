#ifndef _TEAM_
#define _TEAM_

#include "championshipParticipation.h"
#include <string>
#include <vector>

class Team {

    public:
        Team(std::string name, std::vector<ChampionshipParticipation> championshipParticipations);

        std::string getName();
        void setName(std::string name);

        std::vector<ChampionshipParticipation> getChampionshipParticipations();
        void setChampionshipParticipations(std::vector<ChampionshipParticipation> championshipParticipations);

    private:
        std::string name;
        std::vector<ChampionshipParticipation> championshipParticipations;
};

#endif /* _TEAM_ */
