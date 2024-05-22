#include "team.h"
#include "championship.h"
#include <string>
#include <vector>

Team::Team(std::string _name, std::vector<Championship> _championships) {
    name = _name;
    championships = _championships;
}

std::string Team::getName() {
    return name;
}

void Team::setName(std::string _name) {
    name = _name;
}

std::vector<Championship> Team::getChampionships() {
    return championships;
}

void Team::setChampionships(std::vector<Championship> _championships) {
    championships = _championships;
}
