#include "Circle.h"
#include "Square.h"
#include <vector>
using namespace std;

void inputListShape(vector<Shape*> &listShape);
void outputListShape(vector<Shape*> listShape);

int main() {
	int iN;
	cout << "Input amount: ";
	cin >> iN;

	vector<Shape*> listShape(iN);
	inputListShape(listShape);
	outputListShape(listShape);

	system("pause");
	return 0;
}

void inputListShape(vector<Shape*> &listShape) {
	cout << "\n* Type Shape *\n";
	cout << "1. Circle\n";
	cout << "2. Rectangle\n";
	cout << "3. Square\n";
	for (int i = 0; i < listShape.size(); i++) {
		int type;
		cout << "\t- Input type: ";
		cin >> type;
		if (type == 1) {
			listShape[i] = new Circle;
			listShape[i]->input();
		}
		else if (type == 2) {
			listShape[i] = new Rectangle;
			listShape[i]->input();
		}
		else {
			listShape[i] = new Square;
			listShape[i]->input();
		}
	}
}

void outputListShape(vector<Shape*> listShape) {
	cout << "**********************OUTPUT**********************\n";
	for (int i = 0; i < listShape.size(); i++) {
		cout << "\n--- Shape " << i + 1 << " ---\n" << endl;
		listShape[i]->output();
	}
}