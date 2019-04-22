#pragma once
#include <iostream>
using namespace std;
#include "shape.h"


class triangle:public shape{
	float base;
	float height;
public:
	triangle();
	triangle(float b,float h,string a);
	float area();
};
