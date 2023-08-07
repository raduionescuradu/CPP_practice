#include "Algorithms.h"
#include "../MemoryManagement/MemoryManagement.h"
#include "../Class_4_OOP/Class_4.h"
#include <iostream>


void main()
{
	
	Person myPerson;

	myPerson.setPerson("Ion", "Popescu", 22);

	std::cout << myPerson.getName() << std::endl;

	// myPointers(); class 3

	// myMatrix();


	std::cout << "hello world! " << std::endl;

	if (JumpCondition())
		std::cout << "call was successfull" << std::endl;
	else
		std::cout << "error executing the method" << std::endl;



	// FooBarApp(30);

}
