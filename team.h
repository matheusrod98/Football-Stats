#ifndef _TEAM_
#define _TEAM_

#include "championship.h"
#include <string>
#include <vector>

class Team {

    public:
        Team(std::string name, std::vector<Championship> championships);

        std::string getName();
        void setName(std::string name);

        std::vector<Championship> getChampionships();
        void setChampionships(std::vector<Championship> championships);

    private:
        std::string name;
        std::vector<Championship> championships;
};

#endif /* _TEAM_ */
