/*
 * Employee.h
 *
 *  Created on: Sep 27, 2020
 *      Author: DEVILsPC
 */
#include <string>
#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

class Employee {
private:
	std::string fName;
	std::string lName;
	int year;
	double sale;
	double salary;
	double comission;
	std::string type;
public:

	//Dummy Constructor
	Employee();

	//with parameters
	Employee(std::string fName,std::string lName,int year,double sale,std::string type);

	//Getters and Setters for class variables

	// Getters
	const std::string getFname();

	const std::string getLname();

	const int getYear();

	const double getSale();

	const double getSalary();

	const double getComission();

	const std::string getType();

	// Setters

	void setFname(std::string fName);

	void setLname(std::string lName);

	void setYear(int year);

	void setSale(double sale);

	void setSalary(double salary);

	void setComission(double comission);

	void setType(std::string type);

	//Function to calculate Salary
	void estimateSalary();

	//Function to calculate Commission
	void estimateComission();

	//To show data
	void showData();

};


#endif /* EMPLOYEE_H_ */
