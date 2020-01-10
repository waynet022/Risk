//
// Created by Flatline on 1/3/2020.
//

#ifndef RISK_MAP_H
#define RISK_MAP_H

#include <vector>
#include "Country.h"
#include "Continent.h""

class Map {
private:
    string* map_name_;
    vector<Country*>* countries_;
    vector<Continent*>* continent_;

public:
    Map();
    Map(string* map_name, vector<Country*>* countries, vector<Continent*>* continent);
    Map(const Map& map);
    ~Map();

    vector<Country*>* GetMapCountries();
    vector<Continent*>* GetMapContinent();

    void AddCountryToMap(Country* country);
    void AddContinentToMap(Continent* continent);

    void DisplayAllCountries();
    void DisplayAllContinents();

};


#endif //RISK_MAP_H
