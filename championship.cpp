#include "championship.h"
#include <string>

Championship::Championship(std::string _name, unsigned int _season, unsigned int _goalsScored, unsigned int _goalsTaken) {
    name = _name;
    season = _season;
    goalsScored = _goalsScored;
    goalsTaken = _goalsTaken;
}

std::string Championship::getChampionshipName() {
    return name;
}

void Championship::setChampionshipName(std::string _name) {
    name = _name;
}

unsigned int Championship::getSeason() {
    return season;
}

void Championship::setSeason(unsigned int _season) {
    season = _season;
}

unsigned int Championship::getGoalsScored() {
    return goalsScored;
}

void Championship::setGoalsScored(unsigned int _goalsTaken) {
    goalsTaken = _goalsTaken;
}

unsigned int Championship::getGoalsTaken() {
    return goalsTaken;
}

void Championship::setGoalsTaken(unsigned int _goalsTaken) {
    goalsTaken = _goalsTaken;
}
