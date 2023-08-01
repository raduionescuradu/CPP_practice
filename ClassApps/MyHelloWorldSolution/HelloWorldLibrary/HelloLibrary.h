#pragma once

#include <string>

#ifdef HelloLibrary_EXPORT
	#define HelloLibrary_API __declspec(dllexport)
#else
	#define HelloLibrary_API __declspec(dllimport)
#endif

bool HelloLibrary_API writeMessage(std::string input);
