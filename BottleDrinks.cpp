//
// Created by Richard on 15.12.2020.
//

#include "BottleDrinks.h"

BottleDrinks::BottleDrinks(std::string bottleDrinkName, double volume) {
    if(volume < 0){
        throw std::exception("Volume cannot be less than 0");
    }
    _volume = volume;
    _bottleDrinkName = bottleDrinkName;

}

double BottleDrinks::getBottleDrinkVolume() const {
    return _volume;
}

const std::string& BottleDrinks::getBottleDrinkName() const {
    return _bottleDrinkName;
}

void BottleDrinks::setBottleDrinkName(const std::string &bottleDrinkName) {
    _bottleDrinkName = bottleDrinkName;
}


BottleDrinks::~BottleDrinks() = default;
