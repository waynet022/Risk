//
// Created by BusinessB4Pleasure on 1/20/2020.
//

#ifndef RISK_OBSERVABLE_H
#define RISK_OBSERVABLE_H

#include <vector>
#include <string>
#include "Observer.h"

template<typename>class observer;
template<class T>

class Observable{
private:
    vector<Observer<T>*> observers_;
public:
//    void Attach(Observer<T>& observer);
//    void Detach(Observer<T>& observer);
//    void Notify(vector<Observer<T>*> observers);

    virtual void Attach() = 0;
    virtual void Detach() = 0;
    virtual void Notify() = 0;
};

#endif //RISK_OBSERVABLE_H
