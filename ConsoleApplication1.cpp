// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Klijent {
private:
	string ime;
	int pin;
public:
	void set_ime(string i) {
		ime = i;
	}
	 
	void set_pin(int p) {
		pin = p;
	}
	string get_ime() { return ime; }
	int get_pin() { return pin; }
};
/*
class Racun {
protected:
	int broj_racuna;
	float stanje_racuna=10;
public:
	void set_broj_racuna(int r) {
		broj_racuna = r;
	}
	int get_broj_racuna() { return broj_racuna; }

	void set_stanje_racuna(float s) {
		stanje_racuna = s;
	}
	float get_stanje_racuna() {
		return stanje_racuna;
	}
	 
	void podizanje() {
		int novac;
		cout << "Unesite iznos novca za podizanje" << endl;
		cin >> novac;

		if (stanje_racuna - novac > 10) {
			stanje_racuna = stanje_racuna - novac;
			
			cout << "Transakcija je bila uspjesna" << endl;
		}
		else { cout << "Transakciju nije moguce izvrsiti" << endl; }
	}
	void stavljanje_novaca_na_racun() {
		int novac;
		cout << "Unesite iznos novaca za staviti na racun" << endl;
		cin >> novac;
		stanje_racuna = stanje_racuna + novac;
	}
	void ispis_stanja() {
		cout << "Stanje racuna je:" << stanje_racuna << endl;
	}

};
class Tekuci : public Racun {
public:
	void izracun_naknade() {
		int naknada = 2;
		stanje_racuna = stanje_racuna - naknada;
};

	class Stedni : public Racun {
	public:
		void izracun_i_ispis_kamate() {
			float kamata;
			cout << "Unesite godišnju kamatnu stopu" << endl;
			cin >> kamata;
			int broj_mjeseci;
			cout << "Unesite broj mjeseci na koji zelite orociti novac" << endl;
			cin >> broj_mjeseci;
			float stednja;
			stednja = (stanje_racuna * (kamata / 100)) / 12;
			int mjesecna_stednja;
			mjesecna_stednja = stednja * broj_mjeseci;
			cout << "Vasa stednja nakon " << broj_mjeseci << "iznosi " << mjesecna_stednja << endl;
		}
	};
	*/
	int main()
	{
		vector<Klijent> popis_klijenata;
		Klijent k1;
		k1.get_ime();
		k1.get_pin();
		
		popis_klijenata.push_back(k1);

		cout << popis_klijenata.size();

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
