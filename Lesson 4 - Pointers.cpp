// Lesson 4 - Pointers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void Swap(int* x, int* y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}

void PrintEvenNumbers(int* arr) {
	for (int i = 0; i < 10; i++) {
		if (*arr % 2 == 0) {
			cout << *arr << "\n";
		}
		arr++;
	}
}

int main() {

	int a = 10;
	int b = 5;

	int* ap;
	int* bp;
	ap = &a;
	bp = &b;

	cout << "Value of dereferenced ap is " << *ap << "\nValue of dereferenced bp is " << *bp;
	Swap(ap, bp);
	cout << "\nValue of dereferenced ap is " << *ap << "\nValue of dereferenced bp is " << *bp << "\n";

	int myArray[10] = { 1,2,3,4,5,6,7,8,9,10 };

	PrintEvenNumbers(myArray);

	cin >> *ap;

	/*int a = 100;

	cout << "Value in memory location a is " << a << "\n";

	cout << "Address of (the reference to) memory location a is " << &a << "\n";

	int *b = &a;

	cout << "Value in memory location pointed to by b is " << *b << "\n";


	cout << "Value in memory location b is " << b << "\n";
	cout << b << " should be the same as the memory location for a: " << &a << "\n";
	cout << "b is actually at memory location " << &b << endl;

	int** c;

	c = &b;
	cout << "c is now pointing to what b points to: " << **c << endl;

	cout << "c points to: " << *c << endl;

	cout << "c actually holds the value: " << c << endl;
	cout << c << " is the same value as b's memory location: " << &b << endl;
	cout << "c is actually at memory location " << &c << endl;

	cout << "c is eventually retrieving what is in memory location " << **&c << endl;
	cout << "the value of a is in memory location " << &a << endl;

	int x;
	cout << "Type in a numebr to finish" << "\n";
	cin >> x;*/

	return 0;
}