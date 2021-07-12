#include<iostream>
using namespace std;
int fun(int *a,int n,int i)
{
	if(n==0)
	{
		return 0;
	}
	else
	{
	cout<<a[i];
	fun(a,n-1,i-1);
}
}
int main()
{
	int n;
	cout<<"Enter the size of array";
	cin>>n;
	int *p=new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>p[i];
	}
	int i=n-1;
	cout<<"ARRAY IN REVERSE ORDER :";
	fun(p,n,i);
}
