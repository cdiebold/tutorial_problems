/* 
 * File:   Maze.cpp
 * Author: christopherdiebold
 * 
 * Created on April 4, 2016, 11:37 PM
 */

#include "Maze.h"
#include <fstream>
#include <iostream>
using namespace std;

//defualts to small maze

Maze::Maze() {
    fileName = "small_maze.txt";
    isSmallMaze = true;
    inputStream.open(fileName, ios::in);
    if (inputStream.fail()) {
        cout << "Failed to open " << fileName << endl;
        exit(1);
    }
    maze = readMazeFile(fileName);

}

Maze::~Maze() {
    if (isSmallMaze) {
        for (int i = 0; i < SMALL_COL; ++i) {
            delete[] maze[i];
        }
        delete[] maze;
    } else {
        for (int i = 0; i < LRG_COL; ++i) {
            delete[] maze[i];
        }
        delete[] maze;
    }

}

char** Maze::readMazeFile(string fileName) {
    char** maze;
    if (fileName == "small_maze.txt") {
        maze = new char*[SMALL_COL];
        for (int row = 0; row < SMALL_ROW; row++) {
            //initialize every column in the row
            maze[row] = new char[SMALL_COL];

        }
        //Read maze from the file.
        for (int r = 0; r < SMALL_ROW; r++) {
            for (int c = 0; c < SMALL_COL; c++) {
                inputStream >> maze[r][c];
            }

        }
        return maze;

    } else if (fileName == "maze.txt") {
        maze = new char*[LRG_COL];
        for (int row = 0; row < LRG_ROW; row++) {
            //initialize every column in the row
            maze[row] = new char[LRG_COL];
        }
        //Read maze from the file.
        for (int r = 0; r < LRG_ROW; r++) {
            for (int c = 0; c < LRG_COL; c++) {
                inputStream >> maze[r][c];
            }

        }
        return maze;
    } else {
        cout << "incorrect file name: " << fileName << endl;
        exit(1);
    }
}

void Maze::printMaze() {
    if (isSmallMaze) {
        for (int row = 0; row < SMALL_ROW; row++) {
            for (int col = 0; col < SMALL_COL; col++) {
                cout << maze[row][col];
            }
        }
    } else {
        for (int row = 0; row < LRG_ROW; row++) {
            for (int col = 0; col < LRG_COL; col++) {
                cout << maze[row][col];
            }
        }
    }

}



