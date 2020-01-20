//
// Created by BusinessB4Pleasure on 1/6/2020.
//

#ifndef RISK_DECK_H
#define RISK_DECK_H

#include <vector>
#include "Card.h"
#include "../Observer/Observable.h"

class Deck: public Observable<Deck> {
private:
    static int number_of_exchanges_;
    vector<Card*>* cards_;
public:
    Deck();
    ~Deck();

    void
    int GetDeckSize();


};


#endif //RISK_DECK_H
