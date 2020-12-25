//
// Created by Richard on 25.12.2020.
//

#ifndef BOTTLEDRINKS_WINE_H
#define BOTTLEDRINKS_WINE_H


#include "Alcoholic.h"
enum class WineStyle{
    RED,
    ROSE,
    WHITE
};
class Wine : public Alcoholic {
public:
    Wine(std::string bottleDrinkName, double volume, double alcoholPercentage, WineStyle wineStyle);

    std::string getWineStyle() const;

    ~Wine() override = default;
private:
    WineStyle _wineStyle;

};


#endif //BOTTLEDRINKS_WINE_H
