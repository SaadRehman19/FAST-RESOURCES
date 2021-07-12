#include<iostream>
using namespace std;
int main()
{
	int size;
	int loc,a;
	int arr[20];
	cout<<"Enter size of array";
	cin>>size;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<(size-1);i++)
	{
		a=arr[i];
		loc=i;
		for(int j=i+1;j<size;j++)
		{
			if(arr[j]<a)
			{
			a=arr[j];
			loc=j;
		}
		}
		int temp=arr[i];
	arr[i]=arr[loc];
	arr[loc]=temp;
		
	}

	for(int i=0;i<size;i++)
	{
		cout<<arr[i];
	}
}
