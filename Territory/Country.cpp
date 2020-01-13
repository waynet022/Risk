//
// Created by Flatline on 1/3/2020.
//

#include "Country.h"

Country::Country(){
    country_name_ = new string("unknown name");
    country_id_ = 0;
    occupying_army_ = 0;
    continent_id_ = 0;
    //occupying_player_ = new Player();
}

Country::Country(string* country_name, int country_id, int continent_id, int occupying_army){
    country_name_ = country_name;
    country_id_ = country_id;
    continent_id_ = continent_id;
    occupying_army_ = occupying_army;
   // occupying_player_ = new Player();
}


Country::Country(const Country &country){
    country_name_ = country.country_name_;
    country_id_ = country.country_id_;
    continent_id_ = country.continent_id_;
    occupying_army_ = country.occupying_army_;
   // occupying_player_ = country.occupying_player_;
}

Country::~Country(){
    country_name_ = nullptr;
    delete country_name_;

}

Country& Country::operator=(const Country& country){
    country_name_ = country.country_name_;
    country_id_ = country.country_id_;
    continent_id_ = country.continent_id_;
    occupying_army_ = country.occupying_army_;
    //occupying_player_ = country.occupying_player_;

    return *this;
}

bool Country::operator==(const Country& country){
    bool isEqual = true;
    isEqual =
            country_name_ == country.country_name_&&
            country_id_ == country.country_id_&&
            continent_id_ == country.continent_id_;
    return isEqual;
}

string* Country::GetCountryName() const{
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

//Player* Country::GetOccupyingPlayer(){
//    return occupying_player_;
//}

void Country::SetCountryName(string* country_name){
    country_name_ = country_name;
}

void Country::SetOccupyingArmy(int occupying_army){
    occupying_army_ = occupying_army;
}

void Country::SetContinentID(int continent_id){
    continent_id_ = continent_id;
}

//void Country::SetOccupyingPlayer(Player* occupying_player){
//    occupying_player_ = occupying_player;
//}

void Country::DisplayCountry(){
    cout
    <<"Country Name: "<<*GetCountryName()<<endl
    <<"Country ID: "<<country_id_<<endl
    <<"Armies occupying country: "<<occupying_army_<<endl
   // <<"Current player occupying country: "<< occupying_player_->GetPlayerName()
    <<endl;
}

