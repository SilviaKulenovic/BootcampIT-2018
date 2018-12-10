// CASINO.cpp : This file contains the 'main' function. Program execution begins and ends there.
//



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
	//int duplo_ili_nista();
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
		int chip;
		cout << "Trenutno imate " << chipovi << "zetona" << "i" << novac << endl;
		cout << "Unesite broj chipova koje zelite unovciti" << endl;
		int chip = 0;
		cin >> chip;
		cout << "Jeste li sigurni da zelite unovciti chipove" << endl;
		if (odgovor == 'da') {
			if (chip < chipovi) {
				novac += chip * 5;
				chipovi = 0;
			}
			else {
				cout << "Unijeli ste preveliki iznos chipova " << endl;
			}
		}
		else {
			cout << "Mozete nastaviti igru"<<endl;
		}


	}



	int igra(int &novac, int &chipovi) {
		do {
			int odabir;
			cout << "Odaberite 1 za jednoruki jack" << endl;
			cout << "odaberite 2 za bacanje kockica" << endl;
			cout << "odaberite 3 za duplo ili nista" << endl;
			cin >> odabir;

			switch (odabir) {
			case 1:
				jednoruki_jack();
				break;
			case 2:
				bacanje_kockica();
				break;
			case 3:
				//duplo_ili_nista();
				break;
			case 4:
				break;

			}while (odabir != 4);
		


	    int jednoruki_jack(int &novac, int &chipovi) {
			int ulog = 0;
		    cout << "Unesite broj chipova koje zelite uloziti" << endl;
		    cin >> ulog;
		
			if (ulog < chipovi) {

				srand(time(NULL));
				int znak1 = rand() % 4 + 1;
				int znak2 = rand() % 4 + 1;
				int znak3 = rand() % 4 + 1;
				cout << znak1 << znak2 << znak3;

				if (znak1 == znak2 && znak2 == znak3) {
					chipovi += ulog * 2;
					cout << "pobjeda" << endl;
				}
				else {
					chipovi -= ulog;
					cout << "Zao mi je.izgubili ste" << endl;
				}

			}
			else {
				cout"Nedovoljan broj chipova" << endl;
		}



		int bacanje_kockica(int &novac, int &chipovi) {
			int ulog = 0;
			cout << "Unesite broj chipova koje zelite uloziti" << endl;
			cin >> ulog;

			if (ulog < chipovi) {

				int a, b, c, d;
				srand(time(NULL));
				a = rand() % 6 + 1;
				b = rand() % 6 + 1;
				c = rand() % 6 + 1;
				d = rand() % 6 + 1;


				cout << "korisnikov prvi broj je" << a << endl;
				cout << "racunalov prvi broj je" << b << endl;
				cout << "korisnikov drugi broj je" << c << endl;
				cout << "racunalov drugi broj je" << d << endl;

				if (a + c > b + d) {
					chipovi += ulog * 2;
					cout << "Cestitam. Pobijedili ste" << endl;

				}
				else {
					chipovi -= ulog;
					cout << "Zao nam je . Izgubili ste. Pokusajte ponovo" << endl;
				}

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
					   igra(novac,chipovi);
					   break;
				    case 4:
					  //high_score();
					   break;
				    case 5:
				       break;
			      } while (odabir != 5);
			 

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
