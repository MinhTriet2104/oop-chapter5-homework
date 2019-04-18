#ifndef Shape_h
#define Shape_h

#pragma once
#include <iostream>
#include <string>
using namespace std;

class Shape
{
protected:
	string sColor;
	bool bFilled;
public:
	Shape() {
		this->sColor = "";
		this->bFilled = 0;
	}

	Shape(string sColor, bool bFilled) {
		this->sColor = sColor;
		this->bFilled = bFilled;
	}

	string getColor();
	void setColor(string sColor);
	bool isFilled();
	void setFilled(bool bFilled);

	virtual double getArea() = 0;
	virtual double getPerimeter() = 0;
	virtual string toString() = 0;
	virtual void input() = 0;
	virtual void output() = 0;

	virtual ~Shape() {};
};

#endif // !Shape_h