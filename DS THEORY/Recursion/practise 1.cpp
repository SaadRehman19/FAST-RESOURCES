#include<iostream>
using namespace std;
int fun(int x)
{
	//static int n=0;
	if(x>0)
	{
		//n++;
		return fun(x-1)+x;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int a=5,b=0;
	 b=fun(5);
	cout<<b;
}
