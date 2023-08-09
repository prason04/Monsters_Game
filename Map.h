// NOTE: YET TO BE ADJUSTED TO SUIT MY PROJECT

#ifndef MAP_H
#define MAP_H

#include <iostream>

using namespace std;

class Map
{
private:
    const char UNEXPLORED = '-'; // marker for unexplored spaces
    const char EXPLORED = ' ';   // marker for explored spaces
    const char ROOM = 'R';       // marker for room locations
    const char NPC = 'N';        // marker for NPC locations
    const char PARTY = 'X';      // marker for party position
    const char EXIT = 'E';       // marker for dungeon exit
    const char SPACE = 'S';      // marker for Normal Space locations
    const char MONSTER = 'M';    // marker for Monster locations

    static const int num_rows_ = 12; // number of rows in map
    static const int num_cols_ = 12; // number of columns in map
    static const int max_npcs_ = 5;  // max non-player characters
    static const int max_monsters_ = 5; // max monsters
    static const int max_rooms_ = 5; // max number of rooms
    static const int max_spaces_ = 5; // max number of normal spaces

    int player_position_[2];              // player position (row,col)
    int dungeon_exit_[2];                 // exit location of the dungeon
    int npc_positions_[max_npcs_][3];     // stores the (row,col) positions of NPCs present on map and if they have been found
    int monster_positions_[max_monsters_][3]; // stores the (row,col) positions of monsters present on map and if they have been found
    int room_positions_[max_rooms_][2];   // stores the (row,col) positions of rooms present on map
    int space_positions_[max_spaces_][2]; // stores the (row,col) positions of spaces present on map
    char map_data_[num_rows_][num_cols_]; // stores the character that will be shown at a given (row,col)

    int npc_count_;  // stores number of misfortunes currently on map
    int monsters_count_; // stores number of monsters currently on map
    int room_count_; // stores number of rooms currently on map
    int spaces_count_; // stores the number of spaces currently on map
public:
    Map();

    void resetMap();

    // getters
    int getPlayerRow();
    int getPlayerCol();
    int getDungeonExitRow();
    int getDungeonExitCol();
    int getRoomCount();
    int getNPCCount();
    int getNumRows();
    int getNumCols();
    bool isOnMap(int row, int col);
    bool isNPCLocation(int row, int col);
    bool isRoomLocation(int row, int col);
    bool isSpaceLocation(int row, int col); // added function
    bool isMonsterLocation(int row, int col); // added function
    bool isExplored(int row, int col);
    bool isFreeSpace(int row, int col);
    bool isDungeonExit(int row, int col);

    // setters
    void setPlayerPosition(int row, int col);
    void setDungeonExit(int row, int col);

    // other
    void displayMap();
    bool move(char); //look
    bool addNPC(int row, int col);
    bool addRoom(int row, int col);
    bool addSpace(int row, int col); // added function
    bool addMonster(int row, int col); // added function
    bool removeNPC(int row, int col);
    bool removeRoom(int row, int col);
    void exploreSpace(int row, int col);
};

#endif