//
// Created by BusinessB4Pleasure on 1/6/2020.
//

#include "Player.h"

Player::Player(){
    *player_name_ = "NAME NOT SET";
    player_id_ = 0;
}

Player::Player(string* player_name, int player_id){
    player_name_ = player_name;
    player_id_ = player_id;
}

Player::Player(const Player& player){
    *player_name_ = *player.player_name_;
    player_id_ = player.player_id_;
}

Player::~Player(){
    player_name_ = nullptr;
    delete player_name_;
}

Player& Player::operator=(const Player& player){

}
bool operator==(const Player& player);

string* GetPlayerName();
int GetPlayerID();

void DisplayPlayer();