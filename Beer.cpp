//
// Created by Richard on 25.12.2020.
//

#include "Beer.h"

Beer::Beer(std::string bottleDrinkName, double volume, double alcoholPercentage, Material material)
    : Alcoholic(bottleDrinkName, volume, alcoholPercentage) {
    _material = material;
}

std::string Beer::getMaterial() const {
    switch (_material) {
        case Material::WHEAT:
            return "Wheat";
        case Material::GINGER:
            return "Ginger";
        case Material::BARLEY:
            return "Barley";
    }
}
