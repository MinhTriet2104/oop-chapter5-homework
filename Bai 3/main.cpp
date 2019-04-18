//Khai bao thu vien
#include "HourlyEmployee.h"
#include "SalariedEmployee.h"
#include <vector>

//Khai bao nguyen ham
void inputListEmployee(vector<Employee*> &listEmployee);
void outputListEmployee(vector<Employee*> listEmployee);

//Ham main
int main() {
	int iN;
	cout << "Input amount: ";
	cin >> iN;
	vector<Employee*> listEmployee(iN);

	inputListEmployee(listEmployee);
	outputListEmployee(listEmployee);

	system("pause");
	return 0;
}

void outputListEmployee(vector<Employee*> listEmployee) {
	cout << "\n*****************OUTPUT*****************\n";
	for (int i = 0; i < listEmployee.size(); i++) {
		cout << "- Info employee " << i + 1 << ": \n";
		listEmployee[i]->print();
	}
}

void inputListEmployee(vector<Employee*> &listEmployee) {
	cout << "\n* Type Employee *\n";
	cout << "\t1. Hourly Employee \n";
	cout << "\t2. Salaried Emplyee \n";
	for (int i = 0; i < listEmployee.size(); i++) {
		int iOption;
		cout << "Input type: ";
		cin >> iOption;
		if (iOption == 1) {
			listEmployee[i] = new HourlyEmployee;
			listEmployee[i]->input();
		}
		else {
			listEmployee[i] = new SalariedEmployee;
			listEmployee[i]->input();
		}
	}
}