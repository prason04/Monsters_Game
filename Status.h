#ifndef STATUS_H
#define STATUS_H

#include <iostream>

using namespace std;
class Status {
    private:
    int survivalPoints;

    public:
    //Status(int numPoints);

    int getSurvivalPoints();
    void setSurvivalPoints(int numPoints);
    void setPointsFoodWater(int numPoints, int numFood, int numWater);
    int getPointsFoodWater();
};
#endif