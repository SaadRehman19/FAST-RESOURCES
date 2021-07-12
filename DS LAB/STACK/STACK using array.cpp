#include<iostream>
using namespace std;
#define size 5
class Stack
{
	
	int stack[size];
	int top;
	public:
		Stack()
		{
			top=-1;
		}
		int stack_full()
		{
			if(top==size-1)
			return 1;
			else 
			return 0;
		}
		int stack_empty()
		{
			if(top==-1)
			return 1;
			else
			return 0;
		}
		void push(int data)
		{
			if(stack_full())
			{
				cout<<"STACK OVERFLOW!!";
			}
			else
			{
			top++;
			stack[top]=data;
			cout<<stack[top]<<" :HAS BEEN PUSHED INTO STACK"<<endl;
		}
	}
	int pop()
	{
		int temp;
		if(stack_empty())
		{
			cout<<"STACK IS EMPTYY";
			return -1;
			
		}
		else
		{
			temp=stack[top];
			top--;
			return temp;
		}
	}
	int peek()
	{
	    return stack[top];
	}	
	
};
int main()
{
	Stack obj;
	obj.push(6);
	obj.push(7);
	cout<<obj.pop()<<":HAS BEEN POPPED FROM THE STACK"<<endl;
	cout<<"TOP ELEMENT IN STACK :";
	cout<<obj.peek();
	
}
