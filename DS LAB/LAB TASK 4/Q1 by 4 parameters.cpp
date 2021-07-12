#include<iostream>
using namespace std;
int total=0;
int i=0;
int Sum_Num(int *a,int no)
{
	i++;
		if(a[i]%2==0)
		{
			total=total+a[i];
		}
		if(no==0)
		{
			return total;
		}
		Sum_Num(a,no-1);
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
//	int total=0;
	//int i=0;
	cout<<"SUM OF EVEN NUMBERS ARE :"<<Sum_Num(p,n);
	
}
