// 11.12.(2).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

void ispis_brojeva(int i);
void ispis_brojeva2(int i);
void faktorijel_brojeva(int i);

int main()
{
	ispis_brojeva(1);   // mora poceti od 1, jer inace ispisuje 0
	cout << endl;
	ispis_brojeva2(0);
	faktorijel_brojeva(6);
}

void ispis_brojeva (int i) {
	cout << "broj " << i << endl;
	i++;
	if (i <= 10) { ispis_brojeva(i);
	}
}

void ispis_brojeva2 (int i) {
	i++;
	if (i <= 10) {
		ispis_brojeva2(i);
		cout << "broj " << i << endl;
	}

void faktorijel_brojeva(int i) {
	int x; y
	
	i++;
	if (i <= x) {
		y = *i;
		cout << y;
	}

}
	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
