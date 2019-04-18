#pragma once
#include "Shape.h"
class Rectangle :
	public Shape
{
protected:
	double dWidth;
	double dLength;
public:
	Rectangle() {
		this->dWidth = 0;
		this->dLength = 0;
	}

	Rectangle(double dWidth, double dLength) {
		this->dWidth = dWidth;
		this->dLength = dLength;
	}

	Rectangle(double dWidth, double dLength, string sColor, bool bFilled) : Shape(sColor, bFilled) {
		this->dWidth = dWidth;
		this->dLength = dLength;
	}

	double getWidth();
	void setWidth(double dWidth);
	double getLength();
	void setLength(double dLength);

	double getArea();
	double getPerimeter();
	string toString();

	void input() {
		cout << "Color: ";
		rewind(stdin);
		getline(cin, this->sColor);
		cout << "Filled: ";
		cin >> this->bFilled;
		cout << "Width: ";
		cin >> this->dWidth;
		cout << "Length: ";
		cin >> this->dLength;
	}

	void output() {
		cout << "Color: " << this->sColor << endl;
		cout << "Filled: " << this->bFilled << endl;
		cout << "Width: " << this->dWidth << endl;
		cout << "Length: " << this->dLength << endl;
		cout << "Area: " << this->getArea() << endl;
		cout << "Perimeter: " << this->getPerimeter() << endl;
		cout << "Shape: " << this->toString() << endl;
	}

	virtual ~Rectangle() {};
};

