#include "doctor_data.h"
#include <string>

heaven::Vessel::Vessel(std::string name,int generation, star_map::System current_system) : 
name(name), generation(generation), current_system(current_system) 
{}

heaven::Vessel::Vessel(std::string name, int generation) : name(name), generation(generation), current_system(star_map::System::Sol) {}

heaven::Vessel heaven::Vessel::replicate(const std::string& name){
    return Vessel(name , this->generation + 1, this->current_system);
}

void heaven::Vessel::make_buster(){
    busters++;
}

bool heaven::Vessel::shoot_buster(){
    if (busters <= 0){
        return false;
    } else {
        busters--;
        return true;
        }
}

std::string heaven::get_older_bob(Vessel ves1, Vessel ves2){
    return (ves1.generation < ves2.generation) ? ves1.name : ves2.name;
}

bool heaven::in_the_same_system(Vessel ves1, Vessel ves2){
    return ves1.current_system == ves2.current_system;
}