#ifndef Base_h
#define Base_h

#pragma once
#include <iostream>
using namespace std;

class Base
{
public:
	Base() {}
	virtual void print() {
		cout << "Base" << endl;
	}
	virtual ~Base() {};
};

#endif // Base_h

