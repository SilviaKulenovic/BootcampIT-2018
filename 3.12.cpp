// 3.12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// napisi program u funkciji koji če ispisivati text pjesme 99 bottles
//koji ce zbrajati brojeve jednog za drugim kako ih korisnik bude upisivao i ispisivati njihov zbroj dok se ne unese 0
//koji ce traziti od korisnika da unese lozinku  max 3 puta
//koji ce ispisivati tablicu mnozenja
//koji ce ispisati izbornik s prethodnim programima
//jednostavan kalkulator


#include "pch.h"
#include <iostream>

using namespace std;

void pjesma() {
	int bottles = 99;
	while (bottles > 0)
	{
		cout << bottles << " bottle(s) of beer on the wall," << endl;
		cout << bottles << " bottle(s) of beer." << endl;
		cout << "Take one down, pass it around," << endl;
		cout << --bottles << " bottle(s) of beer on the wall." << endl;
	}

}





#include "pch.h"
#include <iostream>

using namespace std;

void zbroj() {
	int broj = 0;
	int zbroj = 0;
	do {
		cout << "unesi broj " << endl;
		cin >> broj;
		zbroj += broj;

	} while (broj != 0);

	cout << zbroj << endl;
}



int main()
{
	zbroj();
	pjesma();
	return 0;
}




/*
#include "pch.h"
#include <iostream>
using namespace std;

int main() {

	int tablica[10][10];
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			tablica[i-1][j-1]=(i*j)*3;
		}
	}
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			cout << tablica[i - 1][j - 1]<<'\t';
		}
		cout << endl;

	}

	return 0;
}
*/

/*
// program za unos elemenata u 3d tablicu
#include "pch.h"
#include <iostream>
using namespace std;

int main() {

	int tablica[2][2][2];
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			for (int k = 0; k < 2; k++) {
				cin >> tablica[i][j][k];
			}
		}
	}
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			for (int k = 0; k < 2; k++) {
				cout << tablica[i][j][k];
			}
		}
	}


	return 0;
}
*/



//program za unos 2d pola i popunite ga znakovima "0". Nakon toga izmjenite i ispisite polje tako da na obje dijagonale budu znakovi "x"
//(nemojte rucno unosite x-ove.

/*
#include "pch.h"
#include <iostream>
using namespace std;

int main() {

	char  tablica[3][3];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if ((i == j) || ((i + j) == 2)) {
				tablica[i][j] = 'x';
			}
			else {
				tablica[i][j] = 'o';
			}
		}
	}
	for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				cout << tablica[i][j] << '\t';
			}
			cout << endl;


	}
	
}
*/

/*
#include "pch.h"
#include <iostream>
using namespace std;

int main() {




	

}
*/
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
