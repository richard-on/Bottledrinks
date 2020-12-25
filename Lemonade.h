//
// Created by Richard on 25.12.2020.
//

#ifndef BOTTLEDRINKS_LEMONADE_H
#define BOTTLEDRINKS_LEMONADE_H

#include <string>
#include "AlcoholFree.h"

class Lemonade : public AlcoholFree {
public:
    Lemonade(std::string bottleDrinkName, double volume, Carbonation carbonation, double sugarVolume);

    void setSugarVolume(double sugarVolume);

    double getSugarVolume() const;

    ~Lemonade() override = default;
private:
    double _sugarVolume;
};


#endif //BOTTLEDRINKS_LEMONADE_H
