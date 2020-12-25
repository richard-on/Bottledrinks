//
// Created by Richard on 15.12.2020.
//

#ifndef BOTTLEDRINKS_MILK_H
#define BOTTLEDRINKS_MILK_H

#include <string>
#include "AlcoholFree.h"

class Milk : public AlcoholFree {
public:
    Milk(std::string bottleDrinkName, double volume, double fatPercentage, Carbonation carbonation = Carbonation::STILL);

    double getFatVolume() const;
    double getFatPercentage() const;

    ~Milk() override = default;
private:
    double _volume;
    double _fatVolume;
    double _fatPercentage;
};


#endif //BOTTLEDRINKS_MILK_H
