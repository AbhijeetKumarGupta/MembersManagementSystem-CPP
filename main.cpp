//============================================================================
// Name        : IdentifierSystem.cpp
// Author      : DEVIL
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <string>
#include "Resident.h"
using namespace std;

// Function declaration for Menu, Adding Member and showing output
void menu(Resident r[], int index);
Resident addMember(Resident r);
void showMembers();

// Main method
int main() {
	int index = 0;

	Resident r[1000];

	menu(r, index);

	return 0;
}

// Menu Definition
void menu(Resident r[], int index) {
	int option = 0;
	do {
		cout << "1. Add Member" << endl;
		cout << "2. Show Members" << endl;
		cout << "3. Exit" << endl;
		cin >> option;

		if (option == 1) {
			r[index] = addMember(r[index]);
			index++;
		} else if (option == 2) {
			showMembers();
		} else if (option == 3) {
			exit(0);
		}

		cout << endl;
	} while (option != 3);
}

// Adding Customers
Resident addMember(Resident r) {
	std::ofstream outfile;
	outfile.open("record.txt", ios::app);
	int mId, hNo, f, sNo;
	char bNo;
	cout << "\nENTER DETAILS -" << endl;
	cout << "Member Id : ";
	mId = rand() % 99999 + 10000;
	cout << mId << endl;
	r.setMemberId(mId);
	cout << "House No (001 - 999) : ";
	cin >> hNo;
	r.setHouseNo(hNo);
	cout << "Floor No (0 - 9) : ";
	cin >> f;
	r.setFloor(f);
	cout << "Block (A - F) : ";
	cin >> bNo;
	r.setBlockNo(bNo);
	cout << "Street (01 - 20) : ";
	cin >> sNo;
	r.setStreetNo(sNo);

	outfile << r.out() << endl;
	outfile.close();
	return r;
}

// Showing Output
void showMembers() {
	fstream infile;
	infile.open("record.txt", ios::in);
	if (infile.is_open()) {
		string tp;
		while (getline(infile, tp)) {
			cout << tp << "\n";
		}
		infile.close();
	}
}
