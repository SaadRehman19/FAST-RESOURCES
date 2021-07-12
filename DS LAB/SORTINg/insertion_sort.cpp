#include<iostream>
using namespace std;
int main()
{
	int size;int j;
	cout<<"Enter the size of array you want to enter :";
	cin>>size;
	int *p=new int[size];
	for(int i=0;i<size;i++)
	{
		cin>>p[i];
	}
	for(int i=1;i<size;i++)
	{
		int temp=p[i];
		j=i-1;
		while(j>=0&&p[j]>temp)
		{
			p[j+1]=p[j];
			j--;
		}
		p[j+1]=temp;
	}
	cout<<"THE SORTED ARRAY IS:";
	for(int i=0;i<size;i++)
	{
		cout<<p[i];
	}
}
