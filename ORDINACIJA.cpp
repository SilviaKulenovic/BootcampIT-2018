// ORDINACIJA.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>											
#include<string>										 //vector <pacijent>pacijenti
#include<vector>                                         //void ucitaj(vector<pacijent>  &pacijenti)
#include <fstream>
using namespace std;

struct lista_pacijenata {
	int mbo;
	string ime;
	string prezime;
	string popis_lijekova;
};
void menu();
void unos_novog_pacijenta();
void spremanje_pacijenata();
void ispis_pacijenata();

void menu() {
	cout << "Odaberite sto zelite uciniti" << endl;
	cout << "1. Unos novog pacijenta" << endl;
	cout << "2. Ispis pacijenata" << endl;
	cout << "3. Pretrazivanje pacijenata po MBO " <<endl ;
	cout << "4. Cekaonica-prijava" << endl;
	cout << "5. Cekaonica-odjava" << endl;
	cout << "6. Dodavanje recepata za lijekove na korisnicki racun pacijenta" << endl;
	cout << "0. Izlaz" << endl;
}


void unos_novog_pacijenta() {

lista_pacijenata pacijent;
        

	cout << "Unesite mbo" << endl;
	cin >> pacijent.mbo;
	cout << "Unesite ime pacijenta" << endl;
	getline(cin, pacijent.ime);
	cout << "Unesite prezime pacijenta" << endl;
	getline(cin, pacijent.prezime);
	cout << "Unesite popis_lijekova" << endl;
	getline(cin, pacijent.popis_lijekova);

	pacijent.push_back(lista_pacijenata());		//TEMP VARIJABLA


		spremanje_pacijenata();
	
	
void spremanje_pacijenata() {

		ofstream output;
		string za_spremanje;
		output.open("pacijenti.txt", ios::out | ios::app);
		za_spremanje = "\n" + to_string(mbo) + " "ime + prezime"\n"+popis_lijekova;
		output << za_spremanje;
		output.close;
		}


void ispis_pacijenata() {
	ifstream input("pacijenti.txt");
	string line;
	while (input) {
		getline(input, line);
		pacijent.push_back(line);
	}
	input.close();
	
	for(int i=0;i<pacijent.size()-1;i++){
		cout<<pacijent[i].mbo<< "\t"<<pacijent[i].ime<<"\t"<<pacijent[i].prezime<< "\t"<<pacijent[i].lista_lijekova;
    }

int main()
{
	ispis_pacijenata("pacijenti.txt");

	vector<lista_pacijenata> pacijent;

	int izbor;

	while (izbor != 0) {
		menu();
		cout << "Unesite svoj izbor:" << endl;
		cin >> izbor;
		switch (izbor) {
		case 1: 
			unos_novog_pacijenta();
			break;
		case 2:
			ispis_pacijenata();
			break;
		case 3:
			//pretrazivanje_pacijenata_po_mbo();
			break;
		case 4:
			//cekaonica_prijava();
			break;
		case 5:
			//cekaonica_odjava();
			break;
		case 6:
			//dodavanje_recepata_za_lijekove_na_racun_pacijenta();
			break;
		case 0:
			cout << endl;
			break;
		default:
			cout << "Niste unijeli valjani odabir. Pokusajte ponovo" << endl;
			menu();
			break;
		}
	}

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
