#pragma once
#include <iostream>
using namespace std;
#include "circle.h"

circle::circle(){
	radius =0;
}

circle::circle(float r,string c):shape(c){
	radius=r;
}

float circle::area(){
	float A=0;
	A=(3.14)*pow(radius,2);
	return A;
}