#include "Class_4.h"
#include <iostream>

Person::Person(std::string name, std::string surname, int age)
{
	mName = name;
	mSurname = surname;
	mAge = age;
}

void Person::setPerson(const std::string name, const std::string surname, const int age)
{
	this->mName = name;
	this->mSurname = surname;
	//this->mAge = age;
	if (!setAge(age))
		std::cout << "error in CTOR" << std::endl;
}

std::string Person::getName()
{
	return this->mName;
}

void Person::setName(std::string name)
{
	mName = name;
}

bool Person::setAge(int age)
{
	if (age < 0 || age > 200)
	{
		// std::cout << "age error" << std::endl;
		// would need a stream to supply the class, in order to log something
		mMyLogger << "age error";		// now will get an error

		// homework
		// if log level is set appropriatelu, the message will get to specified output
		logger(ERROR) << "age error " << age; // to implement this kind of call to the logger

		return false;
	}
	mAge = age;
	return true;
}