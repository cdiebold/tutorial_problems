/////////////////////
//Jason Gerhardt
//3-28-16
//C2334_Proj3_Maze
////////////////////

#include<iostream>
#include<math.h>
#include<string>
#include<iomanip>
#include<algorithm>
#include<fstream>
#include<cstdlib>

using namespace std;

const int ROWS = 10;
const int COLUMNS = 20;

int main()
{
	ofstream outMazeFile;
	string MazeFile;

	cout << "Maze Filename? ";
	cin >> MazeFile;
	cout << endl;

	outMazeFile.open(MazeFile.c_str());

	cout << MazeFile;



	system("PAUSE");
	return 0;
}