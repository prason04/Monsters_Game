//variables: food, water, survival points
//new variable: char customize

#ifndef NORMALSPACE_H
#define NORMALSPACE_H

#include <iostream>

using namespace std;
class NormalSpace {
    private:
    int survivalPoints;
    int foodScore;
    int waterScore;
    char customizer;

    public:

    int getInstantPoints(int numPoints);
    string getCustomizer(char decor, int numFood, int numWater);

};
#endif