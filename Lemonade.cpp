//
// Created by Richard on 25.12.2020.
//

#include "Lemonade.h"

Lemonade::Lemonade(std::string bottleDrinkName, double volume, Carbonation carbonation, double sugarVolume) : AlcoholFree(bottleDrinkName, volume, carbonation) {
    if(sugarVolume < 0 || sugarVolume >= volume){
        throw std::exception("Sugar Volume cannot be less than 0 or more than drink volume.");
    }
    _sugarVolume = sugarVolume;
}

double Lemonade::getSugarVolume() const {
    return _sugarVolume;
}

void Lemonade::setSugarVolume(double sugarVolume) {
    _sugarVolume = sugarVolume;
}


