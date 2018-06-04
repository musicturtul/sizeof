//============================================================================
// Name        : sizeof.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int newArray[] = { 4, 2, 6, 9, 11, 21, 25, 444, 156 };

	cout << sizeof(newArray) << endl;
	cout << sizeof(int) << endl;

	for (unsigned int i = 0; i < sizeof(newArray) / sizeof(int); i++) {
		cout << newArray[i] << " " << flush;
	}
	cout << endl;

	unsigned int nextArray[6][12];
	int numberRows = sizeof(nextArray) / sizeof(nextArray[0]);
	int numberColumns = sizeof(nextArray[0]) / sizeof(unsigned int);

   for (unsigned int i = 0; i < numberRows; i++){
	   for(unsigned int j = 0; j < numberColumns; j++){
		   nextArray[i][j] = (i + 1) * (j + 1);
	   }
   }

   for (unsigned int i = 0; i < sizeof(nextArray) / sizeof(nextArray[0]); i++) {
	   for (unsigned int j = 0; j < sizeof(nextArray[0]) / sizeof(unsigned int); j++) {
		   cout << nextArray[i][j] << " "  << flush;
	   }
	   cout << endl;
   }

	int MULTI_ARRAY[3][2] { { 1, 5 }, { 6, 8 }, { 4, 2 } };

	for (int i = 0; (i < sizeof(MULTI_ARRAY) / sizeof(int) / 2); i++) {
		for (int j = 0; (j < sizeof(MULTI_ARRAY) / sizeof(int) / 3); j++) {
			std::cout << MULTI_ARRAY[i][j] << " " << std::flush;
		}
		std::cout << std::endl;
	}

	return 0;
}
