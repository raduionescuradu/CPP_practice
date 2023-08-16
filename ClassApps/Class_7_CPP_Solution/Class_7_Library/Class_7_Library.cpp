#include "Class_7_Library.h"
#include <iostream>

using namespace std;


std::string Person::getName()
{
	return this->mNume;
}

bool Person::setName(std::string name)
{
	if (name.empty())
		return false;
	this->mNume = name;
	return true;
}

int Person::getAge()
{
	return this->mVarsta;
}
bool Person::setAge(int age)
{
	if (age < 0)
	{
		cout << "age should be a positive number!" << endl;
		return false;
	}
		
	this->mVarsta = age;
	return true;
}