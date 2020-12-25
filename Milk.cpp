//
// Created by Richard on 15.12.2020.
//

#include "Milk.h"

Milk::Milk(std::string bottleDrinkName, double volume, double fatPercentage, Carbonation carbonation)
        : AlcoholFree(bottleDrinkName, volume, carbonation) {
    if(fatPercentage < 0 || fatPercentage >= 100){
        throw std::exception("Fat percentage cannot be less than 0 or greater than 100");
    }
    if(carbonation == Carbonation::CARBONATED){
        throw std::exception("Seriously? Carbonated milk?!");
    }
    _fatPercentage = fatPercentage;
    _fatVolume = volume * _fatPercentage * 0.01;
}

double Milk::getFatVolume() const {
    return _fatVolume;
}

double Milk::getFatPercentage() const {
    return _fatPercentage;
}

