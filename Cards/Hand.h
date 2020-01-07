//
// Created by BusinessB4Pleasure on 1/6/2020.
//

#ifndef RISK_HAND_H
#define RISK_HAND_H
#include <iostream>
#include <vector>

#include "Card.h"

using namespace std;

class Hand {
private:
    vector<Card*>* hand_cards_;
public:
    Hand();
    ~Hand();

    vector<Card*>* GetCardsInHand();

    void AddCardToHand(Card* card);
    void RemoveCardFromHand(Card* card);

    void DisplayCardsInHand();

};


#endif //RISK_HAND_H
