//
// Created by BusinessB4Pleasure on 1/6/2020.
//

#ifndef RISK_PLAYER_H
#define RISK_PLAYER_H

#include <iostream>
#include <vector>
#include <string>
#include "../Cards/Hand.h"
#include "../Territory/Country.h"

using namespace std;

class Player {
private:
    string* player_name_;
    int player_id_;
    Hand* player_hand_;
    vector<Country*>* occupying_countries_;

public:
    Player();
    Player(string* player_name, int player_id);
    Player(const Player& player);
    ~Player();

    Player& operator=(const Player& player);
    bool operator==(const Player& player);

    string* GetPlayerName();
    int GetPlayerID();
    Hand* GetPlayerHand();
    vector<Country*>* GetPlayerCountries();

    void SetPlayerName(string* player_name);
    void SetPlayerID(int player_id);

    void AddCountryToPlayer(Country* country);
    void AddCardToPlayerHand(Card* card);

    virtual void DisplayPlayer();

};


#endif //RISK_PLAYER_H
