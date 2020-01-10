//
// Created by BusinessB4Pleasure on 1/10/2020.
//
#include "Country.h"
#include <vector>

int main(){

    auto* canada = new Country((string*) "Canada", 1 , 10, 3);
    auto* usa = new Country((string*) "United States", 2, 10, 5);
    auto* mexico = new Country((string*) "Mexico", 3, 10, 2);

    auto* countries = new vector<Country*>;

    countries->push_back(canada);
    countries->push_back(usa);
    countries->push_back(mexico);

    for(auto country: *countries){
        country->DisplayCountry();
    }



    return 0;
}