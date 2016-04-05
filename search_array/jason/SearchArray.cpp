///////////////////////////////////
//Jason Gerhardt
//4-1-16
//C2334_Ch08_Hmwk2_SearchArray
///////////////////////////////////

#include<iostream>
#include<math.h>
#include<string>
#include<iomanip>
#include<algorithm>

using namespace std;

const int NUM_PEOPLE = 5;

void getNameAndTickets(string name[], int tickNum[]);
void printSortedNames(string name[]); //function to print Sorted Names
void searchPerson(string name[], int tickNum[]);

int main()
{
	string name[NUM_PEOPLE];//name entered by user
	int tickNum[NUM_PEOPLE];//ticket number entered by user
	int totalTickets = 0;
	double percent = 0;
	

	getNameAndTickets(name, tickNum);

	searchPerson(name, tickNum);

	printSortedNames(name);

	system("PAUSE");
	return 0 ;
}

void getNameAndTickets(string name[], int tickNum[]) // function to get info from user
{	
	for(int i = 0; i < NUM_PEOPLE; i++)
	{
		cout << "Enter Name Tickets? ";
		cin >> name[i] >> tickNum[i];
		cout << endl;
	}
	
	
}

void printSortedNames(string name[]) //function to print Sorted Names
{
	
	cout << "The following people have sold tickets:" << endl;
	string temp;
	int i;
	int j;
	//int N = sizeof(name)/sizeof(name[0]); //Get the array size

	//sort(name,name+N); //Use the start and end like this

	for(i = 0; i < NUM_PEOPLE; i++)
	{		
		for(j = i + 1; j < NUM_PEOPLE; j++)
		{
			temp = name[i];
			name[i] = name[j];
			name[j] = temp;
			//cout << name[i] << endl;
		}
		//cout << name[i] << endl;
	}
	cout << name[i] << endl;
	cout << endl;
}

void searchPerson(string name[], int tickNum[])
{



}






