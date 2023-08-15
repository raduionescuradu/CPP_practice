#include "Algorithms.h"
#include "../MemoryManagement/MemoryManagement.h"
#include "../Class_4_OOP/Class_4.h"
#include "../Class_6/Class_6.h"

#include <iostream>

void main()
{
	// Class 6
	/*

	c-strings vs. std::strings	
	String Initialization	

	Useful Methods	
	String Operations	

	Iterators	
	Vector	
	String	
	Map	
	Methods	
	STL and Polymorphism - casting up/down
	*/
	mapOperations();
	//vectorOperations();
	//stringInitialization();

	return;

	// Class 4
	Person myPerson;
	myPerson.setPerson("Ion", "Popescu", 22);

	std::cout << myPerson.getName();
	myPerson.setAge(-1);

	// Class 3
	myPointers();

	myMatrix();

	workingWithStructs();

	if (JumpConditions())
		std::cout << "call was successfull" << std::endl;
	else
		std::cout << "error executing the method " << std::endl ;

	FooBarApp(30);

	std::cout << "Hello world!";
}
