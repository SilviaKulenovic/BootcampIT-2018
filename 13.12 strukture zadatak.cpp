// 13.12 strukture zadatak.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	int velicina;

	
	cout << "unesite velicinu liste" << endl;
	cin >> velicina;
	int*lista = new int[velicina];

	for (int i = 0; i < velicina; i++) {
		     cin>>lista[i] ;
		cout << lista[i] << "  " << ;
}





	vector<string> imena;							
	ifstream input("imena.txt");                  
	string line;												
	while (input) {
		getline(input, line);
		imena.push_back(line);
	}
	input.close();
	for (int i = 0; i < imena.size() - 1; i++) {
		cout << imena[i];
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
