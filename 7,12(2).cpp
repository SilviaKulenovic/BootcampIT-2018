// 7,12(2).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"              // NASUMICNO POMICANJE BRODA UNUTAR 2D POLJA X,Y
#include <iostream>           //
#include <ctime>
#include<cstdlib>

using namespace std;


struct brod {
	int x=0;
	int y=0;
};
	

int main()
{
	srand(time(NULL));
	brod brod1;
	brod1.x = rand() %20 +1;
	brod1.y = rand() %20 +1;

	cout << brod1.x <<" " << brod1.y;
	
	

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
