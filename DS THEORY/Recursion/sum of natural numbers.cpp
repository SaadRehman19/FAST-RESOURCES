#include<iostream>
using namespace std;
int sum(int a)
{
	if(a==1) //a==0
	{
		return 1;
	}
	else
	{
		return a+sum(a-1);
	}
}
int main()
{
	int n;
	cout<<"Enter a number ";
	cin>>n;
	cout<<"Sum of first "<<n<<" numbers are:\n";
	cout<<sum(n);
}
