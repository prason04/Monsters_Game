#ifndef SHOP_H
#define SHOP_H
#include <iostream>

using namespace std;
class Shop {
    private:
    int survivalPoints;
    int foodScore;
    int waterScore;
    int tent;
    bool armor;

    public:
    //Shop(int numPoints, int numFood, int numWater, int tentType, bool Armor);

    std::string getStoreList();
    int getItem(int numPoints, int numWater, int numFood, bool Armor);
};
#endif