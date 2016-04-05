/* 
 * File:   Maze.h
 * Author: christopher diebold
 *
 * Created on April 4, 2016, 11:37 PM
 */

#ifndef MAZE_H
#define MAZE_H

#include<string>
#include<fstream>

class Maze {
public:
    Maze(); //defaults to small maze
    Maze(std::string fileName);
    ~Maze();
    void printMaze();

private:
    const int SMALL_ROW = 4;
    const int SMALL_COL = 8;
    const int LRG_ROW = 10;
    const int LRG_COL = 20;
    char** maze;
    std::ifstream inputStream;
    std::string fileName;
    bool isSmallMaze;


    char** readMazeFile(std::string filename);


};

#endif /* MAZE_H */

