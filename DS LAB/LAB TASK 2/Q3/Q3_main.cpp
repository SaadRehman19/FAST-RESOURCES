#include<iostream>
#include"Car.cpp"
using namespace std;
int main()
{
	Car obj1,obj3;
	obj1.set_data();
	obj1.display();
	//obj1.display();
	Car obj2(obj1);
	cout<<"\nTHROUGH COPY CONSTRUCTOR";
	obj2.display();
	obj3=obj1;
	cout<<"\nBY ASSIGNMENT OPERATOR ";
	obj3.display();
	
	
	//same as Car obj2=obj1;
	
}
