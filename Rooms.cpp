#include <iostream>
#include <fstream>
#include <vector> // IMPLEMENTATION REQUIREMENT
#include <string>
#include "Rooms.h"
using namespace std;

/*Rooms::Rooms(int numFood, int numWater, int numPoints) {
    numPoints = survivalPoints;
    foodScore = numFood;
    waterScore = numWater;
    //quest_option = Quest;
}*/


int getQuest(int numFood, int numWater, int numPoints) {
    char quest;
    cout << "Would you like to go on a quest?" << endl;
    cin >> quest;
    if (quest == 'Y') {
            cout << "Instructions: Quests are mini-games you play to gain new resources for free." << endl;
            cout << "This is done by playing (and winning) a series of mini-games." << endl;
            cout << "You can choose to opt out at any time. Have fun and good luck!" << endl;
            cout << " " << endl;

            // Quest Number 1: more water points!
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

            vector<int> cards(6); // Vector
            cards.at(0) = 9;
            cards.at(1) = 5;
            cards.at(2) = 3;
            cards.at(3) = 7;
            cards.at(4) = 10;
            cards.at(5) = 3;

            // for(int i = 0; i < cards.size(); i++) {
                // cout << cards.at(i) << " ";
            // }
            cout << "Would you like to receive the values of three cards? Y or N: ";
            char choice;
            cin >> choice;
            if (choice == 'Y') {
                srand((unsigned) time(NULL));
                for(int i = 1; i <= 3; i++){
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
                    cout << "Nice job! You have earned 25 water points!" << endl;
                }
                else {
                    cout << "Try again!" << endl;
                    cout << " " << endl;
                }

                cout << "Guess #2: ";
                cin >> guess_2;
                if (guess_2 == 5) {
                    cout << "Nice job! You have earned 25 water points!" << endl;
                }
                else {
                    cout << "Try again!" << endl;
                    cout << " " << endl;
                }

                cout << "Guess #3: ";
                cin >> guess_3;
                if (guess_3 == 5) {
                    cout << "Nice job! You have earned 25 water points!" << endl;
                }
                else {
                    cout << "Sorry, you didn't find the card!" << endl;
                }
            }
            else {
                int guess_1;
                int guess_2;
                int guess_3;
                cout << "You have three tries to guess which card holds the value of ten. Good luck!" << endl;
                cin >> guess_1;
                if (guess_1 == 5) {
                    cout << "Nice job! You have earned 25 water points!" << endl;
                }
                else {
                    cout << "Try again!" << endl;
                    cout << " " << endl;
                }

                cout << "Guess #2: ";
                cin >> guess_2;
                if (guess_2 == 5) {
                    cout << "Nice job! You have earned 25 water points!" << endl;
                }
                else {
                    cout << "Try again!" << endl;
                    cout << " " << endl;
                }

                cout << "Guess #3: ";
                cin >> guess_3;
                if (guess_3 == 5) {
                    cout << "Nice job! You have earned 25 water points!" << endl;
                }
                else {
                    cout << "Sorry, you didn't find the card!" << endl;
                }
            }

            // Quest Number 2: more food points!
            cout << " " << endl;
            cout << " " << endl;

            double probability = 0;
            srand((unsigned) time(NULL));
            for(int i = 1; i <= 1; i++){
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
                for(int i = 1; i <= 1; i++){
                    int random2 = 1 + (rand() % 6);
                    cout << "Dice 2 Roll: " << random2 << endl;
                    int sum = random1 + random2;
                    if ((sum == 2) || (sum == 3)) {
                        cout << "You have earned 10 water points!" << endl;
                    }
            
                    if ((sum == 4) || (sum == 5) || (sum == 6)) {
                        cout << "You have earned 20 water points!" << endl;
                    }

                    if ((sum == 7) || (sum == 8) || (sum == 9)) {
                        cout << "You have earned 25 water points!" << endl;
                    }

                    if ((sum == 10) || (sum == 11) || (sum == 12)) {
                        cout << "You have earned 50 water points!" << endl;
                    }
                }
            }

            // Quest #3: more survival points!
            cout << " " << endl;
            cout << " " << endl;
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
                }
                else {
                    cout << "Sorry, the random number was " << random << ". Better luck next time!" << endl;
                }
            }
        }
        return 0;
    }
    

/*void setQuest(bool quest_option, int numFood, int numWater, int numPoints) {
    numPoints = survivalPoints;
    foodScore = numFood;
    waterScore = numWater;
    quest_option = Quest;
}*/