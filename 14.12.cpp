// 14.12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <stack>
#include<queue>
#include <string>

using namespace std;
void(cekaonica);

int main()
{


	/*
	stack<char> s;                     //STACK
	stack<string> ;
	string palindrom;
	string obrnuto;

	int velicina;

	cout << "unesite rijec" << endl;;
	getline(cin, palindrom);
	velicina = palindrom.size();

	for (int i = 0; i < velicina; i++) {
		s.push(palindrom[i]);
	}
	
	for (int i = 0; i < velicina; i++) {
	obrnuto += s.top();
	s.pop();
	}

	if (obrnuto == palindrom){
		cout<<"rijec je palindrom";
		}
	else {
		cout << "rijec nije palindrom";
	}

	return 0;
	*/



	queue<char> q;

	string ime;
	int velicina;

	void(cekaonica) {
		queue<string>cekaonica;
		cout << "na ulazu u cekaonicu";
		for (int i = 0; i < velicina; i++;) {
			cekaonica.push(i);
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
