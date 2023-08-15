#include "Class_6.h"
#include <string>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

void stringInitialization()
{
	std::string myNewString;		// first declare the object
	myNewString = "Hello World";	// then initialize

	cout << myNewString.size();
	cout << myNewString.capacity();

	if (!myNewString.empty())
		myNewString.clear();
	
	
	myNewString.resize(0);			// resize to free some space for the string
			// -> efect doar pe size nu si pe capacity
	myNewString.shrink_to_fit();	// resize the object to fit the content (this case, null)
	
	string mySecondString = "hello world, again"; // declare and initialise in one step

}


void vectorOperations()
{
	vector<int> myVector;
	if (myVector.empty())
		myVector.resize(10);

	vector<int>::iterator myIterator = myVector.begin();
	
	
	// vector<int>::reverse_iterator myBackIterator = myVector.end();	// implement functionality for back iteration
	
	
	int index = 0;
	while (myIterator != myVector.end())
	{
		// myIterator = 1;
		// myVector[myIterator] = 1;
		// myIterator[0] = 1;			// could work...

		*myIterator = index;			// use pointers to affect the values where the iterator points

		myIterator++;
		index++;
	}

}

void mapOperations()
{
	map<int, string> myMap = { {1, "one"}, {2, "two"} };

	pair<int, string> firstPair = { 3, "alpha" };
	pair<int, string> secondPair = { 2, "beta" };


	map<int, string> mySecondMap = { firstPair, secondPair };
	
	/*
	for (int i = 0; i < myMap.size(); ++i)
	{
		cout << myMap.at(i) << endl;		// homework, how to access map by index
	}
	*/


	map<int, string>::iterator myMapIterator;

	for (myMapIterator = myMap.begin(); myMapIterator != myMap.end(); myMapIterator++)
	{
		cout << myMapIterator->first << " " << myMapIterator->second;			// access map by iterator
	}


	myMap.insert(firstPair);


	// anouthe approach to traverse the map, can be placed into for loops also
	
	int index = 1;
	auto it = myMap.begin();
	advance(it, index);
	cout << it->first << " " << it->second;



}
