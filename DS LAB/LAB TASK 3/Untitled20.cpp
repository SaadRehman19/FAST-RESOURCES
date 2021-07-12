#include<iostream>
using namespace std;
int main()
{
	int num=321,rev=0,r;
	while(num!=0)
	{
		r=num%10;
		rev=(rev*10)+r;
		num=num/10;
}
cout<<rev;

}
