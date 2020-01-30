//
// Created by BusinessB4Pleasure on 1/6/2020.
//

#ifndef RISK_HAND_H
#define RISK_HAND_H
#include <iostream>
#include <vector>

#include "Card.h"
#include "Deck.h"

using namespace std;

class Hand {
private:
    Deck* game_deck_;
    vector<Card*>* hand_cards_;
public:
    Hand();
    Hand(Deck* game_deck);
    ~Hand();

    vector<Card*>* GetCardsInHand();

    void AddCardToHand(Card* card);

    int GetHandSize();

    int ExchangeCards(int card_1, int card_2, int card_3);
    bool ValidateQuantity();
    bool ValidateExchange(Card* card_1, Card* card_2, Card* card_3);
    bool ThreeOfAKind(Card* card_1, Card* card_2, Card* card_3);
    bool ThreeDifferent(Card* card_1, Card* card_2, Card* card_3);
    void RemoveCards(Card* card_1, Card* card_2, Card* card_3);
    void DisplayCardsInHand();


};


#endif //RISK_HAND_H
