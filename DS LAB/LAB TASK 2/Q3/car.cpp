#include<iostream>
#include"Car.h"
using namespace std;

void Car::set_data()
{
	cout<<"Enter model no of car";
	cin>>model_no;
	fflush(stdin);
	cout<<endl<<"Enter color of car";
	getline(cin,color);
	cout<<endl<<"Enter number plate of car";
	getline(cin,no_plate);
}
void Car::display()
{
	cout<<"\nMODEL NO :"<<model_no;
	cout<<endl<<"COLOR :"<<color;
	cout<<endl<<"Number Plate :"<<no_plate;
}
 Car::Car(Car &a)
 {
 	model_no=a.model_no;
 	color=a.color;
 	no_plate=a.no_plate;
 }
Car Car::operator =(Car &c)
//car car::operator =(car &c) 
{
	model_no=c.model_no;
 	color=c.color;
 	no_plate=c.no_plate;
 	return c;
}
