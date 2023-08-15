#include "Class_4.h"
#include <iostream>

Person::Person(std::string name, std::string surname, int age)
{
	this->mName = name;
	mSurname = surname;
	mAge = age;
}

void Person::setPerson(const std::string name, const std::string surname, const int age)
{
	this->mName = name;
	this->mSurname = surname;
	//this->mAge = age;
	if (!setAge(age))
		std::cout << "Error in constructor!";
}

std::string Person::getName()
{
	return this->mName;
}

// for class members use notation with m<variable name>, prefix them with 'm'
void Person::setName(std::string name)
{
	mName = name;
}

bool Person::setAge(int age)
{
	if (age < 0 || age > 200)
	{
		//std::cout << "Age error";
		// would need to define a stream to supply to the class, in order to log something
		//logger << "Age error";		// now will get an error
		// homeworK:
		// if log level is set appropriately, the message will get to specified output
		//logger << "Age error" << age;	// TO implement this kind of call to the logger
		return false;
	}
	mAge = age;
	return true;
}