#include <iostream>
#include "../Class_7_Library/Class_7_Library.h"

int main()
{
	std::cout << "hello world" << std::endl;

	Person newPerson_A;
	Person newPerson_B("andrei", 20);

	newPerson_A.setName("mihai");
	newPerson_A.setAge(22);

	return 0;
}