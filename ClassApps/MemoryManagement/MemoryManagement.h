#pragma once
#ifdef MemoryManagement_EXPORT
#define MemoryManagement_API __declspec(dllexport)
#else
#define MemoryManagement_API __declspec(dllimport)
#endif

void MemoryManagement_API myMatrix();
void MemoryManagement_API myPointers();