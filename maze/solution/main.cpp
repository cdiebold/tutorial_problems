
/*
 * File:   main.cpp
 * Author: christopherdiebold
 *
 * Created on April 4, 2016, 11:36 PM
 */

#include "Maze.h"
#include <iostream>

using namespace std;

int main() {
    string filename;
    cout << "Maze Filename?";
    cin >> filename;
    cout << endl;

    Maze * maze = new Maze();
    maze->printMaze();


    //system("PAUSE");
    return 0;
}// g++ main.cpp Maze.cpp -o maze
