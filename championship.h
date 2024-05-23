#ifndef _CHAMPIONSHIP_
#define _CHAMPIONSHIP_

#include <string>
#include <vector>

#include "team.h"
#include "championshipTypes.h"

class Championship {

    public:
        Championship(ChampionshipType type, unsigned int season, std::vector<Team> teams);

        unsigned int getSeason();
        void setSeason(unsigned int);

        std::vector<Team> getTeams();
        void setTeams(std::vector<Team> teams);

        ChampionshipType getChampionshipType();
        void setChampionshipType(ChampionshipType type);

    private:
        ChampionshipType type;
        unsigned int season;
        std::vector<Team> teams;
};

#endif /* _CHAMPIONSHIP_ */
