#pragma once
#include <iostream>
using namespace std;
#include "circle.h"
#include "rectangle.h"
#include "shape.h"
#include "triangle.h"
#include <string>

float sumarea(shape &a,shape &b){
	float A=0;
	A=a.area()+b.area();
	return A;
}

void main(){
	//exercise 1
	triangle t1(1.0,9.0,"Red");
	circle c1(2,"Blue");
	rectangle r1(6,2,"Orange");
	cout<<t1.area()<<endl;
	cout<<t1.color<<endl;
	cout<<c1.area()<<endl;
	cout<<r1.area()<<endl;
 
	shape *sptr= &t1;
	shape &sref=r1;
	cout<< sptr->area()<<endl;
	cout<< sptr->color<<endl;
	cout<< sref.color<<endl;
	cout<< sref.area()<<endl;
	//exercise 3a
	shape s1("Purple");
	cout<<sumarea(t1,c1)<<endl;
	cout<<sumarea(s1,r1)<<endl;
	cout<<sumarea(s1,t1)<<endl;
	 //exercise 3b
	int count =5;
	shape *shapesarray=new shape[count];
	int x=0;
	for(int i=0;i<count;i++){
	cout<<"Press 1 for a triangle, 2 for rectangle and 3 for a circle"<<endl;
	cin>>x;
	if(x==1){
		float b=0;
		float h=0;
		string c;
	cout<<"Enter base of triangle"<<endl;
	cin>>b;
	cout<<"Enter height of triangle"<<endl;
	cin>>h;
	cout<<"Enter color"<<endl;
	cin>>c;
	shapesarray[i]=triangle(b,h,c);
	}else{
	if(x==2){
		float b=0;
		float h=0;
		string c;
	cout<<"Enter lenght"<<endl;
	cin>>b;
	cout<<"Enter width"<<endl;
	cin>>h;
	cout<<"Enter color"<<endl;
	cin>>c;
	shapesarray[i]=rectangle(b,h,c);
	}
	if(x==3){
		float b=0;
		string c;
	cout<<"Enter radius"<<endl;
	cin>>b;
	cout<<"Enter color"<<endl;
	cin>>c;
	shapesarray[i]=circle(b,c);
	}
	if(x>3 || x<1){
	cout<<"Invalid input"<<endl;
	while(x==1 || x==2 || x==3){
	cin>>x;
		}
	}
	}
	}
	for(int i=0;i<count;i++){
		cout<<shapesarray->area()<<endl;
	}
	shape *s9= new triangle(1.0,9.0,"Red");// constructor of triangle invoked
	delete s9; 



system("pause");
}