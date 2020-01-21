//
// Created by BusinessB4Pleasure on 1/20/2020.
//

#ifndef RISK_DECKOBSERVER_H
#define RISK_DECKOBSERVER_H

#include "../Observer/Observer.h"
#include "Deck.h"

class DeckObserver: public Observer<Deck> {
private:
    vector<Observer<Deck>*> deck_observer_;
public:
    void update();
};


#endif //RISK_DECKOBSERVER_H
