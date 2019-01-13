// ZNAS ILI NE ZNAS.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "pch.h"				//VERZIJA KOJA RADI
#include <iostream>
#include <string>
using namespace std;

class Racun {
private:
	string ime;
	int broj_racuna;

public:
	void set_ime(string i) {
		ime = i;
	}
	void set_broj_racuna(int r) {
		broj_racuna = r;
	}
	string get_ime() { return ime; }
	int get_broj_racuna() { return broj_racuna; }
};

class Tekuci : public Racun {
private:
	int depozit;
	int stanje_racuna = 10;

public:
	void set_depozit(int d) {
		depozit = d;
	}
	void set_stanje_racuna(int s) {
		stanje_racuna = s;
	}
	int get_depozit() {
		return depozit;
	}
	int get_stanje_racuna() {
		return stanje_racuna;
	}
	void izracun_naknade() {
		int naknada = 2;
		stanje_racuna = stanje_racuna - naknada;
	}
	void podizanje() {
		int novac;
		cout << "Unesite iznos novca za podizanje" << endl;
		cin >> novac;

		if (stanje_racuna - novac > 10) {
			stanje_racuna = stanje_racuna - novac;
			izracun_naknade();
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

	class Stedni : public Racun {
	private:
		int depozit;
		int stanje_racuna = 10;

	public:
		void set_depozit(int d) {
			depozit = d;
		}
		void set_stanje_racuna(int s) {
			stanje_racuna = s;
		}
		int get_depozit() {
			return depozit;
		}
		int get_stanje_racuna() {
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
		/*void izracun_i_ispis_kamate() {
			float kamata;
			cout << "Unesite godišnju kamatnu stopu" << endl;
			cin >> kamata;
			int broj_mjeseci;
			cout << "Unesite broj mjeseci na koji zelite orociti novac" << endl;
			cin >> broj_mjeseci;
			float stednja;
			stednja = (stanje_racuna * (kamata / 100)) / 12;
			mjesecna_stednja = stednja * broj_mjeseci;

			cout << "Vasa stednja nakon " << broj_mjeseci << "iznosi " << mjesecna_stednja << endl;

		}*/
		void ispis_stanja() {
			cout << "Stanje racuna je:" << stanje_racuna << endl;
		}

	};

};

int main()
{
	int izbor;
	cout << "Izaberite vrstu racuna" << endl;
	cout << "Izaberite 1 za tekuci" << endl;
	cout << "Izaberite 2 za stedni racun" << endl;
	cin >> izbor;
	switch (izbor) {
	case 1: {
		Tekuci t1;
		string v;
		cout << "Unesite ime vlasnika racuna" << endl;
		cin >> v;
		t1.set_ime(v);
		int k;
		cout << "Unesite broj racuna" << endl;
		cin >> k;
		t1.set_broj_racuna(k);

		cout << "Ime vlasnika racuna:" << t1.get_ime() << endl;
		cout << "Broj racuna:" << t1.get_broj_racuna() << endl;
		cout << "Stanje racuna:" << t1.get_stanje_racuna() << endl;

		do {
			cout << "1 Stavljanje novaca na racun" << endl;
			cout << "2 Podizanje novaca" << endl;
			cout << "3 Izlaz" << endl;
			cout << "Unesite vas odabir" << endl;
			cin >> izbor;
			switch (izbor) {
			case 1: t1.stavljanje_novaca_na_racun();
				t1.ispis_stanja();
				break;
			case 2: t1.podizanje();
				t1.ispis_stanja();
				break;
			case 3: break;
			}
		} while (izbor != 3);
	}
	case 2: {
		Stedni s1;
		string i;
		cout << "Unesite ime vlasnika racuna" << endl;
		cin >> i;
		s1.set_ime(i);
		int k;
		cout << "Unesite broj racuna" << endl;
		cin >> k;
		s1.set_broj_racuna(k);

		cout << "Ime vlasnika racuna:" << s1.get_ime() << endl;
		cout << "Broj racuna:" << s1.get_broj_racuna() << endl;
		cout << "Stanje racuna:" << s1.get_stanje_racuna() << endl;

		do {
			cout << "1 Stavljanje novaca na racun" << endl;
			cout << "2 Podizanje novaca" << endl;
			//cout << "3 Izraèun kamate" << endl;
			cout << "4 Izlaz" << endl;

			cout << "Unesite vas odabir" << endl;
			cin >> izbor;
			switch (izbor) {
			case 1: s1.stavljanje_novaca_na_racun();
				s1.ispis_stanja();
				break;
			case 2: s1.podizanje();
				s1.ispis_stanja();
				break;
			//case 3: s1.izracun_i_ispis_kamate();
				break;
			case 4:
				break;
			}
		} while (izbor != 4);

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
