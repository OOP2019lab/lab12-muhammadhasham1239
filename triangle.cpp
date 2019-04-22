#pragma once
#include <iostream>
using namespace std;
#include "triangle.h"

triangle::triangle(){
	base=0;
	height=0;
	color="";
}

triangle::triangle(float b,float h,string c):shape(c){
	base=b;
	height=h;
}

float triangle::area(){
	float A=0;
	A=(base*height)/2;
	return A;
}
