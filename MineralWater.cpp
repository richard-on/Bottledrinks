//
// Created by Richard on 24.12.2020.
//

#include "MineralWater.h"

MineralWater::MineralWater(std::string bottleDrinkName, double volume, Carbonation carbonation, Type type)
        : AlcoholFree(bottleDrinkName, volume, carbonation) {
    _type = type;
}

std::string MineralWater::getType() const {
    switch (_type) {
        case Type::HIGH_MINERALISATION:
            return "High Mineralisation";
        case Type::LOW_MINERALISATION:
            return "Low Mineralisation";
    }
}
