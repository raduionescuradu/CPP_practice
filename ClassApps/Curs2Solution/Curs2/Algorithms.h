#pragma once
#include <string>

enum LogLevel { INFO = 0, DEBUG, WARNING, ERROR = -1 };

bool FooBarApp(int counter);
bool JumpCondition();

#define MAX_TITLE 50

struct Books
{
	char title[MAX_TITLE];
	//char* title;

	//std::string title;			// one way to do it

	std::string authorName;
	int bookID;
};

bool workingWithStructs();

void setBookName(Books& book, std::string name);