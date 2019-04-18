#include "Square.h"

double Square::getArea() {
	return this->dLength * this->dWidth;
}

double Square::getPerimeter() {
	return (this->dLength + this->dWidth) * 2;
}

string Square::toString() {
	return "Square";
}
