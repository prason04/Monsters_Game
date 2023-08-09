#ifndef ROOMS_H
#define ROOMS_H

class Rooms {
    private: 
    //bool Quest;
    int survivalPoints;
    int foodScore;
    int waterScore;

    public:
    //Rooms();
    //Rooms(bool quest_option, int numFood, int numWater, int numPoints);

    int getQuest(int numFood, int numWater, int numPoints);
    //void setQuest(int numFood, int numWater, int numPoints);
};
#endif