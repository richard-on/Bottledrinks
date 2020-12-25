//
// Created by Richard on 25.12.2020.
//

#ifndef BOTTLEDRINKS_BEER_H
#define BOTTLEDRINKS_BEER_H


#include "Alcoholic.h"
enum class Material{
    GINGER,
    WHEAT,
    BARLEY
};
class Beer : public Alcoholic {
public:
    Beer(std::string bottleDrinkName, double volume, double alcoholPercentage, Material material);

    std::string getMaterial() const;

    ~Beer() override = default;
private:
    Material _material;

};


#endif //BOTTLEDRINKS_BEER_H
