/*
 * Employee.cpp
 *
 *  Created on: Sep 27, 2020
 *      Author: DEVILsPC
 */

#include<iostream>
#include "Employee.h"

using namespace std;

Employee::Employee(std::string fName, std::string lName, int year, double sale,
		std::string type) :
		fName(fName), lName(lName), year(year), sale(sale), salary(0), comission(
				0), type(type) {
	this->estimateSalary();
}

Employee::Employee(): fName(" "), lName(" "), year(0), sale(0), salary(0), comission(
		0), type(" ") {

}

const std::string Employee::getFname() {
	return fName;
}

void Employee::setFname(std::string fName) {
	this->fName = fName;
}

const std::string Employee::getLname() {
	return lName;
}

void Employee::setLname(std::string lName) {
	this->lName = lName;
}

const int Employee::getYear() {
	return year;
}

void Employee::setYear(int year) {
	this->year = year;
}

const double Employee::getSalary() {
	return salary;
}

void Employee::setSale(double sale) {
	this->sale = sale;
}

const double Employee::getSale() {
	return sale;
}

void Employee::setSalary(double salary) {
	this->salary = salary;
}

const double Employee::getComission() {
	return comission;
}

void Employee::setComission(double comission) {
	this->comission = comission;
}

const string Employee::getType() {
	return type;
}

void Employee::setType(string type) {
	this->type = type;
}

void Employee::estimateSalary() {
	this->estimateComission();
	if (this->getType() == "PT") {
		if (this->getYear() < 5) {
			this->salary = this->comission;
		} else {
			this->salary = 2500 + this->comission;
		}
	} else if (this->getType() == "FT") {
		if (this->getYear() < 5) {
			this->salary = 5000 + this->comission;
		} else {
			this->salary = 10000 + this->comission;
		}
	}
}

void Employee::estimateComission() {
	if (this->getSale() > 0 && this->getSale() <= 15000){
		this->comission = this->sale * 0.10;
	}else if (this->getSale() > 15000 && this->getSale() <= 60000){
		this->comission = 15000 * 0.10;
		this->comission += (this->sale - 15000)*0.15;
	}else{
		this->comission = 15000 * 0.10;
		this->comission += 45000 * 0.15;
		this->comission += (this->sale - 60000) * 0.33;
	}
}

void Employee::showData() {
	cout << "Name :" << this->fName << " " << this->lName << ", Experience : " << this->year << ", Sale : "
			<< this->sale << ", Salary : " << this->salary << ", Commission : " << this->comission << ", Full Time/Part Time : " << this->type << endl;
}



