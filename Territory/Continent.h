//
// Created by Flatline on 1/3/2020.
//

#ifndef RISK_CONTINENT_H
#define RISK_CONTINENT_H

#include <string>
using namespace std;

class Continent {
private:
    string* continent_name_;
    int continent_id_;
    int continent_bonus_army_value_;

public:
    Continent();
    Continent(string* continent_name, int continent_id, int continent_bonus_army_value);
    Continent(const Continent &continent);
    ~Continent();

    string* GetContinentName();
    int GetContinentID();
    int GetContinentBonusArmyValue();
};


#endif //RISK_CONTINENT_H
