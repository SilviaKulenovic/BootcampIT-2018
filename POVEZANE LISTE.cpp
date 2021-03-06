#include "pch.h"
#include <iostream>
#include <list>

struct Node {
	int value;
	Node *next;
};

using namespace std;

int brElemenata(Node *head);
//void unosElemenataFront(Node *&head, int value);
void unosElemenataEnd(Node *&head, int value);
void displayList(Node *temp);

int main()
{
	Node *head = nullptr;
	Node *tail = nullptr;
	int unos;

	do {
		cout << "Unesite vrijednost (za izlaz unesite 0): ";
		cin >> unos;
		if (unos != 0) {
			unosElemenataEnd(head, unos);
		}
	} while (unos != 0);

	displayList(head);

	cout << endl << brElemenata(head) << endl;

	system("PAUSE");
	return 0;
}

int brElemenata(Node *head) {
	int counter = 0;
	Node *temp = head;
	while (temp != nullptr) {
		temp = temp->next;
		counter++;
	}
	return counter;
}

/*void unosElemenataFront(Node *&head, int value) {
	Node *temp = new Node;
	temp->value = value;
	temp->next = head;
	head = temp;
}*/

void unosElemenataEnd(Node *&head, int value) {
	Node *n = new Node;
	n->value = value;
	n->next = nullptr;

	Node *temp = head;

	if (temp == nullptr) {
		temp = n;
		head = temp;
	}
	else {
		temp = head;
		while (temp->next != NULL) {
			temp = temp->next;
		}
		temp->next = n;
	}
}

void displayList(Node *temp) {
	if (temp == NULL) {
		cout << "Prazna lista " << endl;
	}
	else {
		while (temp != nullptr) {
			cout << temp->value << "\t";
			temp = temp->next;
		}
		cout << endl;
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
