// array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int ocjena[10] = { 0,1,2,3,4,5,6,7,8,9};
	int i = 0;
	int zbroj = 0;

	for (int i = 0; i <= 9; i++) {
		cin >> ocjena[i];
		zbroj += ocjena[i];
	}
	
	cout <<zbroj/10;



	return 0;
}
*/
/*
#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	char igra[9] = {'1','2','3','4','5','6','7','8','9'};
	;

	for (int i = 0; i < 9; i++) {
		if ((i + 1) % 3 != 0) {
			cout << igra[i] << "\t";
		}
		else {
			cout << igra[i] << endl;
		}
	}
	for (int i = 0; i < 9; i++) {
		int x;
		cout << "unesite poziciju:";
		cin >> x;
		if (i % 2 == 0) {
			igra[x - 1] = 'x';
		}
		else {
			igra[x - 1] = 'o';
		}
		system("clear");
		for (int i = 0; i < 9; i++) {
			if ((i + 1) % 3 != 0) {
				cout << igra[i] << "\t";
			}
			else {
				cout << igra[i] << endl;
			}
		}
		if (i > 3) {
			if 

		}

		
	}



	
	
}
*/









// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
