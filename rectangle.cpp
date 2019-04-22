#pragma once
#include <iostream>
using namespace std;
#include "rectangle.h"

rectangle::rectangle(){
	height = 0;
	width = 0;
	color=""; 
}

rectangle::rectangle(float h,float w,string a):shape(a){
	height = h;
	width = w;
}

float rectangle::area(){
	float A=0;
	A=height*width;
	return A;
}