#include <iostream>
#include <fstream>
#include <string>
#include "Shop.h"
using namespace std;

/*
This function displays the items of the store in a list.
This makes it easier for the player to view their choices as they purchase items.
*/
std::string getStoreList() {

    string file = "ShopList.txt";
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
    return "a";
}

/*
In this function, the player is able to purchase items.
They pay using survival points, food points, and water points.
*/
int getItem(int numPoints, int numWater, int numFood, bool Armor) {
    // int numPoints = 100;
    // int numWater = 100;
    // int numFood = 100;
    // int Armor = false;

    // Print Receipt
    string file = "Receipt.txt";
    ofstream outFile;
    outFile.open(file);
    if(outFile.is_open()) { 

        // getting item to purchase
        char purchase;
        cout << "What would you like to buy?" << endl;
        cin >> purchase;

        // Survival Points Pack
        if (purchase == 'S') {
            char pack;
            cout << "Which one would you like to buy?" << endl;
            cin >> pack;

            // 20 Survival Points
            if (pack == 'T') {
                numPoints = numPoints + 20;
                numFood = numFood - 20;
                numWater = numWater - 10;
                outFile << "20 survival points pack" << endl;
            }

            // 40 Survival Points
            if (pack == 'O') {
                numPoints = numPoints + 40;
                numFood = numFood - 20;
                numWater = numWater - 20;
                outFile << "40 survival points pack" << endl;
            }

            // 50 Survival Points
            if (pack == 'I') {
                numPoints = numPoints + 50;
                numFood = numFood - 30;
                numWater = numWater - 30;
                outFile << "50 survival points pack" << endl;
            }

            // 100 Survival Points
            if (pack == 'H') {
                numPoints = numPoints + 100;
                numFood = numFood - 50;
                numWater = numWater - 50;
                outFile << "100 survival points pack" << endl;
            }
        }

        // Water Points Pack
        if (purchase == 'A') {
            char pack;
            cout << "Which one would you like to buy?" << endl;
            cin >> pack;

            // 20 Water Points
            if (pack == 'T') {
                numWater = numWater + 20;
                numPoints = numPoints - 10;
                numFood = numFood - 20;
                outFile << "20 water points pack" << endl;
            }

            // 40 Water Points
            if (pack == 'O') {
                numWater = numWater + 40;
                numPoints = numPoints - 20;
                numFood = numFood - 30;
                outFile << "40 water points pack" << endl;
            }

            // 50 Water Points
            if (pack == 'I') {
                numWater = numWater + 50;
                numPoints = numPoints - 30;
                numFood = numFood - 40;
                outFile << "50 water points pack" << endl;
            }
        }

        // Food Points Pack
        if (purchase == 'F') {
            char pack;
            cout << "Which one would you like to buy?" << endl;
            cin >> pack;

            // 20 Food Points
            if (pack == 'T') {
                numFood = numFood + 20;
                numPoints = numPoints - 10;
                numWater = numWater - 20;
                outFile << "20 food points pack" << endl;
            }

            // 40 Food Points
            if (pack == 'O') {
                numFood = numFood + 40;
                numPoints = numPoints - 20;
                numWater = numWater - 30;
                outFile << "40 food points pack" << endl;
            }

            // 50 Food Points
            if (pack == 'I') {
                numFood = numFood + 50;
                numPoints = numPoints - 30;
                numWater = numWater - 40;
                outFile << "50 food points pack" << endl;
            }
        }

        // Tents
        if (purchase == 'T') {
            char tentChoice;
            cout << "Which one would you like to buy?" << endl;
            cin >> tentChoice;

            // Pop-Up Tent
            if (tentChoice == 'P') {
                numPoints = numPoints - 20;
                outFile << "Pop-Up Tent" << endl;
            }

            // Inflatable
            if (tentChoice == 'I') {
                numPoints = numPoints - 30;
                outFile << "Inflatable" << endl;
            }

            // Multi-Room
            if (tentChoice == 'M') {
                numPoints = numPoints - 40;
                outFile << "Multi-Room" << endl;
            }
        }

        // Weapons
        if (purchase == 'W') {
            char wChoice;
            cout << "Which one would you like to buy?" << endl;
            cin >> wChoice;

            // Rope
            if (wChoice == 'R') {
                numPoints = numPoints - 10;
                numFood = numFood - 10;
                outFile << "Weapon: Rope" << endl;
            }

            // Wooden Club
            if (wChoice == 'C') {
                numPoints = numPoints - 10;
                numFood = numFood - 10;
                outFile << "Weapon: Wooden Club" << endl;
            }

            // Wooden Sword
            if (wChoice == 'W') {
                numPoints = numPoints - 20;
                numFood = numFood - 20;
                outFile << "Weapon: Wooden Sword" << endl;
            }

            // Sword
            if (wChoice == 'S') {
                numPoints = numPoints - 20;
                numFood = numFood - 20;
                outFile << "Weapon: Sword" << endl;
            }

            // Flaming Sword
            if (wChoice == 'F') {
                numPoints = numPoints - 30;
                numFood = numFood - 30;
                outFile << "Weapon: Flaming Sword" << endl;
            }

            // Bow and Arrow
            if (wChoice == 'B') {
                numPoints = numPoints - 50;
                numFood = numFood - 50;
                outFile << "Weapon: Bow and Arrow" << endl;
            }
        }

        // Armor
        if (purchase == 'A') {
            numPoints = numPoints - 40;
            Armor = true;
            outFile << "Armor" << endl;
        }
    }

	outFile.close();
    return 0;
}


/*Shop::Shop(int numPoints, int numFood, int numWater, int tentType, bool Armor) {
    numPoints = survivalPoints;
    numFood = foodScore;
    numWater = waterScore;
    tent = tentType;
    armor = Armor;
}*/