#include <iostream>
#include "BottleDrinks.h"
#include "Milk.h"
#include "Beer.h"
#include "Wine.h"
#include "Cognac.h"
#include "MineralWater.h"
#include "Lemonade.h"

int main() {

    try {
        Beer beer = Beer("Ohota Krepkoe", 500, 8, Material::WHEAT);
        std::cout << beer.getBottleDrinkName() << std::endl;
        std::cout << beer.getBottleDrinkVolume() << std::endl;
        std::cout << beer.getAlcoholPercentage() << std::endl;
        std::cout << beer.getAlcoholVolume() << std::endl;
        std::cout << beer.getMaterial() << std::endl;
        std::cout << std::endl;

        Wine wine = Wine("Staraya Kelya", 750, 13, WineStyle::RED);
        std::cout << wine.getBottleDrinkName() << std::endl;
        std::cout << wine.getBottleDrinkVolume() << std::endl;
        std::cout << wine.getAlcoholPercentage() << std::endl;
        std::cout << wine.getAlcoholVolume() << std::endl;
        std::cout << wine.getWineStyle() << std::endl;
        std::cout << std::endl;

        Cognac cognac = Cognac("Hennessy XO", 300, 40, Category::XO);
        std::cout << cognac.getBottleDrinkName() << std::endl;
        std::cout << cognac.getBottleDrinkVolume() << std::endl;
        std::cout << cognac.getAlcoholPercentage() << std::endl;
        std::cout << cognac.getAlcoholVolume() << std::endl;
        std::cout << cognac.getCategory() << std::endl;
        std::cout << std::endl;

        Milk milk = Milk("Regular milk from the supermarket", 500, 2.5);
        std::cout << milk.getBottleDrinkName() << std::endl;
        std::cout << milk.getBottleDrinkVolume() << std::endl;
        std::cout << milk.getCarbonation() << std::endl;
        std::cout << milk.getFatPercentage() << std::endl;
        std::cout << milk.getFatVolume() << std::endl;
        std::cout << std::endl;

        MineralWater mineralWater = MineralWater("Borjomi", 750, Carbonation::CARBONATED, Type::HIGH_MINERALISATION);
        std::cout << mineralWater.getBottleDrinkName() << std::endl;
        std::cout << mineralWater.getBottleDrinkVolume() << std::endl;
        std::cout << mineralWater.getCarbonation() << std::endl;
        std::cout << mineralWater.getType() << std::endl;
        std::cout << std::endl;

        Lemonade lemonade = Lemonade("Buratino", 1000, Carbonation::CARBONATED, 200);
        std::cout << lemonade.getBottleDrinkName() << std::endl;
        std::cout << lemonade.getBottleDrinkVolume() << std::endl;
        std::cout << lemonade.getCarbonation() << std::endl;
        std::cout << lemonade.getSugarVolume() << std::endl;
        std::cout << std::endl;

    }
    catch (std::exception& e){
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
