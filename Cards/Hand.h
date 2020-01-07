//
// Created by BusinessB4Pleasure on 1/6/2020.
//

#ifndef RISK_HAND_H
#define RISK_HAND_H

#include <vector>

#include "Card.h"

using namespace std;

class Hand {
private:
    vector<Card*>* hand_cards_;
public:
    Hand();
    Hand(vector<Card*>* hand_cards);
    ~Hand();

    Hand& operator=(const Hand& hand);
    bool operator==(const Hand& hand);

    vector<Card*>* GetCardsInHand();
    void AddCardToHand(Card* card);
    void deleteCardFromHand(Card* card);

};


#endif //RISK_HAND_H
