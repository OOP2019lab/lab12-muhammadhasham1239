#pragma once
#include <iostream>
using namespace std;

class shape{
protected:
	string type;
public:
	virtual float area();
	shape();
	shape(string a);
	string color;
	~shape();


};