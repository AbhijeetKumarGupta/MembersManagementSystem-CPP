#include <iostream>
#include "Employee.h"
using namespace std;

int main() {

	// Variables to store temporary data
	int noOfSalesperson = 0;
	double averageSalary = 0;
	double averageComission = 0;

	std::string fName;
	std::string lName;
	int year;
	double sale;
	std::string type;

	// Takes user input for no of sales persons
	cout << "Enter the number of salesperson: ";
	cin >> noOfSalesperson;

	// Creates an array to store those employees
	Employee* employees = new Employee[noOfSalesperson];

	// Takes details of employees from the user
	for (int i = 0; i < noOfSalesperson; i++) {
		cout << "\nEnter Details of Employee " << i+1 << " - " << endl;
		cout << "Employee First Name: ";
		cin >>fName;
		cout << "Employee Last Name: ";
		cin >>lName;
		cout << "Employee Experience in Years: ";
		cin >>year;
		cout << "Employee Total Sale: ";
		cin >>sale;
		cout << "Employee Type (For Part Time - \"PT\",Full Time- \"FT\"): ";
		cin >>type;
		Employee e(fName,lName,year,sale,type);
		employees[i] = e;
		averageSalary += e.getSalary();
		averageComission += e.getComission();
	}

	// Calculates Average Salary and commission
	averageSalary = averageSalary/noOfSalesperson;
	averageComission = averageComission/noOfSalesperson;

	// Outputs details of the employee
	cout << "\nEmployee Details - " << endl;
	for (int i = 0; i < noOfSalesperson; i++) {
		employees[i].showData();
	}
	cout << "\nAverage Data -" << endl;
	cout << "Average Salary = " << averageSalary << endl;
	cout << "Average Commission = " << averageComission << endl;

return 0;
}
