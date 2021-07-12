#include<iostream>
#include"Quadratic.h"
#include<math.h>
using namespace std;

void Quadratic::setter()
{
	cout<<"QUADRATIC EQUATION --->ax^2+bx+c\n";
	cout<<"Enter the values of x^2,x and constant c";
	cout<<endl<<"FOR x^2:";
	cin>>a;
	cout<<endl<<"FOR x:";
	cin>>b;
	cout<<endl<<"FOR Contant c:";
	cin>>c;
}
void Quadratic::Cal()
{
	d=(pow(b,2))-(4*a*c);
	if(d<0)
	{
		cout<<"ROOTS ARE IMAGINARY";
	}
	if(d==0)
	{
		cout<<"ROOTS ARE EQUAL";
		x1=-b/(2*a);
		cout<<endl<<"ROOTS ARE :"<<x1;
	}
	if(d>0)
	{
		cout<<"ROOTS ARE REAL AND DISTINCT";
		x1=(-b+sqrt(d))/2*a;
		x2=(-b-sqrt(d))/2*a;
		cout<<endl<<"ROOTS ARE :"<<x1<<","<<x2;
	}	
}

