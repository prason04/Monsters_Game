#include <iostream>
#include <fstream>
#include <string>
// #include "Monsters.h"
using namespace std;
// IMPLEMENTATION REQUIREMENT: 4+ DATA MEMBERS
// IMPLEMENTATION REQUIREMNT: For loop

class Monsters {
    private:
    int survivalPoints;
    bool armorCondition;
    bool white_flag;
    int bossAngerLevel;
    int monster_damage;
    int foodScore;
    int waterScore;
    bool weaponCondition;
    int monsterPoints;


    public:
    //Monsters();
    //Monsters(int survivalPoints, bool armorCondition, bool white_flag, int bossAngerLevel, int foodScore, int waterScore, bool weaponCondition, int monster_damage, int monsterPoints);

    string getMonster();
    char getWeapon();
    int setAttack(int numPoints, int numWater, int numFood, int boss_anger);
};

/*Monsters::Monsters(int numPoints, int numFood, int numWater, bool w_condition, int boss_anger, bool a_condition, bool flag, int monPoints, int monDamage) {
    numPoints = survivalPoints;
    numFood = foodScore;
    numWater = waterScore;
    w_condition = weaponCondition;
    boss_anger = bossAngerLevel;
    a_condition = armorCondition;
    flag = white_flag;
    monPoints = monsterPoints;
    monDamage = monster_damage;
} */

/*
This function gers the name of a monster. It takes the file "Monsters.txt" and reads from it.
It uses a random functiuon to generate a number. Whichever number comes out is the line, that is the line
the program has to read. This will give the name of the monster the player will be fighting.
*/
string Monsters::getMonster() {
    char option;
    cout << "Do you want to fight? Insert Y or N: ";
    cin >> option;
    if (option == 'Y') {
        srand((unsigned) time(NULL));
        for(int i=1; i<=1; i++){ // IMPLEMENTATION REQUIREMNT: For loop
		
		// Retrieve a random number between 1 and 10
		// Offset = 1
		// Range = 11
		int random = 1 + (rand() % 10);

        if (random == 1) {
            string file = "Monsters.txt";
            ifstream inFile;
            string line = "";
            inFile.open(file);
            if(inFile.is_open()) {
                // traverse the .txt file
                while(getline(inFile,line)) {
                    if(line == "Vampires") {
                        cout << "You will be fighting the " << line << "!" << endl;
                    }
                }
            }
            inFile.close();
        }
        if (random == 2) {
            string file = "Monsters.txt";
            ifstream inFile;
            string line = "";
            inFile.open(file);
            if(inFile.is_open()) {
                // traverse the .txt file
                while(getline(inFile,line)) {
                    if(line == "Demons") {
                        cout << "You will be fighting the " << line << "!" << endl;
                    }
                }
            }
            inFile.close();
        }
        if (random == 3) {
            string file = "Monsters.txt";
            ifstream inFile;
            string line = "";
            inFile.open(file);
            if(inFile.is_open()) {
                // cout << endl;
                // traverse the .txt file
                while(getline(inFile,line)) {
                    if(line == "Trolls") {
                        cout << "You will be fighting the " << line << "!" << endl;
                    }
                }
            }
            inFile.close();
        }
        if (random == 4) {
            string file = "Monsters.txt";
            ifstream inFile;
            string line = "";
            inFile.open(file);
            if(inFile.is_open()) {
                // traverse the .txt file
                while(getline(inFile,line)) {
                    if(line == "Ogres") {
                        cout << "You will be fighting the " << line << "!" << endl;
                    }
                }
            }
            inFile.close();
        }
        if (random == 5) {
            string file = "Monsters.txt";
            ifstream inFile;
            string line = "";
            inFile.open(file);
            if(inFile.is_open()) {
                // traverse the .txt file
                while(getline(inFile,line)) {
                    if(line == "Goblins") {
                        cout << "You will be fighting the " << line << "!" << endl;
                    }
                }
            }
            inFile.close();
        }
        if (random == 6) {
            string file = "Monsters.txt";
            ifstream inFile;
            string line = "";
            inFile.open(file);
            if(inFile.is_open()) {
                // traverse the .txt file
                while(getline(inFile,line)) {
                    if(line == "Giants") {
                        cout << "You will be fighting the " << line << "!" << endl;
                    }
                }
            }
            inFile.close();
        }
        if (random == 7) {
            string file = "Monsters.txt";
            ifstream inFile;
            string line = "";
            inFile.open(file);
            if(inFile.is_open()) {
                // traverse the .txt file
                while(getline(inFile,line)) {
                    if(line == "Ghouls") {
                        cout << "You will be fighting the " << line << "!" << endl;
                    }
                }
            }
            inFile.close();
        }
        if (random == 8) {
            string file = "Monsters.txt";
            ifstream inFile;
            string line = "";
            inFile.open(file);
            if(inFile.is_open()) {
                // traverse the .txt file
                while(getline(inFile,line)) {
                    if(line == "Cyclops") {
                        cout << "You will be fighting the " << line << "!" << endl;
                    }
                }
            }
            inFile.close();
        }
        if (random == 9) {
            string file = "Monsters.txt";
            ifstream inFile;
            string line = "";
            inFile.open(file);
            if(inFile.is_open()) {
                // traverse the .txt file
                while(getline(inFile,line)) {
                    if(line == "Zombies") {
                        cout << "You will be fighting the " << line << "!" << endl;
                    }
                }
            }
            inFile.close();
        }
	}
}
else {
    // return back to normalspace
}
        return "--------";
}

/*
This function provides the player with a weapon to fight with against the monster.
*/
char Monsters::getWeapon() {
    char option;

    cout << "Vampires --> V" << endl;
    cout << "Demons --> D" << endl;
    cout << "Trolls --> T" << endl;
    cout << "Ogres --> O" << endl;
    cout << "Goblins --> G" << endl;
    cout << "Giants --> I" << endl;
    cout << "Ghouls --> H" << endl;
    cout << "Cyclops --> C" << endl;
    cout << "Zombies --> Z" << endl;

    cout << "Which monster are you fighting? Insert a letter: ";
    cin >> option;

    if (option == 'V') {
        string file = "FightStats.txt";
        ofstream outFile;
        outFile.open(file);
        if(outFile.is_open()) {
            outFile << "Weapon: Wooden sword" << endl;
        }
        outFile.close();
        cout << "Your weapon is a wooden sword!" << endl;
    }
    if (option == 'D') {
        string file = "FightStats.txt";
        ofstream outFile;
        outFile.open(file);
        if(outFile.is_open()) {
            outFile << "Weapon: Sword" << endl;
        }
        outFile.close();
        cout << "Your weapon is a sword!" << endl;
    }
    if (option == 'T' || option == 'O' || option == 'H') {
        string file = "FightStats.txt";
        ofstream outFile;
        outFile.open(file);
        if(outFile.is_open()) {
            outFile << "Weapon: Flaming sword" << endl;
        }
        outFile.close();
        cout << "Your weapon is a flaming sword!" << endl;
    }
    if (option == 'G') {
        string file = "FightStats.txt";
        ofstream outFile;
        outFile.open(file);
        if(outFile.is_open()) {
            outFile << "Weapon: Wooden club" << endl;
        }
        outFile.close();
        cout << "Your weapon is a wooden club!" << endl;
    }
    if (option == 'I') {
        string file = "FightStats.txt";
        ofstream outFile;
        outFile.open(file);
        if(outFile.is_open()) {
            outFile << "Weapon: Rope" << endl;
            outFile << "WARNING: Can destroy armor" << endl;
        }
        outFile.close();
        cout << "Your weapon is a rope!" << endl;
    }
    if (option == 'Z' || option == 'C') {
        string file = "FightStats.txt";
        ofstream outFile;
        outFile.open(file);
        if(outFile.is_open()) {
            outFile << "Weapon: Bow and arrow" << endl;
            outFile << "WARNING: Can destroy armor" << endl;
        }
        outFile.close();
        cout << "Your weapon is a bow and arrow!" << endl;
    }
    return '-';
}

/*
In this function, the fight starts. The player and the monster fight and the points values for numerous variables changes.
Only one can come out triumphant.
*/
int Monsters::setAttack(int numPoints, int numWater, int numFood, int boss_anger) {
    //int numPoints = 0;
    //int numFood = 100;
    //int numWater = 100;
    //int boss_anger = 0;
    bool a_condition = true;
    bool flag = false;
    int monPoints = 0;
    int monDamage = 0;


    // which monster are you fighting?
    char monster;
    cout << "Vampires --> V" << endl;
    cout << "Demons --> D" << endl;
    cout << "Trolls --> T" << endl;
    cout << "Ogres --> O" << endl;
    cout << "Goblins --> G" << endl;
    cout << "Giants --> I" << endl;
    cout << "Ghouls --> H" << endl;
    cout << "Cyclops --> C" << endl;
    cout << "Zombies --> Z" << endl;

    cout << "Which monster are you fighting? Insert a letter: ";
    cin >> monster;

    if (monster == 'V' || monster == 'D') { // Player wins, no armor damage
        monPoints = 200;
        monDamage = 50;

        string file = "FightStats.txt";
        ofstream outFile;
        outFile.open(file);
        if(outFile.is_open()) {
        
            // Round 1/Attack 1: You strike
            monPoints = monPoints - 100;
            cout << "Round 1 Status: " << endl;
            cout << "Your survival points: " << numPoints << endl;
            cout << "Monster survival points: " << monPoints << endl;
            cout << "Food points: " << numFood << endl;
            cout << "Water points: " << numWater << endl;
            cout << " " << endl;

            // Write data into file
            outFile << "Round 1 Status: " << endl;
            outFile << "Your survival points: " << numPoints << endl;
            outFile << "Monster survival points: " << monPoints << endl;
            outFile << "Food points: " << numFood << endl;
            outFile << "Water points: " << numWater << endl;
            outFile << " " << endl;
            

            // Round 2/Attack 2: Monster's turn
            numPoints = numPoints - monDamage;
            numFood = numFood - 10;
            numWater = numWater - 10;

            cout << "Round 2 Status: " << endl;
            cout << "Your survival points: " << numPoints << endl;
            cout << "Monster survival points: " << monPoints << endl;
            cout << "Food points: " << numFood << endl;
            cout << "Water points: " << numWater << endl;
            cout << " " << endl;

            // Write data into file
            outFile << "Round 2 Status: " << endl;
            outFile << "Your survival points: " << numPoints << endl;
            outFile << "Monster survival points: " << monPoints << endl;
            outFile << "Food points: " << numFood << endl;
            outFile << "Water points: " << numWater << endl;
            outFile << " " << endl;

            // Round 3/Attack 3: You strike back
            monPoints = monPoints - 100;
            if (monPoints == 0) {
                boss_anger = boss_anger + 50;

                cout << "Round 3 Status: You win!" << endl;
                cout << "Boss Anger: " << boss_anger << endl;
                cout << "Your survival points: " << numPoints << endl;
                cout << "Monster survival points: " << monPoints << endl;
                cout << "Food points: " << numFood << endl;
                cout << "Water points: " << numWater << endl;
                cout << " " << endl;

                // write data into file
                outFile << "Round 3 Status: You win!" << endl;
                outFile << "Boss Anger: " << boss_anger << endl;
                outFile << "Your survival points: " << numPoints << endl;
                outFile << "Monster survival points: " << monPoints << endl;
                outFile << "Food points: " << numFood << endl;
                outFile << "Water points: " << numWater << endl;
                outFile << " " << endl;

            }
        }
        outFile.close();

    }

    if (monster == 'T' || monster == 'O' || monster == 'G') { // Player wins T and O and G  // Attack 2: 500 numPoints // Attack 4: 400 numPoints // Attack 5: 400 numPoints --> you win
        monPoints = 300; // Attack 1: 200 monPoints // Attack 3: 100 monPoints // Attack 5: monPoints = 0
        monDamage = 100;
        char surrender;
        
        string file = "FightStats.txt";
        ofstream outFile;
        outFile.open(file);
        if(outFile.is_open()) {

            // Round 1/Attack 1: You strike
            monPoints = monPoints - 100;
            cout << "Round 1 Status: " << endl;
            cout << "Your survival points: " << numPoints << endl;
            cout << "Monster survival points: " << monPoints << endl;
            cout << "Food points: " << numFood << endl;
            cout << "Water points: " << numWater << endl;
            cout << " " << endl;

            // Write data into file
            outFile << "Round 1 Status: " << endl;
            outFile << "Your survival points: " << numPoints << endl;
            outFile << "Monster survival points: " << monPoints << endl;
            outFile << "Food points: " << numFood << endl;
            outFile << "Water points: " << numWater << endl;
            outFile << " " << endl;
            

            // Round 2/Attack 2: Monster's turn
            numPoints = numPoints - monDamage;
            numFood = numFood - 10;
            numWater = numWater - 10;

            cout << "Would you like to surrender? Insert Y or N: ";
            cin >> surrender;
            if (surrender == 'N') {
                cout << "Continue playing!" << endl;
                cout << " " << endl;
            }
            else {
                flag = true;
                if (flag == true) {
                    // bump back to normal space
                }
            }

            cout << "Round 2 Status: " << endl;
            cout << "Your survival points: " << numPoints << endl;
            cout << "Monster survival points: " << monPoints << endl;
            cout << "Food points: " << numFood << endl;
            cout << "Water points: " << numWater << endl;
            cout << " " << endl;

            // Write data into file
            outFile << "Round 2 Status: " << endl;
            outFile << "Your survival points: " << numPoints << endl;
            outFile << "Monster survival points: " << monPoints << endl;
            outFile << "Food points: " << numFood << endl;
            outFile << "Water points: " << numWater << endl;
            outFile << " " << endl;

            // Round 3/Attack 3: You strike back
            monPoints = monPoints - 100;

            cout << "LAST CHANCE: Would you like to surrender? Insert Y or N: ";
            cin >> surrender;
            if (surrender == 'N') {
                cout << "Continue playing!" << endl;
                cout << " " << endl;
            }
            else {
                flag = true;
                if (flag == true) {
                    // bump back to normal space
                }
            }

            boss_anger = boss_anger + 50;

            cout << "Round 3 Status: You win!" << endl;
            cout << "Boss Anger: " << boss_anger << endl;
            cout << "Your survival points: " << numPoints << endl;
            cout << "Monster survival points: " << monPoints << endl;
            cout << "Food points: " << numFood << endl;
            cout << "Water points: " << numWater << endl;
            cout << " " << endl;

            // Write data into file
            outFile << "Round 3 Status: You win!" << endl;
            outFile << "Boss Anger: " << boss_anger << endl;
            outFile << "Your survival points: " << numPoints << endl;
            outFile << "Monster survival points: " << monPoints << endl;
            outFile << "Food points: " << numFood << endl;
            outFile << "Water points: " << numWater << endl;
            outFile << " " << endl;

        }
        outFile.close();

        
    }
    if (monster == 'I' || monster == 'H') { // H loses, armor damage: I // Attack 2: 500 // Attack 4: 300 // Attack 5: 300 numPoints --> you lose 300 < 350
        monPoints = 300; // Attack 1: 200 // Attack 3: 100 // Attack 5: monPoints = 0
        monDamage = 200;
        char surrender;
        
        string file = "FightStats.txt";
        ofstream outFile;
        outFile.open(file);
        if(outFile.is_open()) {

            // Round 1/Attack 1: You strike
            monPoints = monPoints - 100;
            cout << "Round 1 Status: " << endl;
            cout << "Your survival points: " << numPoints << endl;
            cout << "Monster survival points: " << monPoints << endl;
            cout << "Food points: " << numFood << endl;
            cout << "Water points: " << numWater << endl;
            cout << " " << endl;

            // Write data into file
            outFile << "Round 1 Status: " << endl;
            outFile << "Your survival points: " << numPoints << endl;
            outFile << "Monster survival points: " << monPoints << endl;
            outFile << "Food points: " << numFood << endl;
            outFile << "Water points: " << numWater << endl;
            outFile << " " << endl;
            

            // Round 2/Attack 2: Monster's turn
            numPoints = numPoints - monDamage;
            numFood = numFood - 10;
            numWater = numWater - 10;

            cout << "Would you like to surrender? Insert Y or N: ";
            cin >> surrender;
            if (surrender == 'N') {
                cout << "Continue playing!" << endl;
                cout << " " << endl;
            }
            else {
                flag = true;
                if (flag == true) {
                    // bump back to normal space
                }
            }

            cout << "Round 2 Status: " << endl;
            cout << "Your survival points: " << numPoints << endl;
            cout << "Monster survival points: " << monPoints << endl;
            cout << "Food points: " << numFood << endl;
            cout << "Water points: " << numWater << endl;
            cout << " " << endl;

            // Write data into file
            outFile << "Round 2 Status: " << endl;
            outFile << "Your survival points: " << numPoints << endl;
            outFile << "Monster survival points: " << monPoints << endl;
            outFile << "Food points: " << numFood << endl;
            outFile << "Water points: " << numWater << endl;
            outFile << " " << endl;


            // Round 3/Attack 3: You strike back
            monPoints = monPoints - 100;

            cout << "LAST CHANCE: Would you like to surrender? Insert Y or N: ";
            cin >> surrender;
            if (surrender == 'N') {
                cout << "Continue playing!" << endl;
                cout << " " << endl;
            }
            else {
                flag = true;
                if (flag == true) {
                    // bump back to normal space
                }
            }

            cout << "Round 3 Status: " << endl;
            cout << "Your survival points: " << numPoints << endl;
            cout << "Monster survival points: " << monPoints << endl;
            cout << "Food points: " << numFood << endl;
            cout << "Water points: " << numWater << endl;
            cout << " " << endl;

            // Write data into file
            outFile << "Round 3 Status: " << endl;
            outFile << "Your survival points: " << numPoints << endl;
            outFile << "Monster survival points: " << monPoints << endl;
            outFile << "Food points: " << numFood << endl;
            outFile << "Water points: " << numWater << endl;
            outFile << " " << endl;

            // Round 4/Attack 4: Monster strikes back
            numPoints = numPoints - monDamage;
            numFood = numFood - 10;
            numWater = numWater - 10;

            if (numPoints < 350) {
                cout << "Round 4 Status: You lost too many points, you lose!" << endl;
                cout << "Boss Anger: " << boss_anger << endl;
                cout << "Your survival points: " << numPoints << endl;
                cout << "Monster survival points: " << monPoints << endl;
                cout << "Food points: " << numFood << endl;
                cout << "Water points: " << numWater << endl;
                cout << " " << endl;

                // Write data into file
                outFile << "Round 4 Status: You lost too many points, you lose!" << endl;
                outFile << "Boss Anger: " << boss_anger << endl;
                outFile << "Your survival points: " << numPoints << endl;
                outFile << "Monster survival points: " << monPoints << endl;
                outFile << "Food points: " << numFood << endl;
                outFile << "Water points: " << numWater << endl;
                outFile << " " << endl;
            }
            else if (monster == 'I') {
                a_condition = false;
                if (a_condition == false) {
                    cout << "Round 4 Status: Oh no! Your armor broke! You lose!" << endl;
                    cout << "Boss Anger: " << boss_anger << endl;
                    cout << "Your survival points: " << numPoints << endl;
                    cout << "Monster survival points: " << monPoints << endl;
                    cout << "Food points: " << numFood << endl;
                    cout << "Water points: " << numWater << endl;
                    cout << " " << endl;

                    // Write data into file
                    outFile << "Round 4 Status: Oh no! Your armor broke! You lose!" << endl;
                    outFile << "Boss Anger: " << boss_anger << endl;
                    outFile << "Your survival points: " << numPoints << endl;
                    outFile << "Monster survival points: " << monPoints << endl;
                    outFile << "Food points: " << numFood << endl;
                    outFile << "Water points: " << numWater << endl;
                    outFile << " " << endl;
                }
            }
        }
        outFile.close();
        
    }
    if (monster == 'C' || monster == 'Z') { // armor damage: both --> you lose // Attack 2: 600 numPoints // Attack 4: 400 numPoints // Attack 5: 400 monPoints --> you lose
        monPoints = 500; // Attack 1: 400 monPoints // Attack 3: 300 monPoints // Attack 5: 200 monPoints
        monDamage = 200;
        char surrender;
        
        string file = "FightStats.txt";
        ofstream outFile;
        outFile.open(file);
        if(outFile.is_open()) {

            // Round 1/Attack 1: You strike
            monPoints = monPoints - 100;
            cout << "Round 1 Status: " << endl;
            cout << "Your survival points: " << numPoints << endl;
            cout << "Monster survival points: " << monPoints << endl;
            cout << "Food points: " << numFood << endl;
            cout << "Water points: " << numWater << endl;
            cout << " " << endl;

            // Write data into file
            outFile << "Round 1 Status: " << endl;
            outFile << "Your survival points: " << numPoints << endl;
            outFile << "Monster survival points: " << monPoints << endl;
            outFile << "Food points: " << numFood << endl;
            outFile << "Water points: " << numWater << endl;
            outFile << " " << endl;
            

            // Round 2/Attack 2: Monster's turn
            numPoints = numPoints - monDamage;
            numFood = numFood - 10;
            numWater = numWater - 10;

            cout << "Would you like to surrender? Insert Y or N: ";
            cin >> surrender;
            if (surrender == 'N') {
                cout << "Continue playing!" << endl;
                cout << " " << endl;
            }
            else {
                flag = true;
                if (flag == true) {
                    // bump back to normal space
                }
            }

            cout << "Round 2 Status: " << endl;
            cout << "Your survival points: " << numPoints << endl;
            cout << "Monster survival points: " << monPoints << endl;
            cout << "Food points: " << numFood << endl;
            cout << "Water points: " << numWater << endl;
            cout << " " << endl;

            // Write data into file
            outFile << "Round 2 Status: " << endl;
            outFile << "Your survival points: " << numPoints << endl;
            outFile << "Monster survival points: " << monPoints << endl;
            outFile << "Food points: " << numFood << endl;
            outFile << "Water points: " << numWater << endl;
            outFile << " " << endl;


            // Round 3/Attack 3: You strike back
            monPoints = monPoints - 100;

            cout << "LAST CHANCE: Would you like to surrender? Insert Y or N: ";
            cin >> surrender;
            if (surrender == 'N') {
                cout << "Continue playing!" << endl;
                cout << " " << endl;
            }
            else {
                flag = true;
                if (flag == true) {
                    // bump back to normal space
                }
            }

            cout << "Round 3 Status: " << endl;
            cout << "Your survival points: " << numPoints << endl;
            cout << "Monster survival points: " << monPoints << endl;
            cout << "Food points: " << numFood << endl;
            cout << "Water points: " << numWater << endl;
            cout << " " << endl;

            // Write data into file
            outFile << "Round 3 Status: " << endl;
            outFile << "Your survival points: " << numPoints << endl;
            outFile << "Monster survival points: " << monPoints << endl;
            outFile << "Food points: " << numFood << endl;
            outFile << "Water points: " << numWater << endl;
            outFile << " " << endl;


            // Round 4/Attack 4: Monster strikes back
            numPoints = numPoints - monDamage;
            numFood = numFood - 10;
            numWater = numWater - 10;
            a_condition = false;

            if (a_condition == false) {
                cout << "Round 4 Status: Oh no! Your armor broke! You lose!" << endl;
                cout << "Boss Anger: " << boss_anger << endl;
                cout << "Your survival points: " << numPoints << endl;
                cout << "Monster survival points: " << monPoints << endl;
                cout << "Food points: " << numFood << endl;
                cout << "Water points: " << numWater << endl;
                cout << " " << endl;

                // Write data into file
                outFile << "Round 4 Status: Oh no! Your armor broke! You lose!" << endl;
                outFile << "Boss Anger: " << boss_anger << endl;
                outFile << "Your survival points: " << numPoints << endl;
                outFile << "Monster survival points: " << monPoints << endl;
                outFile << "Food points: " << numFood << endl;
                outFile << "Water points: " << numWater << endl;
                outFile << " " << endl;
            }
        }
        outFile.close();
    }
    return 0;
}

/*int main() {
    cout << getMonster() << endl;
    cout << getWeapon() << endl;
    cout << setAttack() << endl;
}*/

// TO-DO: Add weapons factor