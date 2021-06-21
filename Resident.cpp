#include<iostream>
#include <stdlib.h>
#include <string>
#include<bits/stdc++.h>
#include "Resident.h"
using namespace std;

// Definitions of the various functions declared in Resident.h file
Resident::Resident(){
	this->houseNo = 0;
		this->blockNo = 'A';
		this->streetNo = 0;
		this->floor = 0;
		this->memberId = 0;
}
char Resident::getBlockNo() const {
	return blockNo;
}

void Resident::setBlockNo(char blockNo) {
	this->blockNo = blockNo;
}

int Resident::getFloor() const {
	return floor;
}

void Resident::setFloor(int floor) {
	this->floor = floor;
}

int Resident::getHouseNo() const {
	return houseNo;
}

void Resident::setHouseNo(int houseNo) {
	this->houseNo = houseNo;
}

int Resident::getMemberId() const {
	return memberId;
}

void Resident::setMemberId(int memberId) {
	this->memberId = memberId;
}

int Resident::getStreetNo() const {
	return streetNo;
}

void Resident::setStreetNo(int streetNo) {
	this->streetNo = streetNo;
}

// Function to generate output
string Resident::out(){
	string st(1, this->getBlockNo());
	std::string s =  "Member Id : " + std::to_string(this->getMemberId()) + ", House No : " + std::to_string(this->getHouseNo()) + ", Floor : " +
			std::to_string(this->getFloor()) + ", Block : " + st + ", Street : " + std::to_string(this->getStreetNo());
	return s;
}
