// cetvrtak.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;
  
struct student {
	string ime;
	string prezime;
	int ocjena;
};

void menu() {
	 
	cout << "Odaberite sto zelite" << endl;
	cout << "1.Unos studenta" << endl;
	cout << "2.Ispis svih studenata" << endl;
	cout << "3.Sortiranje " << endl;
	cout << "0.Izlaz" << endl;
}

void unos_studenata(student*velicina,) {
	
	ofstream output;
	output.open("studenti.txt".ios::out | ios::app);
	cout << "Unesite svoje ime" << endl;
	cin>> student.ime;
	cout << "Unesite svoje prezime" << endl;
	cin >> student.prezime;
	output.close;
}

int main()
{
	int velicina;              
	
	cout << "unesite velicinu liste" << endl;
	cin >> velicina;
	int*lista = new int[velicina];


	
	
	int odabir;

	do {
		menu();
		cout << "Unesite svoj odabir:" << endl;
		cin >> odabir;
		
		switch (odabir) {
		case 1:
			unos_studenata();
			break;

		case 2:
			ispis_studenata();
			break;
		case 3:
			sortiranje_studenata();
			break;
		case 4:
			sortiranje_studenata();
			break;
		case 0:
			cout << endl;
			break;
		default:
			cout << "Niste unijeli valjani odabir.Pokušajte ponovo" << endl;
			menu();
			break;

		}

	} while (odabir != 0);

	system("PAUSE");
	return 0;
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
