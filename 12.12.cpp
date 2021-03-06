// 12.12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include<time.h>
#include<cstdlib>

using namespace std;

void BubbleSort(int lista[], int velicina);
void SelectionSort(int lista[], int velicina);
void InsertionSort(int lista[], int velicina);


void BubbleSort(int lista[], int velicina)
{
	int temp, j;
	bool bilazamjena = true;

	for (int i = 0; bilazamjena == true; i++)
	{
		bilazamjena = false;
		for (j = 0; j < velicina - 1 - i; j++)
		{
			if (lista[j] > lista[j + 1])
			{
				temp = lista[j];
				lista[j] = lista[j + 1];
				lista[j + 1] = temp;
				bilazamjena = true;
			}
		}
	}
}
/*
void SelectionSort(int lista[], int velicina)
{
	int najmanji = lista[0];					//TRAZENJE NAJMANJEG ELEMENTA
													// SA PREDAVANJA
	for (int i = 0; i < velicina - 1; i++) {
		if (lista[i] > lista[i + 1]){				//i+1   DA NE IZLETI IZ LISTE
		najmanji = i + 1;
        }
	}
}
*/
void SelectionSort(int lista[], int velicina){    //SELECTION SORT
	int temp, j;

	for (int i = 0; i < velicina; i++) 
	{
		int najmanji = lista[0];

		for (int j = i + 1; j < velicina - 1; j++) 
		{
			if (lista[j] < lista[najmanji]) 
			{
				najmanji = j;
			}
		}
		temp = lista[i];
		lista[i] = lista[najmanji];
		lista[najmanji] = temp;
	}
	


}

void InsertionSort(int lista[], int velicina) {				//INSERTION SORT
	int temp, i, j;

	for (i = 0; i < velicina; i++) {
		temp = lista[i];
		for (j = i; j >= 1 && lista[j - 1] > temp; i--) {
			lista[j] = lista[j - 1];
		}
		lista[j] = temp;
	}
}





int main()
{/*
	const int velicina = 6;
	int lista[velicina];

	for (int i = 0; i < velicina; i++) {
		cin >> lista[i];
	}
	*/

	/*
    const int velicina = 50;             //RANDOM SORT
	int lista[velicina];
	srand(time(NULL));
	for (int i = 0; i < velicina; i++) {
		lista[i] = rand() % 200;
	}

	
	BubbleSort( lista, velicina);

	for (int i = 0; i < velicina; i++) {
		cout << lista[i]<<" ";
	}

	*/

	
	int velicina;               //BUBBLE SORT PROMJENJIVE LISTE/NIZA
	srand(time(NULL));
	cout << "unesite velicinu liste" << endl;
	cin >> velicina;
	int*lista = new int[velicina];

	for (int i = 0; i < velicina; i++) {
		lista[i]= rand() % 100 + 1;
		cout << lista[i] << "  "<<;
		
	}
	
	//BubbleSort(lista, velicina);
	//SelectionSort(lista, velicina);
	InsertionSort(lista, velicina);

	for (int i = 0; i < velicina; i++) {
		cout << lista[i] << " ";
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
