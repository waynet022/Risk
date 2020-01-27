//
// Created by BusinessB4Pleasure on 1/6/2020.
//
#include <iostream>
#include "Card.h"

Card::Card(){
    type_ = none;
}

Card::Card(type card_type){
    type_ = card_type;
}

bool Card::operator==(Card card){
    return (card.type_ == type_);
}

type Card::GetType(){
    return type_;
}

void Card::SetType(type card_type){
    type_ = card_type;
}

void Card::DisplayCard(){
    cout
    <<"Card Type: "<<type_
    <<endl;
}