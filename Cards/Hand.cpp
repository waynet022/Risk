//
// Created by BusinessB4Pleasure on 1/6/2020.
//

#include "Hand.h"

Hand::Hand(){
    hand_cards_ = new vector<Card*>;
}

Hand::~Hand(){
    hand_cards_ = nullptr;
    delete hand_cards_;
}


vector<Card*>* Hand::GetCardsInHand(){
    return hand_cards_;
}

void Hand::AddCardToHand(Card* card){
    hand_cards_->push_back(card);
}
void Hand::RemoveCardFromHand(Card* card){
    if (hand_cards_->empty()){
        cout<<"Hand is empty"<<endl;
        return;
    }

   
}

void DisplayCardsInHand();