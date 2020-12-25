//
// Created by Richard on 24.12.2020.
//

#ifndef BOTTLEDRINKS_MINERALWATER_H
#define BOTTLEDRINKS_MINERALWATER_H

#include <string>
#include "AlcoholFree.h"

enum class Type{
    HIGH_MINERALISATION,
    LOW_MINERALISATION
};
class MineralWater : public AlcoholFree {
public:
    MineralWater(std::string bottleDrinkName, double volume, Carbonation carbonation, Type type);

    std::string getType() const;


    ~MineralWater() override = default;
private:
    Type _type;
};


#endif //BOTTLEDRINKS_MINERALWATER_H
