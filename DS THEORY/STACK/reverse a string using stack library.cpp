#include<iostream>
#include<stack>
#include<string.h>
using namespace std;
char reverse(char a[],int n)
{
     stack<char>s;
	 for(int i=0;i<n;i++)
	 {
	 	s.push(a[i]);
		 }
		 for(int i=0;i<n;i++)
		 {
		 	a[i]=s.top();
		 	s.pop();
		}	
}
int main()
{
	char a[50];
	cout<<"Enter a string";
	cin>>a;
	reverse(a,strlen(a));
	cout<<a;
}
