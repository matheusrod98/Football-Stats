#include "team.h"
#include "championshipParticipation.h"
#include <string>
#include <vector>

Team::Team(std::string _name, std::vector<ChampionshipParticipation> _championshipParticipations) {
    name = _name;
    championshipParticipations = _championshipParticipations;
}

std::string Team::getName() {
    return name;
}

void Team::setName(std::string _name) {
    name = _name;
}

std::vector<ChampionshipParticipation> Team::getChampionshipParticipations() {
    return championshipParticipations;
}

void Team::setChampionshipParticipations(std::vector<ChampionshipParticipation> _championshipParticipations) {
    championshipParticipations = _championshipParticipations;
}
