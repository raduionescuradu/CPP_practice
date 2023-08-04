#include "MemoryManagement.h"
#include <vector>
#include <iostream>

// implement a matrix and see how it is allocated in memory

void myMatrix()
{
	int matrix[5][5];

	// declare a pointer that we will use for matrix
	int* pMatrix;

	std::vector<int> vMatrix[10];

	std::vector<std::vector<int>> myVector[10];

	pMatrix = &matrix[0][0];

	for (int i = 0; i < 5; ++i)
		for (int j = 0; j < 5; j++)
		{
			matrix[i][j] = i + j;
			std::cout << matrix[i][j] << " address: ";
			std::cout << &matrix[i][j] << std::endl;

			// access element through pointer arithmetics and adress

			// std::cout << *(&matrix[0][0] + i + j) << std::endl;

			// pointer arithmetics

			std::cout << "pointer addr : " << pMatrix << " PTR adr: " << &pMatrix << " value: " << *pMatrix << std::endl;
			pMatrix++;

		}


	// not recommended, can cause memory crash due to invalid memory access
	/*
	std::cout << *(pMatrix + 125) << std::endl;
	pMatrix += 125;
	*pMatrix = 13;
	*/

}


void myPointers()
{
	int myValue = 13;
	
	// distinctie intre nullptr si NULL

	int* pInt = nullptr;
	int* pInt2 = nullptr;

	int* pNInt = NULL;

	// ambii pointeri vor trimite catre adresa catre myValue
	pInt = &myValue;
	pNInt = &myValue;

	std::cout << *pInt << " " << *pNInt << std::endl;
	std::cout << pInt << " " << pNInt << " " << pInt2 << std::endl;


	int* pMyArray = new int[10];

	delete[] pMyArray;

	
	// recommended practices
	std::vector<int> myVector;

	myVector.resize(10);

	myVector.reserve(25);

	for (int i = 0; i < myVector.size(); i++)
		myVector[i] = i;

	myVector.resize(7);

	myVector.shrink_to_fit();

	myVector.clear();
	myVector.shrink_to_fit();


	myVector.push_back(70);
	myVector.emplace_back(75); // when enough space, will place behind the last
}