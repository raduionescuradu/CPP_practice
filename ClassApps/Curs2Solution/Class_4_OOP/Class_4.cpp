#include "Class_4.h"

void Person::setPerson(const std::string name, const std::string surname, const int age)
{
	this->mName = name;
	this->mSurname = surname;
	this->mAge = age;
}

std::string Person::getName() {
	return this->mName;
}


//for class members use notarion with m<variable name>, prefix them with 'm'
void Person::setName(std::string name)
{
	mName = name;
}