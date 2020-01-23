//
// Created by BusinessB4Pleasure on 1/6/2020.
//

#include "Deck.h"

Deck::Deck(){
    number_of_exchanges_ = 0;
    cards_ = new vector<Card*> ;
    deck_observer_ = new vector<DeckObserver*>;
}

Deck::~Deck(){
    cards_ = nullptr;
    delete cards_;
}

int Deck::GetNumberOfExchanges() const{
    return number_of_exchanges_;
}

int Deck::GetDeckSize() const {
    return cards_->size();
}

void Deck::Attach(DeckObserver* deck_observer){
    deck_observer_->push_back(deck_observer);
}

void Deck::Detach(DeckObserver* deck_observer){
    deck_observer_->erase(deck_observer->begin(), );
}

void Deck::Notify(){

}

