//
// Created by BusinessB4Pleasure on 1/6/2020.
//

#ifndef RISK_DECK_H
#define RISK_DECK_H

#include <vector>
#include <iostream>
#include "Card.h"
#include "../Observer/Observable.h"
#include "DeckObserver.h"
using namespace std;

class Deck: public Observable {
private:
    static int number_of_exchanges_;
    vector<Card*>* cards_;
    vector<DeckObserver*>* deck_observer_;
public:
    Deck();
    ~Deck();

    int GetNumberOfExchanges() const;

    int GetDeckSize() const;
    void Attach(DeckObserver* deck_observer);
    void Detach(DeckObserver* deck_observer);
    void Notify();

};


#endif //RISK_DECK_H
