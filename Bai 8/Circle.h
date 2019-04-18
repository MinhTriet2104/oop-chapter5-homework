#pragma once
#include "Shape.h"
class Circle :
	public Shape
{
protected:
	double dRadius;
public:
	Circle() {
		this->dRadius = 0;
	}

	Circle(double dRadius ,string sColor, bool bFilled) : Shape(sColor, bFilled) {
		this->dRadius = dRadius;
	}

	double getRadius();
	void setRadius(double dRadius);
	
	double getArea();
	double getPerimeter();
	string toString();

	void input() {
		cout << "Color: ";
		rewind(stdin);
		getline(cin, this->sColor);
		cout << "Filled: ";
		cin >> this->bFilled;
		cout << "Radius: ";
		cin >> this->dRadius;
	}

	void output() {
		cout << "Color: " << this->sColor << endl;
		cout << "Filled: " << this->bFilled << endl;
		cout << "Radius: " << this->dRadius << endl;
		cout << "Area: " << this->getArea() << endl;
		cout << "Perimeter: " << this->getPerimeter() << endl;
		cout << "Shape: " << this->toString() << endl;
	}

	virtual ~Circle() {};
};

