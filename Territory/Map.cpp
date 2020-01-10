//
// Created by Flatline on 1/3/2020.
//

#include "Map.h"
using namespace std;

Map::Map(){
    *map_name_ = "MAP NAME NOT SET";
    countries_ = new vector<Country*>;
    continent_ = new vector<Continent*>;
}

Map::Map(string* map_name, vector<Country*>* countries, vector<Continent*>* continent){
    map_name_ = map_name;
    countries_ = countries;
    continent_ = continent;
}

Map::Map(const Map& map){
    map_name_ = map.map_name_;
    countries_ = map.countries_;
    continent_ = map.continent_;
}

Map::~Map(){
    map_name_ = nullptr;
    countries_ = nullptr;
    continent_ = nullptr;

    delete map_name_;
    delete countries_;
    delete continent_;
}

vector<Country*>* Map::GetMapCountries(){
    return countries_;
}

vector<Continent*>* Map::GetMapContinent(){
    return continent_;
}


void Map::AddCountryToMap(Country* country){
    countries_->push_back(country);
}

void Map::AddContinentToMap(Continent* continent){
    continent_->push_back(continent);
}

void Map::DisplayAllCountries(){
    for(auto& country : *countries_ )
        country->DisplayCountry();
}

void Map::DisplayAllContinents(){
    for(auto& continent: *continent_)
        continent->DisplayContinent();
}