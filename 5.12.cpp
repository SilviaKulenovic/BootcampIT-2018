// 5.12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
#include "pch.h"
#include <iostream>
using namespace std;
*/
/*
int main()        //SUPER KUHAR
{
	int Edi[9];
	int Tin[9];
	int j = 0;
	int zbroj = 0, zbroj1 = 0;

	for (int i = 0; i < 18; i++)  {

		if (i < 9) {

			cin >> Edi[i];
			zbroj += Edi[i];
		}
		else if (i >= 9 && i < 18) {
			cin >> Tin[j];
			zbroj1 += Tin[j];
			j++;
			
		}		
	}
	if (zbroj > zbroj1) {
		cout << "Edi " << zbroj;
	}
	else if (zbroj < zbroj1) {
		cout << "Tin " << zbroj1;
	}
	else {
		cout << "Nema pobjednika " << zbroj;
	}

	
}
*/
/*
int main() {        //SRECA
	int n, brojac=0,c;
	cin >> n;
	int polje[100];
	
	for (int i = 1; i <= n; i++) {
		 polje[i]=i;
	}

	for (int i = 1; i <= n; i++) {
		cin >> c;

		if (c >= polje[i] ) {
			brojac ++;
		}
	}
	cout << brojac;
}

*/
/*
int main() {                //SRECA         
	int n, brojac = 0;
	int unos;
	
	cin >> n;

		for (int i = 1; i <= n; i++) {
			cin >> unos;
			if (unos >= i) {
				brojac++;
			}
		}
		cout << brojac;

}
*/


/*
int main() {

	int n;
	int polje[13];

	for(int i=0; i<)


}
*/

/*
#include "pch.h"
#include <string>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void unos();
void ispis();

int main()
{
	int x = 0;
	do {
		system("cls");
		cout << "IZBORNIK\n1 - Unos novog zapisa\n2 - Ispis svih zapisa\n0 - Izlaz\n\n";
		cin >> x;
		switch (x) {
		case 1:
			system("cls");
			unos();
			break;
		case 2:
			system("cls");
			ispis();
			system("pause");
			break;
		case 0:
			return 0;
		default:
			system("cls");
			cout << "Niste unijeli valjani izbor! Pokusajte ponovo!\n";
		}
	} while (x != 0);
}

void ispis() {
	// ispis podataka iz datoteke
	vector <string> podaci;

	ifstream input("primjer.txt");

	// deklariranje ifstream
	// objekta input
	string line;
	while (input) { // dok ima inputa
		getline(input, line); // input se sprema u line
		podaci.push_back(line); // line se sprema u vector
	}

	input.close(); // zatvaranje stream-a

	for (int i = 0; i < podaci.size() - 1; i++) {
		cout << podaci[i] << endl;
	}
}

void unos() {
	// unos podataka u datoteku
	int id;
	string ime, prezime, za_spremanje;
	cout << "Unesite ID: ";
	cin >> id;
	cin.ignore();   // koristimo jer u streamu situacija
					// izgleda ovako 123\n -> 123 se uèita
					// u int, a \n se uèita u string pa nam
					// getline preskoèi jedan input s ignore()
					// kako bi preskoèio \n, a ne da ga uèita u
					// varijablu

	cout << "Unesite ime: ";
	getline(cin, ime);
	cout << "Unesite prezime: ";
	getline(cin, prezime);

	// priprema za spremanje
	za_spremanje = "\n" + to_string(id) + " " + ime + " " + prezime;

	ofstream output; //stvaranje ofstream objekta output
	output.open("primjer.txt", ios::out | ios::app); // ios:: - flagovi
	output << za_spremanje;
	output.close(); // zatvaranje output-a
}
*/


/*
#include "pch.h"
#include <string>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;


int main() {                         //spremiti i citati brojeve od 0 do n
	int n;							//svaki put neka se datoteka pregazi novim brojevima  bez io::app
	cout << "unesi broj";
	cin >> n;
	
	ofstream output; //stvaranje ofstream objekta output
	output.open("primjer.txt", ios::out ); // ios:: - flagovi


	for (int i = 0; i <= n; i++) {
		output << i;
	}
	output.close(); // zatvaranje output-a

    
	
}
*/

#include "pch.h"
#include <string>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
