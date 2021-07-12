#include<iostream>
using namespace std;
int main()
{
	int count=0;int arr[6];
	int n,number,r;
	int *p;
	cout<<"Enter size of array";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>p[i];
		number=p[i];
		while(number!=0)
		{
			cout<<"s";
			r=number%10;
			number=number/10;
			count++;
		}
		arr[i]=number;
		cout<<count;
	
}
//for(int i=0;i<count;i++)
}
	
	
