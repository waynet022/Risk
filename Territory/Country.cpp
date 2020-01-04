//
// Created by Flatline on 1/3/2020.
//

#include "Country.h"

Country::Country(){
    *country_name_ = "unknown name";
    country_id_ = 0;
    occupying_army_ = 0;
    continent_id_ = 0;
}

Country::Country(string* country_name, int country_id, int continent_id, int occupying_army){
    country_name_ = country_name;
    country_id_ = country_id;
    continent_id_ = continent_id;
    occupying_army_ = occupying_army;
}

Country::Country(const Country &country){
    country_name_ = country.country_name_;
    country_id_ = country.country_id_;
    continent_id_ = country.continent_id_;
    occupying_army_ = country.occupying_army_;
}

Country::~Country(){
    country_name_ = nullptr;
    delete country_name_;

}

string* Country::GetCountryName(){
    return country_name_;
}

int Country::GetCountryID(){
    return country_id_;
}

int Country::GetOccupyingArmy(){
    return occupying_army_;
}

int Country::GetContinentID(){
    return continent_id_;
}

