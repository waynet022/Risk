//
// Created by Flatline on 1/3/2020.
//

#ifndef RISK_COUNTRY_H
#define RISK_COUNTRY_H

#include <string>

using namespace std;

class Country {
private:
    string* country_name_;
    int country_id_;
    int occupying_army_;
    int continent_id_;

public:
    Country();
    Country(string* country_name, int country_id, int continent_id, int occupying_army);
    Country(const Country &country);

    ~Country();

    string* GetCountryName();
    int GetCountryID();
    int GetOccupyingArmy();
    int GetContinentID();

};


#endif //RISK_COUNTRY_H
