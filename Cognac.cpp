//
// Created by Richard on 25.12.2020.
//

#include "Cognac.h"

Cognac::Cognac(std::string bottleDrinkName, double volume, double alcoholPercentage, Category category)
        : Alcoholic(bottleDrinkName, volume, alcoholPercentage) {
    _category = category;
}

std::string Cognac::getCategory() const {
    switch (_category) {
        case Category::XO:
            return "XO";
        case Category::VS:
            return "VS";
        case Category::VSOP:
            return "VSOP";
    }
}
