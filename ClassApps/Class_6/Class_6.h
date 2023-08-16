#pragma once

#ifdef Class_6_EXPORT
#define Class_6_API __declspec(dllexport)
#else
#define Class_6_API __declspec(dllimport)
#endif

void Class_6_API stringInitialization();

void Class_6_API vectorOperations();

void Class_6_API mapOperations();