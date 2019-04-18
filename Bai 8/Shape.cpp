#include "Shape.h"

string Shape::getColor() {
	return this->sColor;
}

void Shape::setColor(string sColor) {
	this->sColor = sColor;
}

bool Shape::isFilled() {
	return this->bFilled;
}

void Shape::setFilled(bool bFilled) {
	this->bFilled = bFilled;
}
