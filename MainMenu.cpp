#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "Map.h"
#include "Monsters.h"
#include "Status.h"
#include "NormalSpace.h"
#include "Shop.h"
#include "Rooms.h"
using namespace std;
// IMPLEMENTATION REQUIREMENT #1: while and for loop
// IMPLEMENTATION REQUIREMENT #2: while and for loop
// IMPLEMENTATION REQUIREMENT: Reading from a file
// IMPLEMENTATION REQUIREMENT: While loop

int main() {
    // Introduction
    cout << "Welcome to Traveler's Trail! In this game you will be going on an exciting journey." << endl;
    cout << "But as you do, watch out for monsters! Whether you choose to fight them or leave them be, that's up to you." << endl;
    cout << "Make it to the end alive and you shall be victorious! Good luck!" << endl;
    cout << " " << endl;

    Map map;
    cout << " " << endl;
        
    // CreateRoom
    map.addRoom(1,5);
    map.addRoom(4,7);
    map.addRoom(6,8);
    map.addRoom(8,1);
    map.addRoom(10,5);
    //map.displayMap();

    // CreateSpaces
    map.addSpace(3,4);
    map.addSpace(8,3);
    map.addSpace(11,2);
    map.addSpace(7,5);
    map.addSpace(6,1);

    // CreateMonsters
    map.addMonster(2,6);
    map.addMonster(6,3);
    map.addMonster(7,9);
    map.addMonster(9,7);
    map.addMonster(10,9);
    map.displayMap();

    // Start

        int numPoints = 500;
        int numFood = 300;
        int numWater = 300;
        bool Armor = true;
        int boss_anger = 0;

        string file1 = "IntroStats.txt"; // IMPLEMENTATION REQUIREMENT: Reading from a file!
        ifstream inFile1;
        inFile1.open(file1);

        string line = "";
        if(inFile1.is_open()) {
            // cout << endl;
            while(getline(inFile1,line)) {
                cout << line << endl;
            }
        }
        inFile1.close();

    // Shop
        Shop items;
        cout << " " << endl;
        cout << "Welcome to the shop!" << endl;
        cout << "Would you like to buy something?" << endl;
        char purchase;
        cin >> purchase;
        if (purchase == 'Y') {
            cout << "Here is the list of items!" << endl;
            items.getStoreList();
            items.getItem(500, 300, 300, true);
        }
        // start of while loop, as long as numPoints are over 250 (half of 500, the starting value) the loop will keep going
        while(numPoints > 250) { // IMPLEMENTATION REQUIREMENT: While loop

            // instructions for directions, repeatedly displays until R, N, M, or E is hit
            char direction;
            cout << " " << endl;
            cout << "Directions:" << endl;
            cout << "Down - Letter: s" << endl;
            cout << "Right - Letter: d" << endl;
            cout << "Left - Letter: a" << endl;
            cout << "Which direction would you like to go? Insert the letter: ";
            cin >> direction;
            map.move(direction);
            map.displayMap(); // IMPLEMENTATION REQUIREMENT #1: while and for loop

            /*
                for (int i = 0; i < num_rows_; i++)
                {
                    for (int j = 0; j < num_cols_; j++)
                    {
                        if (player_position_[0] == i && player_position_[1] == j)
                        {
                            cout << PARTY;
                        }
                        else if (map_data_[i][j] == 'N')
                        { // NPC location, have to check if they were found yet
                            for (int k = 0; k < npc_count_; k++)
                            {
                                if (npc_positions_[k][0] == i && npc_positions_[k][1] == j)
                                {
                                    if (npc_positions_[k][2] == true)
                                    {
                                        cout << NPC;
                                    }
                                    else
                                    {
                                        cout << UNEXPLORED;
                                    }
                                }
                            }
                        }
                        else
                        {
                            cout << map_data_[i][j];
                        }
                    }
                    cout << endl;
                }
            }
            */


        // Normal Space
        if(map.isSpaceLocation(map.getPlayerRow(),map.getPlayerCol())) {
            Status update;
            NormalSpace points;
            cout << "Do you want to earn survival points? Y or N: " << endl;
            char choice1;
            cin >> choice1;
            if (choice1 == 'Y') {
                cout << " " << endl;
                cout << "Roll the die! A die will be rolled for you, if you get a number between 0 and 6 then you will earn 50 points!" << endl;
                cout << "If you get a number between 5 and 11, you will earn 100 points! Let's play!" << endl;
                cout << " " << endl;
                char die;
                cout << "Do you want to roll the die? Y or N: " << endl;
                cin >> die;
                if (die == 'Y') {
                    points.getInstantPoints(100);
                    update.getSurvivalPoints();
                    update.setSurvivalPoints(100);
                }
            }
            cout << "Do you want to buy a decoration for your tent? Y or N: " << endl;
            char choice2;
            cin >> choice2;
            if (choice2 == 'Y') {
                char option;
                points.getCustomizer(option, 300, 300);
                cin >> option;
            }
        }

        // Rooms
        if(map.isRoomLocation(map.getPlayerRow(),map.getPlayerCol())) {
            cout << " " << endl;
            //cout << "Oh no! The Boss Monster has noticed you and attacked! Your survival is in danger!" << endl;
            cout << "You have entered a Room! Here you can go on Quests to earn points for food, water, survival, and more!" << endl;
            cout << " " << endl;

            string file = "MainStats.txt";
            ifstream inFile;
            inFile.open(file);

            //string line = "";
            if(inFile.is_open()) {
                while(getline(inFile,line)) {
                    cout << line << endl;
                }
            }
            inFile.close();

            // ask for the values in file
            cout << "Time for a check in!" << endl;
            cout << " " << endl;

            int pointCount;
            cout << "How many survival points do you have?" << endl;
            cin >> pointCount;

            int waterCount;
            cout << "How many water points do you have?" << endl; 
            cin >> waterCount;

            int foodCount;
            cout << "How many food points do you have?" << endl; 
            cin >> foodCount;

            // set the values inserted as parameters

            Rooms games;
            games.getQuest(foodCount, waterCount, pointCount);
            cout << " " << endl;
            map.displayMap(); // IMPLEMENTATION REQUIREMENT #2: while and for loop
            /*
                for (int i = 0; i < num_rows_; i++)
                {
                    for (int j = 0; j < num_cols_; j++)
                    {
                        if (player_position_[0] == i && player_position_[1] == j)
                        {
                            cout << PARTY;
                        }
                        else if (map_data_[i][j] == 'N')
                        { // NPC location, have to check if they were found yet
                            for (int k = 0; k < npc_count_; k++)
                            {
                                if (npc_positions_[k][0] == i && npc_positions_[k][1] == j)
                                {
                                    if (npc_positions_[k][2] == true)
                                    {
                                        cout << NPC;
                                    }
                                    else
                                    {
                                        cout << UNEXPLORED;
                                    }
                                }
                            }
                        }
                        else
                        {
                            cout << map_data_[i][j];
                        }
                    }
                    cout << endl;
                }
            }
            */
        }

        // Monsters
        if(map.isMonsterLocation(map.getPlayerRow(),map.getPlayerCol())) {
            cout << "You have encountered a monster!" << endl;
            cout << " " << endl;
            cout << "Are you ready for battle?" << endl;
            

            string file = "MainStats.txt";
            ifstream inFile2;
            inFile2.open(file);

            if(inFile2.is_open()) {
                while(getline(inFile2,line)) {
                    cout << line << endl;
                }
            }
            inFile2.close();

            int pCount;
            cout << "How many survival points do you have?" << endl;
            cin >> pCount;
            //pointCount = numPoints;

            int wCount;
            cout << "How many water points do you have?" << endl; 
            cin >> wCount;
            //waterCount = numWater;

            int fCount;
            cout << "How many food points do you have?" << endl; 
            cin >> fCount;

            int mCount;
            cout << "How angry is the boss monster?" << endl;
            cin >> mCount;

            Monsters monster1;
            monster1.getMonster();
            monster1.getWeapon();
            // set the variables received to the variables in this parameter
            monster1.setAttack(pCount, wCount, fCount, mCount);
            cout << " " << endl;
            map.displayMap();
        }

        // Successfully exited the game!
        if(map.isDungeonExit(map.getPlayerRow(),map.getPlayerCol())) {
            if (numPoints > 250) {
                // you win, MainStats.txt is printed
                cout << "You win!" << endl;
            }
            else {
                // you lose, MainStats.txt is printed
                cout << "You lose!" << endl;
                string file = "MainStats.txt";
                ifstream inFile;
                inFile.open(file);

                //string line = "";
                if(inFile.is_open()) {
                    while(getline(inFile,line)) {
                        cout << line << endl;
                    }
                }
                inFile.close();
            }
            break;
        }
    }
}

// g++ -std=c++17 MainMenu.cpp NormalSpaceDriver.cpp NormalSpace.cpp Status.cpp Shop.cpp ShopDriver.cpp Rooms.cpp RoomsDriver.cpp Monsters.cpp MonstersDriver.cpp Map.cpp MapDriver.cpp