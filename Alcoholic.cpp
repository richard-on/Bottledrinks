//
// Created by Richard on 15.12.2020.
//

#include "Alcoholic.h"

Alcoholic::Alcoholic(std::string bottleDrinkName, double volume, double alcoholPercentage) : BottleDrinks(bottleDrinkName, volume) {
    if(alcoholPercentage < 0 || alcoholPercentage > 100){
        throw std::exception("Alcohol Percentage cannot be less than 0 or greater than 100.");
    }
    if(alcoholPercentage == 0){
        throw std::exception("This drink is alcohol free.");
    }
    _alcoholPercentage = alcoholPercentage;
    _alcoholVolume = 0.01 * _alcoholPercentage * volume;
}

double Alcoholic::getAlcoholVolume() const {
    return _alcoholVolume;
}

double Alcoholic::getAlcoholPercentage() const {
    return _alcoholPercentage;
}




