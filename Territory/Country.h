//
// Created by Flatline on 1/3/2020.
//

#ifndef RISK_COUNTRY_H
#define RISK_COUNTRY_H

#include <iostream>
#include <string>
//#include "../Player/Player.h"

using namespace std;

class Country {
private:
    string* country_name_;
    int country_id_;
    int occupying_army_;
    int continent_id_;
    //Player* occupying_player_;

public:
    Country();
    Country(string* country_name, int country_id, int continent_id, int occupying_army);
    Country(const Country &country);
    ~Country();

    Country& operator=(const Country& country);
    bool operator==(const Country& country);

    string* GetCountryName();
    int GetCountryID();
    int GetOccupyingArmy();
    int GetContinentID();
    //Player* GetOccupyingPlayer();

    void SetCountryName(string* country_name);
    void SetOccupyingArmy(int occupying_army);
    void SetContinentID(int continent_id);
    //void SetOccupyingPlayer(Player* occupying_player);

    void DisplayCountry();

};


#endif //RISK_COUNTRY_H
