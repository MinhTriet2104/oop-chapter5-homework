#include "Circle.h"

double Circle::getRadius() {
	return this->dRadius;
}

void Circle::setRadius(double dRadius) {
	this->dRadius = dRadius;
}

double Circle::getArea() {
	return this->dRadius * this->dRadius * 3.14;
}

double Circle::getPerimeter() {
	return this->dRadius * 2 * 3.14;
}

string Circle::toString() {
	return "Circle";
}
