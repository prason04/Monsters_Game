------------------------
HOW TO COMPILE AND RUN
------------------------
Compile: g++ -std=c++17 MainMenu.cpp NormalSpaceDriver.cpp NormalSpace.cpp Status.cpp Shop.cpp ShopDriver.cpp Rooms.cpp RoomsDriver.cpp Monsters.cpp MonstersDriver.cpp Map.cpp MapDriver.cpp
Run: ./a.out
------------------------
DEPENDENCIES
------------------------
Map.h, Monsters.h, NormalSpace.h, Rooms.h, Shop.h, and Status.h must be in the same directory as the cpp files in order to compile.
------------------------
SUBMISSION INFORMATION
------------------------
CSCI1300 Fall 2022 Project 3
Author: Prachi Soni
Recitation: 306 - Prachi Soni
Date: Dec 1, 2022
------------------------
ABOUT THIS PROJECT
------------------------
This project is about a traveler who's goal is to reach the end of their travels.
However that proves to be a challenge as the traveler (the player) comes up against numerous monsters.
In order to get through their travels safely the player must be wary of the points they have for survival, food, water, and more as they make their way to the end of the game.
They must make it to the end of the game without any of their points reaching zero, and must make sure that the boss monster's anger doesn't reach 100, else it's game over.