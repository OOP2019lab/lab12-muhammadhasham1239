#pragma once
#include <iostream>
using namespace std;
#include "shape.h"

class circle:public shape{
	float radius;
public:
	circle();
	circle(float radius,string c);
	float area();
};