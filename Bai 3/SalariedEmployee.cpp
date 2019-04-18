#include "SalariedEmployee.h"

double SalariedEmployee::pay() {
	return this->dBasic + this->dCommisionRate * this->dGrossSales;
}

void SalariedEmployee::print() {
	cout << "Emp Code: " << this->iEmpCode << endl;
	cout << "First Name: " << this->sFirstName << endl;
	cout << "Last Name: " << this->sLastName << endl;
	cout << "Commision Rate: " << this->dCommisionRate << endl;
	cout << "Gross Sales: " << this->dGrossSales << endl;
	cout << "Basic: " << this->dBasic << endl;
}

void SalariedEmployee::input() {
	cout << "Emp Code: ";
	cin >> this->iEmpCode;

	cout << "First Name: ";
	rewind(stdin);
	getline(cin, this->sFirstName);

	cout << "Last Name: ";
	rewind(stdin);
	getline(cin, this->sLastName);

	cout << "Commision Rate: ";
	cin >> this->dCommisionRate;

	cout << "Gross Sales: ";
	cin >> this->dGrossSales;

	cout << "Basic: ";
	cin >> this->dBasic;
}
