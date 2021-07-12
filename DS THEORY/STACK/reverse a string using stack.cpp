#include<iostream>
using namespace std;
#define size 4
class Stack
{
	string stack[size];
	int top;
	public:
		Stack()
		{
			top=-1;
		}
		void push(char *p)
		{
			if(top==size-1)
			{
				cout<<"STACK IS FULL";
			}
			else
			{
				top++;
				stack[top]=p;
				cout<<stack[top]<<" :HAS BEEN PUSHED IN STACK\n";
			}
		}
		string pop()
		{
			string a="-1";
			if(top==-1)
			{
				cout<<"STACK IS EMPTY";
			}
			else
			{
				a=stack[top];
				top--;
			}
			return a;
		}
};
int main()
{
	Stack s;
	s.push("Saad Rehman");
	s.push("Saif Rehman");
	s.push("yasir");
	cout<<s.pop();
	cout<<s.pop();
}

