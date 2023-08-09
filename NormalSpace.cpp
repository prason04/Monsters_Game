#include <iostream>
#include <fstream>
#include <string>
#include "NormalSpace.h"
using namespace std;

/*class NormalSpace {
    private:
    int survivalPoints;
    int foodScore;
    int waterScore;
    char customizer;

    public:
    //NormalSpace(int numPoints);
    //NormalSpace(char decor, int numFood, int numWater);

    int getInstantPoints(int numPoints);
    int getCustomizer(char decor, int numFood, int numWater);

};*/


/*NormalSpace::NormalSpace(int numPoints) {
    numPoints = survivalPoints;
}
NormalSpace::NormalSpace(int numFood, int numWater, char decor) {
    foodScore = numFood;
    waterScore = numWater;
    customizer = decor;
} */

int NormalSpace::getInstantPoints(int numPoints) {

	// Game #1 Instructions
	cout << " " << endl;
    cout << "Roll the die! A die will be rolled for you, if you get a number between 0 and 6 then you will earn 50 points!" << endl;
    cout << "If you get a number between 5 and 11, you will earn 100 points! Let's play!" << endl;
    cout << " " << endl;

	// random function --> die
    srand((unsigned) time(NULL));

	// Loop to get a random number between 1 and 10
	for(int i=1; i<=1; i++){
		
		// Retrieve a random number between 1 and 10
		// Offset = 1
		// Range = 11
		int random = 1 + (rand() % 11);

        if (random == 0 || random == 11) {
            continue;
        }

        // if the random number is either 1, 2, 3, 4, or 5 --> 50 points are earned
        if (random == 1 || random == 2 || random == 3 || random == 4 || random == 5) {
            numPoints = 500 + 50;
        }
        
        // if the random number is either 6, 7, 8, 9, or 10 --> 100 points are earned
        if (random == 6 || random == 7 || random == 8 || random == 9 || random == 10) {
            numPoints = 500 + 100;
        }
		// output
        cout << "You rolled a " << random << "!" << " ";
	}

    cout << "You now have " << numPoints << " points!" << endl;
	cout << " " << endl;

	// update stats
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

	//string file = "MainStats.txt";
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

    return numPoints;
}

string NormalSpace::getCustomizer(char decor, int numFood, int numWater) {
	// Game #2 Instructions
	cout << "Decorate your tent! Here's how to do it:" << endl;
	cout << "A table is given below with the decorations, to choose one, simply insert the letter for it!" << endl;
	cout << "The payment form is in food and water points, so be sure to keep an eye on those as you decorate your tent!" << endl;
	cout << "Good luck!" << endl;

	char plant = 'P';
	char chair = 'C';
	char lantern = 'L';
	char rug = 'R';
	char table = 'T';

    cout << "----------------------------------------------------------------------" << endl;
	cout << "| ITEM               | LETTER TO INSERT | FOOD POINTS | WATER POINTS |" << endl;
	cout << "|--------------------|------------------|-------------|--------------|" << endl;
	cout << "| plant              | 	      P         |      3      |       2      |" << endl;
	cout << "|--------------------|------------------|-------------|--------------|" << endl;
	cout << "| chair              |        C		|      3      |       2      |" << endl;
	cout << "|--------------------|------------------|-------------|--------------|" << endl;
	cout << "| lantern            |	      L         |      4      |       3      |" << endl;
	cout << "|--------------------|------------------|-------------|--------------|" << endl;
	cout << "| rug	             |        R         |      4      |       3      |" << endl;
	cout << "|--------------------|------------------|-------------|--------------|" << endl;
	cout << "| table              |        T         |      5      |       6      |" << endl;
	cout << "----------------------------------------------------------------------" << endl;

	// taking character input
	cout << "Insert a letter: ";
	cin >> decor;

	// switch statement to adjust variables easier
	switch(decor) {
		case 'P':
			cout << "You bought a plant!" << endl;
			numFood = numFood - 3;
			numWater = numWater - 2;
			break;
		case 'C':
			cout << "You bought a chair!" << endl;
			numFood = numFood - 3;
			numWater = numWater - 2;
			break;
		case 'L':
			cout << "You bought a lantern!" << endl;
			numFood = numFood - 4;
			numWater = numWater - 3;
			break;
		case 'R':
			cout << "You bought a rug!" << endl;
			numFood = numFood - 4;
			numWater = numWater - 3;
			break;
		case 'T':
			cout << "You bought a table!" << endl;
			numFood = numFood - 5;
			numWater = numWater - 6;
			break;
	}
	return 0;
}


/*
// two types
    // type 1: immediate gain/loss of points
    // type 2: play games to earn/lose survival points
        // these games will take up majority of for loops/while loops, etc and will also use arrays and vectors
}

setCustomizer(char decorations) {
// a small feature to customize the tent, meant to play a role as a small and fun bonus feature
// options will be given: 'P' for plants, 'L' for lights, and so on.
// any customizations added will be written into the file
}
*/