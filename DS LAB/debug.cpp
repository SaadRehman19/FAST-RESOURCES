#include<iostream>
using namespace std;
int main()
{
	int m,n=4,i,j=3;
	cin>>m;
	for(i=0;i<5;i++)
	{
		m++;
		n++;
		m=n;
		j++;
	}
}
