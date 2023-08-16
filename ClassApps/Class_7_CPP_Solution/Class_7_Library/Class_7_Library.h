#pragma once
#include <string>

#ifdef Class_7_Library_EXPORT
#define Class_7_Library_API __declspec(dllexport)
#else
#define Class_7_Library_API __declspec(dllimport)
#endif 


class Class_7_Library_API Person
{
	std::string mNume;
	int mVarsta;
public:
	Person() {
		mNume = "";
		mVarsta = -1;
	}

	// initialisation list to speed up object construction
	Person(std::string nume, int varsta) : mNume(nume), mVarsta(varsta)
	{}

	std::string getName();
	bool setName(std::string name);

	int getAge();
	bool setAge(int age);
};