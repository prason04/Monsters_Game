#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;
// IMPLEMENTATION REQUIREMENT: Writing to a file
// IMPLEMENTATION REQUIREMNT: For loop
// IMPLEMENTATION REQUIREMNT: For loop
// IMPLEMENTATION REQUIREMNT: For loop

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
};

/*Rooms::Rooms(int numFood, int numWater, int numPoints) {
    numPoints = survivalPoints;
    foodScore = numFood;
    waterScore = numWater;
    //quest_option = Quest;
}*/

/*
In this function, the player plays a series of games as they go on a Quest.
As their Quest continues, they play games to earn food, water, and survival points.
*/
int Rooms::getQuest(int numFood, int numWater, int numPoints) {
    char quest;
    cout << "Would you like to go on a quest?" << endl;
    cin >> quest;
    if (quest == 'Y') {
            cout << "Instructions: Quests are mini-games you play to gain more resources for free." << endl;
            cout << "This is done by playing (and winning) a series of mini-games." << endl;
            cout << "You can choose to opt out at any time. Have fun and good luck!" << endl;
            cout << " " << endl;

            // Quest Number 1: More Water Points!

            // Instructions
            cout << "Quest Number 1: Earn Water Points!" << endl;
            cout << "There are 6 cards displayed below. One of the cards hold the value of 10. You must guess which card it is." << endl;
            cout << "You can ask to see the values of three cards out of the six." << endl;
            cout << "However there is a catch: the values of three RANDOM cards will be shown to you." << endl;
            cout << "If you got it, then great! If you didn't, then you must guess which card holds the value of ten. Good luck!" << endl;

            cout << "-----------    -----------    -----------    -----------    -----------    -----------" << endl;
            cout << "|---------|    |---------|    |---------|    |---------|    |---------|    |---------|" << endl;
            cout << "|----1----|    |----2----|    |----3----|    |----4----|    |----5----|    |----6----|" << endl;
            cout << "|---------|    |---------|    |---------|    |---------|    |---------|    |---------|" << endl;
            cout << "|---------|    |---------|    |---------|    |---------|    |---------|    |---------|" << endl;
            cout << "-----------    -----------    -----------    -----------    -----------    -----------" << endl;

            // Vector

            vector<int> cards(6);
            cards.at(0) = 9;
            cards.at(1) = 5;
            cards.at(2) = 3;
            cards.at(3) = 7;
            cards.at(4) = 10;
            cards.at(5) = 3;

            cout << "Would you like to receive the values of three cards? Y or N: ";
            char choice;
            cin >> choice;
            if (choice == 'Y') {
                srand((unsigned) time(NULL));
                for(int i = 1; i <= 3; i++){ // IMPLEMENTATION REQUIREMNT: For loop
                    int random = 1 + (rand() % 6);
                    cout << "Number of the card (note: the number of the card is not the same as the value of the card): " << endl;
                    cout << random << endl;

                    if (random == 1) {
                        cout << "The value of the first card is " << cards.at(0) << endl;
                    }
                    if (random == 2) {
                        cout << "The value of the second card is " << cards.at(1) << endl;
                    }
                    if (random == 3) {
                        cout << "The value of the third card is " << cards.at(2) << endl;
                    }
                    if (random == 4) {
                        cout << "The value of the fourth card is " << cards.at(3) << endl;
                    }
                    if (random == 5) {
                        cout << "The value of the fifth card is " << cards.at(4) << endl;
                    }
                    if (random == 6) {
                        cout << "The value of the sixth card is " << cards.at(5) << endl;
                    }
                }
                int guess_1;
                int guess_2;
                int guess_3;
                cout << "You have three tries to guess which card holds the value of ten. Good luck!" << endl;

                cout << "Guess #1: ";
                cin >> guess_1;
                if (guess_1 == 5) {
                    numWater = numWater + 25;
                    cout << "Nice job! You have earned 25 water points!" << endl;

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
                        outFile << "Boss Monster Anger: 20" << endl;
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
                }
                else {
                    cout << "Try again!" << endl;
                    cout << " " << endl;
                

                    cout << "Guess #2: ";
                    cin >> guess_2;
                    if (guess_2 == 5) {
                        numWater = numWater + 25;
                        cout << "Nice job! You have earned 25 water points!" << endl;

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
                            outFile << "Boss Monster Anger: 20" << endl;
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

                    }
                    else {
                        cout << "Try again!" << endl;
                        cout << " " << endl;
                    

                        cout << "Guess #3: ";
                        cin >> guess_3;
                        if (guess_3 == 5) {
                            numWater = numWater + 25;
                            cout << "Nice job! You have earned 25 water points!" << endl;

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
                                outFile << "Boss Monster Anger: 20" << endl;
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

                        }
                        else {
                            cout << "Sorry, you didn't find the card!" << endl;
                        }
                    }
                }
            }
            else {
                int guess_1;
                int guess_2;
                int guess_3;
                cout << "You have three tries to guess which card holds the value of ten. Good luck!" << endl;
                cin >> guess_1;
                if (guess_1 == 5) {
                    numWater = numWater + 25;
                    cout << "Nice job! You have earned 25 water points!" << endl;

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
                        outFile << "Boss Monster Anger: 20" << endl;
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

                }
                else {
                    cout << "Try again!" << endl;
                    cout << " " << endl;
                }

                cout << "Guess #2: ";
                cin >> guess_2;
                if (guess_2 == 5) {
                    numWater = numWater + 25;
                    cout << "Nice job! You have earned 25 water points!" << endl;

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
                        outFile << "Boss Monster Anger: 20" << endl;
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

                }
                else {
                    cout << "Try again!" << endl;
                    cout << " " << endl;
                }

                cout << "Guess #3: ";
                cin >> guess_3;
                if (guess_3 == 5) {
                    numWater = numWater + 25;
                    cout << "Nice job! You have earned 25 water points!" << endl;

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
                        outFile << "Boss Monster Anger: 20" << endl;
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

                }
                else {
                    cout << "Sorry, you didn't find the card!" << endl;
                }
            }

            cout << " " << endl;
            cout << " " << endl;

            // Quest Number 2: More Food Points!

            // Instructions
            cout << "Quest Number 2: Earn Food Points!" << endl;
            cout << "In this quest, you are to roll a dice." << endl;
            cout<< "After rolling one, you will receive the probabilities of achieving certain values by adding the values of the two dice together." << endl;
            cout << "You will then roll the second dice. The higher the sum, the more food points you get! Good luck!" << endl;

            double probability = 0;
            srand((unsigned) time(NULL));
            for(int i = 1; i <= 1; i++){ // IMPLEMENTATION REQUIREMNT: For loop
                int random1 = 1 + (rand() % 6);
                cout << "Dice 1 Roll: " << random1 << endl;
                if (random1 == 1) {

                    // 10, 11, 12 --> 50 food points
                    probability = (0.0/6.0) * 100;
                    cout << "There is a " << probability << "% chance that you can get only 50 food points with this roll." << endl;

                    // 7, 8, 9 --> 25 food points
                    probability = (1.0/6.0) * 100;
                    cout << "There is a " << probability << "% chance that you can get only 25 food points with this roll." << endl;

                    // 4, 5, 6 --> 20 food points
                    probability = (3.0/6.0) * 100;
                    cout << "There is a " << probability << "% chance that you can get only 20 food points with this roll." << endl;

                    // 1, 2, 3 --> 10 food points
                    probability = (2.0/6.0) * 100;
                    cout << "There is a " << probability << "% chance that you can get only 10 food points with this roll." << endl; 
                }

                if (random1 == 2) {

                    // 10, 11, 12 --> 50 food points
                    probability = (0.0/6.0) * 100;
                    cout << "There is a " << probability << "% chance that you can get only 50 food points with this roll." << endl;

                    // 7, 8, 9 --> 25 food points
                    probability = (2.0/6.0) * 100;
                    cout << "There is a " << probability << "% chance that you can get only 25 food points with this roll." << endl;

                    // 4, 5, 6 --> 20 food points
                    probability = (3.0/6.0) * 100;
                    cout << "There is a " << probability << "% chance that you can get only 20 food points with this roll." << endl;

                    // 1, 2, 3 --> 10 food points
                    probability = (1.0/6.0) * 100;
                    cout << "There is a " << probability << "% chance that you can get only 10 food points with this roll." << endl; 
                }

                if (random1 == 3) {

                    // 10, 11, 12 --> 50 food points
                    probability = (0.0/6.0) * 100;
                    cout << "There is a " << probability << "% chance that you can get only 50 food points with this roll." << endl;

                    // 7, 8, 9 --> 25 food points
                    probability = (3.0/6.0) * 100;
                    cout << "There is a " << probability << "% chance that you can get only 25 food points with this roll." << endl;

                    // 4, 5, 6 --> 20 food points
                    probability = (3.0/6.0) * 100;
                    cout << "There is a " << probability << "% chance that you can get only 20 food points with this roll." << endl;

                    // 1, 2, 3 --> 10 food points
                    probability = (0.0/6.0) * 100;
                    cout << "There is a " << probability << "% chance that you can get only 10 food points with this roll." << endl; 
                }

                if (random1 == 4) {

                    // 10, 11, 12 --> 50 food points
                    probability = (1.0/6.0) * 100;
                    cout << "There is a " << probability << "% chance that you can get only 50 food points with this roll." << endl;

                    // 7, 8, 9 --> 25 food points
                    probability = (3.0/6.0) * 100;
                    cout << "There is a " << probability << "% chance that you can get only 25 food points with this roll." << endl;

                    // 4, 5, 6 --> 20 food points
                    probability = (2.0/6.0) * 100;
                    cout << "There is a " << probability << "% chance that you can get only 20 food points with this roll." << endl;

                    // 1, 2, 3 --> 10 food points
                    probability = (0.0/6.0) * 100;
                    cout << "There is a " << probability << "% chance that you can get only 10 food points with this roll." << endl; 
                }

                if (random1 == 5) {

                    // 10, 11, 12 --> 50 food points
                    probability = (2.0/6.0) * 100;
                    cout << "There is a " << probability << "% chance that you can get only 50 food points with this roll." << endl;

                    // 7, 8, 9 --> 25 food points
                    probability = (3.0/6.0) * 100;
                    cout << "There is a " << probability << "% chance that you can get only 25 food points with this roll." << endl;

                    // 4, 5, 6 --> 20 food points
                    probability = (1.0/6.0) * 100;
                    cout << "There is a " << probability << "% chance that you can get only 20 food points with this roll." << endl;

                    // 1, 2, 3 --> 10 food points
                    probability = (0.0/6.0) * 100;
                    cout << "There is a " << probability << "% chance that you can get only 10 food points with this roll." << endl; 
                }

                if (random1 == 6) {

                    // 10, 11, 12 --> 50 food points
                    probability = (3.0/6.0) * 100;
                    cout << "There is a " << probability << "% chance that you can get only 50 food points with this roll." << endl;

                    // 7, 8, 9 --> 25 food points
                    probability = (3.0/6.0) * 100;
                    cout << "There is a " << probability << "% chance that you can get only 25 food points with this roll." << endl;

                    // 4, 5, 6 --> 20 food points
                    probability = (0.0/6.0) * 100;
                    cout << "There is a " << probability << "% chance that you can get only 20 food points with this roll." << endl;

                    // 1, 2, 3 --> 10 food points
                    probability = (0.0/6.0) * 100;
                    cout << "There is a " << probability << "% chance that you can get only 10 food points with this roll." << endl; 

                    cout << " " << endl;

                }
                srand((unsigned) time(NULL));
                for(int i = 1; i <= 1; i++){ // IMPLEMENTATION REQUIREMNT: For loop
                    int random2 = 1 + (rand() % 6);
                    cout << "Dice 2 Roll: " << random2 << endl;
                    int sum = random1 + random2;
                    if ((sum == 2) || (sum == 3)) {
                        cout << "You have earned 10 food points!" << endl;
                        numFood = numFood + 10;

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
                            outFile << "Boss Monster Anger: 20" << endl;
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

                    }
            
                    if ((sum == 4) || (sum == 5) || (sum == 6)) {
                        cout << "You have earned 20 food points!" << endl;
                        numFood = numFood + 20;

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
                            outFile << "Boss Monster Anger: 20" << endl;
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

                    }

                    if ((sum == 7) || (sum == 8) || (sum == 9)) {
                        cout << "You have earned 25 food points!" << endl;
                        numFood = numFood + 25;

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
                            outFile << "Boss Monster Anger: 20" << endl;
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

                    }

                    if ((sum == 10) || (sum == 11) || (sum == 12)) {
                        cout << "You have earned 50 food points!" << endl;
                        numFood = numFood + 50;

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
                            outFile << "Boss Monster Anger: 20" << endl;
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

                    }
                }
            }

            // Quest #3: More Survival points!
            cout << " " << endl;
            cout << " " << endl;

            // Instructions
            cout << "To win survival points, you must guess the number that is randomly generated. Good luck!" << endl;
            cout << "Note: The random number generated is between 1 and 5." << endl;
            int guess;
            srand((unsigned) time(NULL));
            for(int i = 1; i <= 1; i++){
                int random = 1 + (rand() % 5);
                // cout << "Number generated: " << random << endl;

                cout << "Your guess: ";
                cin >> guess;
                if (guess == random) {
                    cout << "Amazing! You win 100 survival points!" << endl;
                    numPoints = numPoints + 100;

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
                            outFile << "Boss Monster Anger: 20" << endl;
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

                }
                else {
                    cout << "Sorry, the random number was " << random << ". Better luck next time!" << endl;
                }
            }
        }
        return 0;
    }


/*int main() {
    cout << getPointsCheck() << endl;
    setPointsCheck(0,0);
    cout << getQuest(true,0,0,0) << endl;
    setQuest(true,0,0,0, true,0,0,0);
}*/