//
// Created by BusinessB4Pleasure on 1/6/2020.
//

#ifndef RISK_CARD_H
#define RISK_CARD_H

#include <string>

using namespace std;

class Card {
private:
    string type_;
public:
    Card();
    Card(string type);
    ~Card() = default;

    bool operator==(Card card);

    string GetType();

    void SetType(string type);

    void DisplayCard();

};


#endif //RISK_CARD_H
