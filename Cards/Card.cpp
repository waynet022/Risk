//
// Created by BusinessB4Pleasure on 1/6/2020.
//
#include <iostream>
#include "Card.h"

#include <utility>
Card::Card(){
    type_ = "CARD TYPE NOT SET";
}

Card::Card(string type){
    type_ = std::move(type);
}

bool Card::operator==(Card card){
    return (card.type_ == type_);
}


string Card::GetType(){
    return type_;
}

void Card::SetType(string type){
    type_ = std::move(type);
}

void Card::DisplayCard(){
    cout
    <<"Card Type: "<<type_
    <<endl;
}