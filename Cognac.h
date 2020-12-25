//
// Created by Richard on 25.12.2020.
//

#ifndef BOTTLEDRINKS_COGNAN_H
#define BOTTLEDRINKS_COGNAN_H

#include "Alcoholic.h"

enum class Category{
    VS,
    VSOP,
    XO
};
class Cognac : public Alcoholic {
public:
    Cognac(std::string bottleDrinkName, double volume, double alcoholPercentage, Category category);

    std::string getCategory() const;

    ~Cognac() override = default;
private:
    Category _category;

};



#endif //BOTTLEDRINKS_COGNAN_H
