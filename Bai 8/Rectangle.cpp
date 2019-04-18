#include "Rectangle.h"

double Rectangle::getWidth() {
	return this->dWidth;
}

void Rectangle::setWidth(double dWidth) {
	this->dWidth = dWidth;
}

double Rectangle::getLength() {
	return this->dLength;
}

void Rectangle::setLength(double dLength) {
	this->dLength = dLength;
}

double Rectangle::getArea() {
	return this->dWidth * this->dLength;
}

double Rectangle::getPerimeter() {
	return (this->dWidth + this->dLength) * 2;
}

string Rectangle::toString() {
	return "Rectangle";
}