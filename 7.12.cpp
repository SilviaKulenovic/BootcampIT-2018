// 7.12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
#include "pch.h"               //TUNA
#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	int x = 0;
	int cijena = 0;
	int p1, p2, p3 = 0;
	int i = 0;
	cin >> n;
	cin >> x;


	do {
		cin >> p1;
		cin >> p2;
		int j = abs(p1 - p2);
		if (j <= x) {
			if (p1 > p2) {
				cijena += p1;
			}
			else
				cijena += p2;
		}
		else {
			cin >> p3;
			cijena += p3;
		}
		i++;
	} while (i < n);

	cout << cijena;
*/

/*
#include "pch.h"          //MOJA TUNA
#include <iostream>
#include<math.h>

	using namespace std;

int main()
{
	int n = 0;
	int x = 0;
	int cijena = 0;
	int p1, p2, p3 = 0;
	int i = 0;
	cin >> n;
	cin >> x;


	for (int i=0;i<n;i++){
	    cin >> p1;
	    cin >> p2;
		int j = abs(p1 - p2);
		   if (j <= x) {

			    if (p1 > p2) {
			    cijena +=p1;
		        }
				else {
					cijena += p2;
				}
		   }
		   else   {
		     cin >> p3;
			cijena += p3;
		
		   }
	}
	cout << cijena;
    
    

	return 0;
}
*/

#include "pch.h"               
#include <iostream>
using namespace std;

int main() {

	int x;    //broj mb
	int n;    //broj mjeseci



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
