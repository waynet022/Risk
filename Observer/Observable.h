//
// Created by BusinessB4Pleasure on 1/20/2020.
//

#ifndef RISK_OBSERVABLE_H
#define RISK_OBSERVABLE_H

#include <vector>
#include <string>
#include "Observer.h"

template<typename>class observer;
template<typename>

class Observable{
private:
    vector<Observer<T>*> observers;
public:
    void Attach(Observer<T>& observer) = 0;
    void Detach(Observer<T>& observer)  = 0;
    void Notify(){
        for(auto observer: )
    }
};

#endif //RISK_OBSERVABLE_H
