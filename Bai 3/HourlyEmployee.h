#pragma once
#include "Employee.h"
class HourlyEmployee :
	public Employee
{
private:
	double dRate;
	double dWorkingHours;
public:
	HourlyEmployee() {
		this->dRate = 0.0;
		this->dWorkingHours = 0.0;
	}

	HourlyEmployee(double dRate, double dWorkingHours) {
		this->dRate = dRate;
		this->dWorkingHours = dWorkingHours;
	}

	HourlyEmployee(int iEmpCode, string sFirstName, string sLastName, double dRate, double dWorkingHours) :
	Employee(iEmpCode, sFirstName, sLastName) {
		this->dRate = dRate;
		this->dWorkingHours = dWorkingHours;
	}

	double pay();
	void print();
	void input();

	virtual ~HourlyEmployee() {};
};