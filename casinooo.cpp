
#include "pch.h"
#include <iostream>
#include <cstdlib>
#include<string>
#include <time.h>

using namespace std;

void uplata(int &novac, int &chipovi);
 int isplata(int &novac, int &chipovi);
 int igra(); 
 int jednoruki_jack();
 int bacanje_kockica();
 int duplo_ili_nista();
// int high_score();

void uplata(int &novac, int &chipovi) {
	int chip;
	cout << "Trenutno imate " << novac << " kn i " << chipovi << " zetona" << endl;
	cout << "KOLIKO CHIPOVA ZELITE KUPITI: " << endl;
	cin >> chip;
	if (novac >= chip * 5) {
		novac -= chip * 5;
		chipovi += chip;
	}
	else {
		cout << "Iznos nije dovoljan za kupnju " << chip << " zetona. Unesite manji iznos" << endl;
	}

}

int isplata(int &novac, int &chipovi) {
	char odgovor;
	
	cout << "Trenutno imate "<<chipovi<< "zetona"<<"i"<<novac<<endl;
	cout << "Jeste li sigurni da zelite unovciti chipove" << endl;
	if (odgovor=='da') {
		novac += chipovi * 5;
	}
	
}


int igra(int &novac, int &chipovi) {
	do {
		int odabir;
		cout << "Odaberite 1 za jednoruki jack" << endl;
		cout << "odaberite 2 za bacanje kockica" << endl;
		cout << "odaberite 3 za duplo ili nista" <<endl ;
		cin >> odabir;

		switch (odabir) {
		case 1:
			jednoruki_jack(int &novac, int &chipovi);
			break;
		case 2:
			bacanje_kockica(int &novac, int &chipovi);
			break;
		case 3:
			duplo_ili_nista(int &novac, int &chipovi);
			break;
		case 4:
			break;

		}
	} while (odabir != 4)


		int jednoruki_jack(int &novac, int &chipovi) {


		srand(time(NULL));
		int a, b, c, d;
		a = rand() % 4 + 1;
		b = rand() % 4 + 1;
		c = rand() % 4 + 1;
		cout << a << b << c;


	}



int main() {


	cout << "Dobrodosli u casino!\nUnesite vase ime" << endl;
	string ime;
	getline(cin, ime);
	//cout << "hello " << ime << endl;
	int novac = 0, chipovi = 0;
	cout << "Koliko novca imate: ";
	cin >> novac;

	int odabir;
	do {
		cout << "odaberite 1 za uplatu" << endl;
		cout << "odaberite 2 za isplatu" << endl;
		cout << "odaberite 3 za odabir igre" << endl;
		cout << "odaberite 4 za high score" << endl;
		cout << "odaberite 5 za izlaz iz programa" << endl;
		cout << "Unesite svoj odabir: ";
		cin >> odabir;

		switch (odabir) {
		case 1:
			uplata(novac, chipovi);
			break;
		case 2:
			isplata(novac, chipovi);
			break;
		case 3:
			//igra();
			break;
		case 4:
			//high_score();
			break;
		case 5:
			break;
		}
	} while (odabir != 5);
	return 0;


}
