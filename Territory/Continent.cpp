//
// Created by Flatline on 1/3/2020.
//

#include "Continent.h"


Continent::Continent(){
    *continent_name_ = "unknown_continent_name";
    continent_id_ = 0;
    continent_bonus_army_value_ = 0;
}

Continent::Continent(string* continent_name, int continent_id, int continent_bonus_army_value){
    continent_name_ = continent_name;
    continent_id_ = continent_id;
    continent_bonus_army_value_ = continent_bonus_army_value;
}

Continent::Continent(const Continent &continent){
    continent_name_ = continent.continent_name_;
    continent_id_ = continent.continent_id_;
    continent_bonus_army_value_ = continent.continent_bonus_army_value_;
}

Continent::~Continent(){
    continent_name_ = nullptr;
    delete continent_name_;

    continent_countries_ = nullptr;
    delete continent_countries_;
}

string* Continent::GetContinentName(){
    return continent_name_;
}

int Continent::GetContinentID(){
    return continent_id_;
}

int Continent::GetContinentBonusArmyValue(){
    return continent_bonus_army_value_;
}

void Continent::AddCountryToContinent(Country* country){
    continent_countries_->push_back(country);
}

bool Continent::IsCountryInContinent(Country* country){
    for(int i = 0; i<continent_countries_->size(); i++){
        if(country==continent_countries_->at(i)){
            return true;
        }
    }
    return false;
}
void Continent::DisplayCountriesInContinent(){
    for(int i = 0; i<continent_countries_->size(); i++){
        continent_countries_->at(i)->DisplayCountry();
    }
}

void Continent::DisplayContinent(){

}

