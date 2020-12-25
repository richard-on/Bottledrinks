//
// Created by Richard on 25.12.2020.
//

#include "Wine.h"

Wine::Wine(std::string bottleDrinkName, double volume, double alcoholPercentage, WineStyle wineStyle)
        : Alcoholic(bottleDrinkName, volume, alcoholPercentage) {
    _wineStyle = wineStyle;
}

std::string Wine::getWineStyle() const {
    switch (_wineStyle) {
        case WineStyle::WHITE:
            return "White";
        case WineStyle::RED:
            return "Red";
        case WineStyle::ROSE:
            return "Rose";
    }
}
