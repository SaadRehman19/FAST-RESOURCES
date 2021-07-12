#include<iostream>
#include "Q1.cpp"
int main()
{
	
	int a,b;
	cout<<"\nFOR ORDERED ARRAY:\n\n";
	cout<<"Enter size of array: ";
	cin>>a;
  	ODSA obj(a);
  	obj.set();
  	cout<<" Enter how much size you want to increase in an array";
  	cin>>b;
  	obj.ReSize(b);
  	obj.get();
  	obj.insertion();
  	obj.get();
  	obj.searching();
  	
  	cout<<"\n----NOW FOR UNORDERED ARRAY-----:\n\n";
	cout<<"enter size of array";
	cin>>a;
  	UDSA obj1(a);
  	obj1.set();
  	cout<<" Enter how much size you want to increase in an array ";
  	cin>>b;
  	obj1.ReSize(b);
  	obj1.get();
  	obj1.insertion1();
  	obj1.get();
  	obj1.searching1();
}
