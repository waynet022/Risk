//
// Created by Flatline on 1/13/2020.
//

#ifndef RISK_TERRITORY_H
#define RISK_TERRITORY_H

#include <string>

using namespace std;

class Territory {
private:
    string* territory_name_;
    int territory_id_;
public:
    Territory();
    Territory(string* territory_name, int territory_id);
    Territory(const Territory& territory);
    ~Territory();

    Territory& operator=(const Territory& territory);
    bool operator==(const Territory& territory);

    virtual void GetTerritoryName();
    virtual void GetTerritoryID();

    virtual void SetTerritoryName();
    virtual void SetTerritoryID();


    virtual void DisplayInfo();

};


#endif //RISK_TERRITORY_H
