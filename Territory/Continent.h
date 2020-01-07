//
// Created by Flatline on 1/3/2020.
//

#ifndef RISK_CONTINENT_H
#define RISK_CONTINENT_H

#include<iostream>
#include <string>
#include <vector>
#include "Country.h"
using namespace std;

class Continent {
private:
    string* continent_name_;
    int continent_id_;
    int continent_bonus_army_value_;
    vector<Country*>* continent_countries_;

public:
    Continent();
    Continent(string* continent_name, int continent_id, int continent_bonus_army_value);
    Continent(const Continent &continent);
    ~Continent();

    string* GetContinentName();
    int GetContinentID();
    int GetContinentBonusArmyValue();
    void AddCountryToContinent(Country* country);
    bool IsCountryInContinent(Country* country);
    void DisplayCountriesInContinent();

};


#endif //RISK_CONTINENT_H
