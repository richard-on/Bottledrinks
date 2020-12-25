//
// Created by Richard on 15.12.2020.
//

#ifndef BOTTLEDRINKS_BOTTLEDRINKS_H
#define BOTTLEDRINKS_BOTTLEDRINKS_H

#include <string>

class BottleDrinks {
public:
    BottleDrinks(std::string bottleDrinkName, double volume);

    void setBottleDrinkName(const std::string &bottleDrinkName);

    double getBottleDrinkVolume() const;
    const std::string& getBottleDrinkName() const;


    virtual ~BottleDrinks() = 0;
private:
    std::string _bottleDrinkName;
    double _volume;
};


#endif //BOTTLEDRINKS_BOTTLEDRINKS_H
