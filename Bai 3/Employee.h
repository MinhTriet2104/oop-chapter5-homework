#ifndef Employee_h
#define Employee_h

#pragma once
#include <iostream>
#include <string>
using namespace std;

class Employee
{
protected:
	int iEmpCode;
	string sFirstName;
	string sLastName;
public:
	Employee() {
		this->iEmpCode = 0;
		this->sFirstName = "";
		this->sLastName = "";
	}

	Employee(int iEmpCode, string sFirstName, string sLastName) {
		this->iEmpCode = iEmpCode;
		this->sFirstName = sFirstName;
		this->sLastName = sLastName;
	}

	virtual double pay() = 0;
	virtual void  print() = 0;
	virtual void input() = 0;

	virtual ~Employee() {};
};

#endif // !Employee_h

