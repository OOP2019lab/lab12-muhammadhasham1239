#pragma once
#include <iostream>
using namespace std;
#include "shape.h"
#include <string>

float shape::area(){
	return 0;
}
shape::shape(){
	type="";
	color="";
}

shape::shape(string a){
	type="";
	color=a;
}

shape::~shape(){
	cout<<"destructor of shape invoked"<<endl;
}