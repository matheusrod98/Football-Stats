#include "championshipParticipation.h"
#include <string>

ChampionshipParticipation::ChampionshipParticipation(std::string _name, unsigned int _season, unsigned int _goalsScored, unsigned int _goalsTaken) {
    name = _name;
    season = _season;
    goalsScored = _goalsScored;
    goalsTaken = _goalsTaken;
}

std::string ChampionshipParticipation::getChampionshipParticipationName() {
    return name;
}

void ChampionshipParticipation::setChampionshipParticipationName(std::string _name) {
    name = _name;
}

unsigned int ChampionshipParticipation::getSeason() {
    return season;
}

void ChampionshipParticipation::setSeason(unsigned int _season) {
    season = _season;
}

unsigned int ChampionshipParticipation::getGoalsScored() {
    return goalsScored;
}

void ChampionshipParticipation::setGoalsScored(unsigned int _goalsTaken) {
    goalsTaken = _goalsTaken;
}

unsigned int ChampionshipParticipation::getGoalsTaken() {
    return goalsTaken;
}

void ChampionshipParticipation::setGoalsTaken(unsigned int _goalsTaken) {
    goalsTaken = _goalsTaken;
}
