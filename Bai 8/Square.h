#pragma once
#include "Rectangle.h"
class Square :
	public Rectangle
{
public:
	Square() {
		this->dLength = this->dLength = 0;
	}

	Square(double dSide) : Rectangle(dSide, dSide) {}

	Square(double dSide, string sColor, bool bFilled) : Rectangle(dSide, dSide, sColor, bFilled) {}

	double getArea();
	double getPerimeter();
	string toString();

	virtual void input() {
		cout << "Color: ";
		rewind(stdin);
		getline(cin, this->sColor);
		cout << "Filled: ";
		cin >> this->bFilled;
		cout << "Side: ";
		cin >> this->dWidth;
		this->dLength = this->dWidth;
	}

	virtual void output() {
		cout << "Color: " << this->sColor << endl;
		cout << "Filled: " << this->bFilled << endl;
		cout << "Side: " << this->dWidth << endl;
		cout << "Area: " << this->getArea() << endl;
		cout << "Perimeter: " << this->getPerimeter() << endl;
		cout << "Shape: " << this->toString() << endl;
	}

	virtual ~Square() {};
};

