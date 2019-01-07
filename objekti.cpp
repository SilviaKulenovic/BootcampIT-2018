// objekti.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
#include "klasa.h"

/*						       //DEFINICIJA KLASE
class Kutija {
public:
	int x;
	void ispis();
}; 
void Kutija::ispis() {         //DEFINICIJA FUNKCIJE
	cout << x << endl;
}

int main()                     //DEFINICIJA OBJEKTA I POZIVANJE FUNKCIJE
{
	Kutija box;
	box.x = 100;
	box.ispis();
}
*/



/*
class Covjek {
public:
	int visina;
	int tezina;
	int dob;
	void ispis_visine();
	void ispis_tezine();
	void ispis_dob();             //do tuda ide u header
};
void Covjek::ispis_dob(){
	cout << dob << endl;
}
void Covjek::ispis_visine() {
	cout << visina << endl;
}
void Covjek::ispis_tezine() {
	cout << tezina << endl;              //ovo ide u poseban cpp file
}
int main() {
	Covjek a;
	a.visina = 179;
	a.tezina = 80;
	a.dob = 25;
	a.ispis_visine();
	a.ispis_tezine();
	a.ispis_dob();                       ovo ide u main
 }
*/

/*
int main() {
	Covjek a;
	a.visina = 168;
	a.tezina = 80;
	a.dob = 25;
	a.ispis_visine();
	a.ispis_tezine();
	a.ispis_dob();

	Covjek b;
	b.visina = 100;
	b.tezina = 50;
	b.dob = 10;
	b.ispis_visine();
	b.ispis_tezine();
	b.ispis_dob();

}*/
/*
class Kocka {
private:
	int visina,sirina, dubina;	

public:
	void otvori();
    void zatvori();
};

void Kocka::otvori() {
	cin >> visina>>sirina >>dubina;
	cout << "Kocka je otvorena" << endl;
}
void Kocka::zatvori() {
	cin >> visina >> sirina >> dubina;
	cout << "Kocka je zatvorena" << endl;
}

int main() {
	Kocka k1;
	k1.otvori();
	k1.zatvori();
}
*/
/*
class Kutija {
public:
	int x;
	Kutija();
	~Kutija();
};

Kutija::Kutija() {
	cout << "Stvoren je objekt kutija" << endl;
}
Kutija::~Kutija() {
	cout << "Unisten je objekt kutija" << endl;
}

int main() {
	Kutija k;
	
}
*/

/*
class Kutija {
public:
	static int broj_kutija;

	Kutija();
	static void koliko_kutija();
};

Kutija::Kutija()
{
	broj_kutija++;
}

void Kutija::koliko_kutija() {
	cout << "Imamo" << broj_kutija << "kutija" << endl;
}
int Kutija::broj_kutija = 0;

int main() {
	cout << Kutija::broj_kutija << endl;
	Kutija box;
	Kutija box2;
	cout << Kutija::broj_kutija << endl;

	Kutija box3;
	Kutija::koliko_kutija();
}
*/

class Node {
private:
	int value;
	Node *next;
	static int broj_nodova;
public:
	Node();
	~Node();
	void set_podatak(int vrijednost);
	int get_podatak();

class PovezanaLista {
	private:
		Node *head;
	public:
		PovezanaLista();










































private:
	int podatak;
	static int broj_nodova;
	Node *next;

public:
	Node();
	~Node();
	void set_podatak(int vrijednost);
	int get_podatak();
};

class PovezanaLista {
private:
	Node *head;
public:
	PovezanaLista();

void Node::set_podatak(int vrijednost){}

int Node::get_podatak(){}
 void Node::set_next(Node *nnn){}
 Node *Node::get_next(){}
 int Node::get_broj_nodova(){}
  PovezanaLista::PovezanaLista(){}
  void PovezanaLista::unos_pocetak(int vrijednost){
	  Node *temp = new Node;
	  temp->get_podatak = podatak;
	  temp->next = head;
	  head = temp;
  }
};


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file


