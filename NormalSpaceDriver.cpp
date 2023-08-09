#include <iostream>
#include <fstream>
#include <string>
//#include "NormalSpace.h"
using namespace std;
// IMPLEMENTATION REQUIREMNT: For loop

class NormalSpace {
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
};

/*
In this function the player is able to get more survival points instantly.

How it works:
A random function is used to retrieve a random number.
If the random number is either 1, 2, 3, 4, or 5, then 50 points are earned.
If the random number is either 6, 7, 8, 9, or 10, then 100 points are earned
*/
int getInstantPoints(int numPoints) {

    srand((unsigned) time(NULL));

	// Loop to get a random number between 1 and 10
	for(int i=1; i<=1; i++){ // IMPLEMENTATION REQUIREMNT: For loop
		
		// Retrieve a random number between 1 and 10
		// Offset = 1
		// Range = 11
		int random = 1 + (rand() % 11);

        if (random == 0 || random == 11) {
            continue;
        }

        // if the random number is either 1, 2, 3, 4, or 5 --> 50 points are earned
        if (random == 1 || random == 2 || random == 3 || random == 4 || random == 5) {
            numPoints = numPoints + 50;
        }
        
        // if the random number is either 6, 7, 8, 9, or 10 --> 100 points are earned
        if (random == 6 || random == 7 || random == 8 || random == 9 || random == 10) {
            numPoints = numPoints + 100;
        }

        cout << "You rolled a " << random << "!" << " ";
	}

    cout << "You now have " << numPoints << " points!" << endl;
	cout << " " << endl;

    return numPoints;
}

/*
In this function, the player is able to decorate their tent.
Any items they purchase will cost them food and water points.
*/
int getCustomizer(char decor, int numFood, int numWater) {

	// Instructions
	cout << "Decorate your tent! Here's how to do it:" << endl;
	cout << "A table is given below with the decorations, to choose one, simply insert the letter for it!" << endl;
	cout << "The payment form is in food and water points, so be sure to keep an eye on those as you decorate your tent!" << endl;
	cout << "There are a few special items, but watch out, they are expensive! Good luck!" << endl;

	// Choices
	char plant = 'P';
	char chair = 'C';
	char lantern = 'L';
	char rug = 'R';
	char table = 'T';
	char camouflage_blanket = 'B';
	char hiding_mist_cans = 'M';

	// Table of Choices
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

	// insert character for decoration
    cout << "Insert a letter: ";
	cin >> decor;

	// switch statement to adjust variables as needed with every option in a simpler manner
	switch(decor) {
		case 'P':
			cout << "You bought a plant!" << endl;
			numFood = numFood - 3;
            numWater = numWater - 2;
            cout << "You now have " << numFood << " food points and " << numWater << " water points" << endl;
			break;
		case 'C':
			cout << "You bought a chair!" << endl;
			numFood = numFood - 3;
			numWater = numWater - 2;
            cout << "You now have " << numFood << " food points and " << numWater << " water points" << endl;
			break;
		case 'L':
			cout << "You bought a lantern!" << endl;
			numFood = numFood - 4;
			numWater = numWater - 3;
            cout << "You now have " << numFood << " food points and " << numWater << " water points" << endl;
			break;
		case 'R':
			cout << "You bought a rug!" << endl;
			numFood = numFood - 4;
			numWater = numWater - 3;
            cout << "You now have " << numFood << " food points and " << numWater << " water points" << endl;
			break;
		case 'T':
			cout << "You bought a table!" << endl;
			numFood = numFood - 5;
			numWater = numWater - 6;
            cout << "You now have " << numFood << " food points and " << numWater << " water points" << endl;
			break;
	}
    return 0;
}
