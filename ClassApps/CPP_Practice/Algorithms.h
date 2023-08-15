#pragma once

#include <string>

enum LogLevel { INFO = 0, DEBUG, WARNING, ERROR = -1 };

bool FooBarApp(int counter);

bool JumpConditions();

#define MAX_TITLE_LEN 50

struct Books
{
	// homework: how do we use the char array to get data into it?
	char title[MAX_TITLE_LEN];
	//std::string title;		// one way to do it
	// char* title; 

	std::string authorName;
	int bookID;
};

void setBookName(Books& book, std::string name);

bool workingWithStructs();