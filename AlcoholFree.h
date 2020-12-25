//
// Created by Richard on 15.12.2020.
//

#ifndef BOTTLEDRINKS_ALCOHOLFREE_H
#define BOTTLEDRINKS_ALCOHOLFREE_H

#include <string>
#include "BottleDrinks.h"
enum class Carbonation{
    STILL,
    CARBONATED
};
class AlcoholFree : public BottleDrinks {
public:
    AlcoholFree(std::string bottleDrinkName, double volume, Carbonation carbonation);

    void setCarbonation(Carbonation carbonation);

    std::string getCarbonation() const;

    ~AlcoholFree() override = 0;
private:
    double _sugarVolume;
    Carbonation _carbonation;
};


#endif //BOTTLEDRINKS_ALCOHOLFREE_H
