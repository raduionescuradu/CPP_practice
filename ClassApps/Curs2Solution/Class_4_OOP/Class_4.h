#pragma once
#include <string>
#include <iostream>

/*
	headers include the files they are actively using
	sources include all they need to do the implementation

*/


//export function and data from library
#ifdef Class_4_OOP_EXPORT
#define Class_4_API __declspec(dllexport)
#else
#define Class_4_API __declspec(dllimport)
#endif

// first iteration, no CTOR or DTOR implemented, uses default ones, no access permission set
class Class_4_API Person
{
	//for class members use notarion with m<variable name>, prefix them with 'm'
private:
	std::string mName;
	std::string mSurname;
	int mAge;
	myLogger mMyLogger;
public:
	Person()
	{
		mName = "";
		mSurname = "";
		mAge = 0;
	}
	Person(std::string name, std::string surname, int age);

	void setPerson(const std::string name, const std::string surname, const int age);

	std::string getName();
	void setName(std::string name);

	bool setAge(int age);
};

// implement simple logger class to be used in above example

enum class Class_4_API LOG_LEVEL { INFO = 0, WARNING, EROR, DEBUG };
enum class Class_4_API LOG_OUTPUT { CONSOLE, FILE, NONE};

// ideas to learn through logger app:
// operator overloading
// would need a single instanceof logger calss -> singleton pattern (vezi refactoring guru - singleton)
// - implement specific methods

class Class_4_API myLogger
{
private:
	LOG_LEVEL mLogLevel;
	LOG_OUTPUT mLogOutput;
	std::string mLogFile = "";
	bool success = false;
	int sLogIndex;					// homework - do something about this, use ad static
public:
	myLogger()
	{
		mLogLevel = LOG_LEVEL::INFO;
		mLogOutput = LOG_OUTPUT::CONSOLE;
		sLogIndex = 0;
	}
	myLogger(std::string logFilePath)
	{
		myLogger();
		this->mLogFile = logFilePath;
	}

	std::ostream& operator<< (std::ostream& out)
	{
		out << (int)mLogLevel << " "
			<< "(" << __FILE__ << ", "
			<< __FUNCTION__ << ", "
			<< __LINE__ << ")";
		return out;
	}

};
