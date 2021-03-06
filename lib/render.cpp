#include <iostream>
#include <stdio.h>

using namespace std;

string escapeMenu[8] {
    "###################",
    "# 1    CLOSE      #",
    "# 2  SETTINGS     #",
    "###################"
};

string mainMenu[5] {
    "####################################",
    "#                                  #",
    "# 1            START             1 #",
    "#                                  #",
    "####################################",
};

void drawMainMenu() {
    for (int y = 0; y < 5; y++) {
        for (int x = 0; x < mainMenu[y].length(); x++) {
            cout << mainMenu[y][x];
        }
        cout << endl;
    }
}

void drawEscapeMenu() {
    for (int y = 0; y < 4; y++) {
        for (int x = 0; x < escapeMenu[y].length(); x++) {
            cout << escapeMenu[y][x];
        }
        cout << endl;
    }
}

void drawMap(int px, int py, GameMap map) {
    for (int y = 0; y < 16; y++) {
        for (int x = 0; x < map[y].length(); x++) {
            if (x == px && y == py) {
                cout << "$";
            }else {
                cout << map[y][x];
            }
        }
        cout << endl;
    }
}