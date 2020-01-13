//
// Created by Flatline on 1/13/2020.
//

#include "Territory.h"

Territory::Territory(){
    *territory_name_ = "TERRITORY NAME NOT SET";
    territory_id_ = 99999;
}

Territory::Territory(string* territory_name, int territory_id){
    territory_name_ = territory_name;
    territory_id_ = territory_id;
}

Territory::Territory(const Territory& territory){
    territory_name_ = territory.territory_name_;
    territory_id_ = territory.territory_id_;
}

Territory::~Territory(){
    territory_name_ = nullptr;
    delete territory_name_;
}

Territory& Territory::operator=(const Territory& territory){
    territory_name_ = territory.territory_name_;
    territory_id_ = territory.territory_id_;
    return *this;
}

bool Territory::operator==(const Territory& territory){
    return (territory_name_ == territory.territory_name_ && territory_id_ = territory.territory_id_);
}

virtual void GetTerritoryName();
virtual void GetTerritoryID();

virtual void SetTerritoryName();
virtual void SetTerritoryID();


virtual void DisplayInfo();