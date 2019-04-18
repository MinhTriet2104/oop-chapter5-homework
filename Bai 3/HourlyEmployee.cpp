#include "HourlyEmployee.h"

double HourlyEmployee::pay() {
	return this->dRate * this->dWorkingHours;
}

void HourlyEmployee::print() {
	cout << "Emp Code: " << this->iEmpCode << endl;
	cout << "First Name: " << this->sFirstName << endl;
	cout << "Last Name: " << this->sLastName << endl;
	cout << "Rate: " << this->dRate << endl;
	cout << "Working Hours: " << this->dWorkingHours << endl;
}

void HourlyEmployee::input() {
	cout << "Emp Code: ";
	cin >> this->iEmpCode;

	cout << "First Name: ";
	rewind(stdin);
	getline(cin, this->sFirstName);

	cout << "Last Name: ";
	rewind(stdin);
	getline(cin, this->sLastName);

	cout << "Rate: ";
	cin >> this->dRate;

	cout << "Working Hours: ";
	cin >> this->dWorkingHours;
}