#include "Status.h"
#include <iostream>
#include <string>
#include <fstream>
//#include <cassert>
using namespace std;

/*Status::Status(int numPoints) {
    survivalPoints = numPoints;
} */

// set the updated value of survival points
void Status::setSurvivalPoints(int numPoints) {
    survivalPoints = numPoints;
    string file = "MainStats.txt";
    ofstream outFile;
    outFile.open(file);
    if(outFile.is_open()) {
		outFile << "------------------" << endl;
		outFile << "PLAYER STATISTICS:" << endl;
		outFile << "------------------" << endl;
		outFile << " " << endl;
		outFile << "Note: If survival points, food points, or water points hits 0, it's game over!" << endl;
		outFile << "Survival points: " << numPoints << endl;
		outFile << "Food points: 300" << endl;
		outFile << "Water points: 300" << endl;
		outFile << "Armor: Intact" << endl;
		outFile << "Boss Monster Anger: 0" << endl;
		outFile << " " << endl;
	}
	outFile.close();
}

// returned the updated value of survival points
int Status::getSurvivalPoints() {
    string file = "MainStats.txt";
    ifstream inFile;
    inFile.open(file);

    string line = "";
    if(inFile.is_open()) {
        // cout << endl;
        while(getline(inFile,line)) {
            cout << line << endl;
        }
    }
    inFile.close();
    return 0;
}

// set the updated values of food, water, and survival points
void Status::setPointsFoodWater(int numPoints, int numFood, int numWater) {
    survivalPoints = numPoints;
    string file = "MainStats.txt";
    ofstream outFile;
    outFile.open(file);
    if(outFile.is_open()) {
		outFile << "------------------" << endl;
		outFile << "PLAYER STATISTICS:" << endl;
		outFile << "------------------" << endl;
		outFile << " " << endl;
		outFile << "Note: If survival points, food points, or water points hits 0, it's game over!" << endl;
		outFile << "Survival points: " << numPoints << endl;
		outFile << "Food points: " << numFood << endl;
		outFile << "Water points: " << numWater << endl;
		outFile << "Armor: Intact" << endl;
		outFile << "Boss Monster Anger: 0" << endl;
		outFile << " " << endl;
	}
	outFile.close();
}
// returned the updated values of food, water, and survival points
int Status::getPointsFoodWater() {
    string file = "MainStats.txt";
    ifstream inFile;
    inFile.open(file);

    string line = "";
    if(inFile.is_open()) {
        // cout << endl;
        while(getline(inFile,line)) {
            cout << line << endl;
        }
    }
    inFile.close();
    return 0;
}