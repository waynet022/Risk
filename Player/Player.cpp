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
    player_name_ = player.player_name_;
    player_id_ = player.player_id_;


    return *this;
}
bool Player::operator==(const Player& player){
    return (this->player_name_ == player.player_name_ && this->player_id_ == player.player_id_);
}

string* Player::GetPlayerName(){
    return player_name_;
}
int Player::GetPlayerID(){
    return player_id_;
}
Hand* Player::GetPlayerHand(){
    return player_hand_;
}


vector<Country*>* Player::GetPlayerCountries(){
    return occupying_countries_;
}

void Player::SetPlayerName(string* player_name){
    this->player_name_ = player_name;
}

void Player::SetPlayerID(int player_id){
    this->player_id_ = player_id;
}

void Player::AddCountryToPlayer(Country* country){
    this->occupying_countries_->push_back(country);
}

void Player::AddCardToPlayerHand(Card* card){
   //todo
}

void Player::DisplayPlayer(){
    cout
    <<"Player Name: "<<GetPlayerName()
    <<"Player ID: "<<GetPlayerID()
    <<endl;
}