//
// Created by BusinessB4Pleasure on 1/6/2020.
//

#ifndef RISK_CARD_H
#define RISK_CARD_H

#include <string>

enum type {none, soldier, cavalry, artillery};

using namespace std;

class Card {
private:
    type type_;
public:
    Card();
    Card(type card_type);
    ~Card() = default;

    bool operator==(Card card);

    type GetType();
    void SetType(type card_type);
    void DisplayCard();
};


#endif //RISK_CARD_H
