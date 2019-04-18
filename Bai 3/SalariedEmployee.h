#pragma once
#include "Employee.h"
class SalariedEmployee :
	public Employee
{
private:
	double dCommisionRate;
	double dGrossSales;
	double dBasic;
public:
	SalariedEmployee() {
		this->dCommisionRate = 0.0;
		this->dGrossSales = 0.0;
		this->dBasic = 0.0;
	}

	SalariedEmployee(double dCommisionRate, double dGrossSales, double dBasic) {
		this->dCommisionRate = dCommisionRate;
		this->dGrossSales = dGrossSales;
		this->dBasic = dBasic;
	}

	SalariedEmployee(int iEmpCode, string sFirstName, string sLastName, double dCommisionRate, double dGrossSales, double dBasic) :
	Employee(iEmpCode, sFirstName, sLastName) {
		this->dCommisionRate = dCommisionRate;
		this->dGrossSales = dGrossSales;
		this->dBasic = dBasic;
	}

	double pay();
	void print();
	void input();

	virtual ~SalariedEmployee() {};
};

