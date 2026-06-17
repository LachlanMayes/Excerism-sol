#pragma once
#include <string>
namespace star_map{
enum System {
BetaHydri,
EpsilonEridani,
AlphaCentauri,
Omicron2Eridani,
Sol,
DeltaEridani
};
}


namespace heaven{
class Vessel{
public:
Vessel(std::string name,int generation, star_map::System current_system);
Vessel(std::string name ,int generation);
Vessel replicate(const std::string& name);
void make_buster();
bool shoot_buster();

std::string name;
int  busters;
int generation;
star_map::System current_system;
};
std::string get_older_bob(Vessel ves1, Vessel ves2);
bool in_the_same_system(Vessel ves1, Vessel ves2);
}

