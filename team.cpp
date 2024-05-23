#include <string>

#include "team.h"

Team::Team(std::string _name, unsigned int goalsTaken, unsigned int goalsScored) {
    name = _name;
}

std::string Team::getName() {
    return name;
}

void Team::setName(std::string _name) {
    name = _name;
}

unsigned int Team::getGoalsScored() {
    return goalsScored;
}

void Team::setGoalsScored(unsigned int _goalsScored) {
    goalsScored = _goalsScored;
}

unsigned int Team::getGoalsTaken() {
    return goalsTaken;
}

void Team::setGoalsTaken(unsigned int _goalsTaken) {
    goalsTaken = _goalsTaken;
}
