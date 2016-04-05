#include<iostream>
#include<iomanip>
#include<string>
#include<algorithm>
using namespace std;
const int NUM_PEOPLE = 5; //global
void printNames(string names[], int size, bool isSorted);
void printNumberOfTickets(int numberOfTickets[], int size);
void searchForName(string name ,string names[], int numberOfTickets[]);
void selectionSort(string names[], int size);
int main()
{

    string name[NUM_PEOPLE];
    int numberOfTickets[NUM_PEOPLE];
    string nameToSearch = "";
    for(int i = 0; i < NUM_PEOPLE; i++)
	{
        cout << "Enter Name Tickets?";
        cin >> name[i] >> numberOfTickets[i];
        cout << endl;
    }
    cout << "Search For?";
    cin >> nameToSearch;
    cout << endl;
    searchForName(nameToSearch, name, numberOfTickets);
    printNames(name, NUM_PEOPLE, true);
    return 0;
}
void printNumberOfTickets(int numberOfTickets[], int size)
{
    for(int i = 0; i < NUM_PEOPLE; i++)
    {
        cout << numberOfTickets[i] << endl;
    }
}
void printNames(string names[], int size, bool isSorted=false)
{
    if(isSorted)
    {
        selectionSort(names, NUM_PEOPLE);
        cout << "The following people have sold tickets:" << endl;
        for(int i = 0; i < NUM_PEOPLE; i++)
        {
            cout << names[i] << endl;
        }
    }
    else{
        for(int i = 0; i < NUM_PEOPLE; i++)
        {
            cout << names[i] << endl;
        }
    }
}
void searchForName(string name ,string names[], int numberOfTickets[])
{
    bool isFound = false;
    for(int i = 0; i < NUM_PEOPLE; i++)
    {
        if(name.compare(names[i]) == 0){
            isFound = true;
            int indexOfName = i;
            cout << names[i] << " sold " << numberOfTickets[i] << " tickets." <<endl;
        }
    }
    if(!isFound)
        cout << name << " is not found!" <<endl;
}
void selectionSort(string names[], int size)
{
    for(int i = 0; i < size - 1; i++)
    {
        int minimum = i;
        for(int j = i + 1; j < size; j++)
        {
            if(names[j] < names[minimum])
                minimum = j;
        }
        swap(names[i], names[minimum]);
    }
}
