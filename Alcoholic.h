//
// Created by Richard on 15.12.2020.
//

#ifndef BOTTLEDRINKS_ALCOHOLIC_H
#define BOTTLEDRINKS_ALCOHOLIC_H

#include <string>
#include "BottleDrinks.h"

class Alcoholic : public BottleDrinks {
public:
    Alcoholic(std::string bottleDrinkName, double volume, double alcoholPercentage);

    double getAlcoholPercentage() const;
    double getAlcoholVolume() const;

    ~Alcoholic() override = default;
private:
    double _alcoholVolume;
    double _alcoholPercentage;

};


#endif //BOTTLEDRINKS_ALCOHOLIC_H
