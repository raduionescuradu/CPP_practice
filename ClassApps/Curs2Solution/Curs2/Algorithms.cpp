#include "Algorithms.h"
#include <iostream>
#include <stdio.h>

// print foo when index is divisiable by 2
// print foo when index is divisiable by 5
// print both when conditions meet
bool FooBarApp(int counter)
{
	if (counter <= 0) // validam datele de intrare
		return false;
	
	for (int index = 0; index < counter; index++)
	{
		//bool check = false;
		if (index % 2 == 0)
			std::cout << "foo";
		//else
		//	check = true;
		if (index % 5 == 0)
			std::cout << "bar";
		//else
		//	check = true;
		
		//if (!check)
		std::cout << " " /* << index */ << std::endl;
	}

	std::cout << "while loop: " << std::endl;
	int index = 0;
	while (index < counter)
	{
		if (index % 2 == 0)
			std::cout << "foo";
		if (index % 5 == 0)
			std::cout << "bar";

		index++;
		std::cout << " " /* << index */ << std::endl;
	}



	std::cout << "do while loop: " << std::endl;
	
	index = 0;
	do
	{
		if (index % 2 == 0)
			std::cout << "foo";
		if (index % 5 == 0)
			std::cout << "bar";

		index++;
		std::cout << " " /* << index */ << std::endl;
	} while (index < counter);


	return true;
}


bool JumpCondition()
{
	int counter = 25;

	for (int i = 0; i < counter; i++)
	{
		if (i == 24)
		{
			return false;
			std::cout << LogLevel::ERROR;
		}
		if (i % 23 == 0 && i > 10)
			break;				// will exit the loop
		if (i % 3 == 0)
		{
			std::cout << LogLevel::WARNING;
			continue;			// will go to the next iteration
		}
		if (i % 2 == 0)
			std::cout << i;

	}
	
	std::cout << "for loop executed succesfully" << std::endl;

	return true;
}


bool workingWithStructs()
{
	Books myBook;
	myBook.authorName = "Jules Verne";
	//myBook.title = "Calatorie spre centrul pamantului";
	setBookName(myBook, "Calatorie spre centrul pamantului");
	myBook.bookID = 51;
	
	return true;
}

void setBookName(Books& book, std::string name)
{
	book.title[50] = NULL;
	strncpy_s(book.title, name.c_str(), MAX_TITLE);

}