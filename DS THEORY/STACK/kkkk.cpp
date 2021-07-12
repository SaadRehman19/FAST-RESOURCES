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
	void Enqueue(int x,Stack &obj2)
	{
		obj2.push(x);
	}
	int Dequeue(Stack&obj2)
	{
		int a;
		a=obj2.pop();
		cout<<a;
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
	void display()
	{
		while(top!=NULL)
		{
			cout<<stack[top];
			top--;
		}
		cout<<stack[top];
	}
	
};
int main()
{
	Stack obj,obj2;
	obj.Enqueue(6,obj2);
	obj.Enqueue(7,obj2);
	obj.Enqueue(9,obj2);
	obj.Dequeue(obj2);
//	obj2.display();
	
	
}
