#pragma once
#include <iostream>
using namespace std;
#include "shape.h"

class rectangle:public shape{
	float height;
	float width;
public:
	float area();
	rectangle();
	rectangle(float h,float w,string a);
};