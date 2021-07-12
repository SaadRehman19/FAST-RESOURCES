#include<iostream>
using namespace std;
// copies element of stack in reversee order
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
			cout<<endl<<stack[top]<<" :HAS BEEN PUSHED INTO STACK";
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
//	friend bool operator==(Stack&,Stack&);
friend bool operator==(Stack s1,Stack s2)
{
	int flag=0;
	if(!(s1.stack_empty()&&s2.stack_empty()))
	{
		for(int i=0;i<size;i++)
		{
		if(s1.pop()==s2.pop())
		{
			flag++;
		}
		else
		{
			flag--;
		}
	}
	if(flag==size)
	return true;
	else
	return false;
	
}
	
}
void reverse(Stack &s)
{
	for(int i=0;i<size;i++)
	{
		push(s.pop());
	}
}
};
int main()
{
	int temp;
	Stack obj1,obj2;
	cout<<"-------------------STACK 1----------------";
	obj1.push(1);
	obj1.push(2);
	obj1.push(3);
	obj1.push(4);
	obj1.push(5);
	cout<<endl<<"---------------PUSH VALUE IN STACK 2----------";
	obj2.reverse(obj1);
}

