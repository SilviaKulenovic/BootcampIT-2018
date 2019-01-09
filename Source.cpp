#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Klijent{
private:
	string ime,prezime,adresa;
	int broj_kartice;
public:
	void set_ime(string i) {
		ime = i;
	}
	void set_prezime(string p) {
		prezime = p;
	}
	void set_broj_kartice(int brk) {
		broj_kartice = brk;
	}
	string get_ime() { return ime; }
	string get_prezime() { return prezime; }
	int get_broj_kartice(){ return broj_kartice; }


	};

class Racun {
private:
	//string ime;
	int broj_racuna;
	//int depozit;
	int stanje_racuna = 10;

public:
	/*void set_ime(string i) {
		ime = i;
	}*/
	void set_broj_racuna(int r) {
		broj_racuna = r;
	}
//	string get_ime() { return ime; }
	int get_broj_racuna() { return broj_racuna; }

	//void set_depozit(int d) {
	//	depozit = d;
	//}
	void set_stanje_racuna(int s) {
		stanje_racuna = s;
	}
	//int get_depozit() {
	//	return depozit;
	//}
	int get_stanje_racuna() {
		return stanje_racuna;
	}
	/*void izracun_naknade(int novac) {
		int naknada = 2;
		stanje_racuna = stanje_racuna - naknada;
	}*/
	void podizanje() {
		int novac;
		cout << "Unesite iznos novca za podizanje" << endl;
		cin >> novac;
		stanje_racuna = stanje_racuna - novac;
	}
/*
		if (stanje_racuna - novac > 10) {
			stanje_racuna = stanje_racuna - novac;
			//izracun_naknade(novac);
			cout << "Transakcija je bila uspjesna" << endl;
		}
		else { cout << "Transakciju nije moguce izvrsiti" << endl; }
	}*/
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
