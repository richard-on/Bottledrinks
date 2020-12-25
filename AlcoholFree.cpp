//
// Created by Richard on 15.12.2020.
//

#include "AlcoholFree.h"

AlcoholFree::AlcoholFree(std::string bottleDrinkName, double volume, Carbonation carbonation) : BottleDrinks(bottleDrinkName, volume) {
    _carbonation = carbonation;
}

void AlcoholFree::setCarbonation(Carbonation carbonation) {
    _carbonation = carbonation;
}

std::string AlcoholFree::getCarbonation() const {
    switch (_carbonation) {
        case Carbonation::CARBONATED:
            return "Carbonated";
        case Carbonation::STILL:
            return "Still";
    }
}

AlcoholFree::~AlcoholFree() = default;




