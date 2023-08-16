#include "Algorithms.h"
#include <iostream>

// print foo when index is divisible by two
// print bar when index is divisible by five
// print both when conditions are meet
bool FooBarApp(int counter)
{
	if (counter <= 0)		// validate input data, checks that counter is greater than 0
		return false;

	for (int index = 0; index < counter; index++)
	{
		if (index % 2 == 0)
			std::cout << "foo";
		if (index % 5 == 0)
			std::cout << "bar";
		std::cout << " " << std::endl;
	}

	std::cout << " While loop: " << std::endl;
	int index = 0;
	while (index < counter)
	{
		if (index % 2 == 0)
			std::cout << "foo";
		if (index % 5 == 0)
			std::cout << "bar";

		index++;			// remember to update the index!
	}

	std::cout << "do While loop" << std::endl;

	index = 0;
	do 
	{
		if (index % 2 == 0)
			std::cout << "foo";
		if (index % 5 == 0)
			std::cout << "bar";

		index++;			// remember to update the index!
	} while (index < counter);

	return true;
}


bool JumpConditions()
{
	int counter = 25;

	for (int i = 0; i < counter; i++)
	{	
		if (i == 24)
		{
			std::cout << LogLevel::ERROR;
			return false;
		}
		if (i % 23 == 0 && i > 10)	// will stop the for loop and exit it
			break; 

		if (i % 3 == 0)		// will go to next iteration when this condition is true
		{
			std::cout << LogLevel::WARNING;
			continue;
		}
		if (i % 2 == 0)
			std::cout << i;
	}

	std::cout << " for loop executed successfully";

	return true;
}


bool workingWithStructs()
{
	Books myBook;
	myBook.authorName = "Jules Verne";
	setBookName(myBook, "Calatorie spre centrul pamantului");
	//myBook.title = "Calatorie spre centrul pamantului";
	//myBook.title = new char* ("Calatorie spre centrul pamantului");
	myBook.bookID = 51;

	return true;
}


void setBookName(Books& book, std::string name)
{
	book.title[50] = NULL;
	strncpy_s(book.title, name.c_str(), MAX_TITLE_LEN);
}