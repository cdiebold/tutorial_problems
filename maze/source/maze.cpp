#include<iostream>
#include<string>
#include<fstream>

using namespace std;
char*[][] readFile(string fileName);
int main()
{
    const int ROWS = 10;
    const int COLS = 20;
    const int SMALL_ROWS = 4;
    const int SMALL_COLS = 8;
    const int START_ROW = 1;
    const int START_COL = 0;
    char *maze[][];
    string fileName;
    cout << "Maze Filename?"
    cin >> fileName;
    cout << endl;
    *maze = readFile(fileName);

}
char*[][] readFile(string fileName)
{
    ifstream mazeFile;
    if(fileName.compare("maze.txt") == 0)
    {
        *maze = new char[ROWS][COLS];
    }
    else if(fileName.compare("small_maze.txt") == 0)
    {
        *maze = new char[SMALL_ROWS][SMALL_COLS];
    }
    else {
        cout << "Incorrect fileName" << endl;
        exit(1);
    }
    mazeFile.open(fileName)
    if(mazeFile.fail())
    {
        cerr << "File did not open!" << endl;
        return;
    }
    else{
        //parse the file
    }
}
