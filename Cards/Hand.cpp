//
// Created by BusinessB4Pleasure on 1/6/2020.
//
#include <algorithm>
#include "Hand.h"

Hand::Hand(){
    hand_cards_ = new vector<Card*>;
    game_deck_ = nullptr;
}

Hand::Hand(Deck* game_deck){
    hand_cards_ = new vector<Card*>;
    game_deck_ = game_deck;
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

int Hand::GetHandSize(){
    return hand_cards_->size();
}

int Hand::ExchangeCards(int card_1, int card_2, int card_3){
    if(ValidateQuantity()){
        cout<<"Amount of Cards to exchange need to be 3"<<endl;
        return 0;
    }
    else if(ValidateExchange(hand_cards_->at(card_1), hand_cards_->at(card_2), hand_cards_->at(card_3))){
        this->RemoveCard(hand_cards_->at(card_1));
        this->RemoveCard(hand_cards_->at(card_2));
        this->RemoveCard(hand_cards_->at(card_3));
        return ( 5 + game_deck_->GetNumberOfExchanges());
    }
    return 0;
}
bool Hand::ValidateQuantity(){
     return (this->GetHandSize() < 3);
}
bool Hand::ValidateExchange(Card* card_1, Card* card_2, Card* card_3){
    return (ThreeDifferent(card_1, card_2, card_3) || ThreeOfAKind(card_1, card_2, card_3));
}

bool Hand::ThreeOfAKind(Card* card_1, Card* card_2, Card* card_3){
    return (card_1 == card_2 && card_1 == card_3 && card_2 == card_3);
}

bool Hand::ThreeDifferent(Card* card_1, Card* card_2, Card* card_3){
    return (card_1 != card_2 && card_1 != card_3 && card_2 != card_3);
}

void Hand::RemoveCard(Card* card){
    auto hand_card = find(hand_cards_->begin(), hand_cards_->end(), card);
    if(hand_card != hand_cards_->end()){
        hand_cards_->erase(hand_card);
    }
}

void Hand::DisplayCardsInHand(){
    for(int i= 0; i< hand_cards_->size(); i++){
        hand_cards_->at(i)->DisplayCard();
    }
}