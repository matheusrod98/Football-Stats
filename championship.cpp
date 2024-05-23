#include "championship.h"
#include "championshipTypes.h"
#include "team.h"
#include <vector>

Championship::Championship(ChampionshipType _type, unsigned int _season, std::vector<Team> _teams) {
    type = _type;
    season = _season;
    teams = _teams;
}

std::vector<Team> Championship::getTeams() {
    return teams;
}

void Championship::setTeams(std::vector<Team> _teams) {
    teams = _teams;
}

unsigned int Championship::getSeason() {
    return season;
}

void Championship::setSeason(unsigned int _season) {
    season = _season;
}
