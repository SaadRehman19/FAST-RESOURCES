#include<iostream>
using namespace std;
#define size 5
// compare two stacks relational operator
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
};
int main()
{
	Stack obj1,obj2;
	cout<<"-------------------STACK 1----------------";
	obj1.push(6);
	obj1.push(5);
	obj1.push(10);
	obj1.push(7);
	obj1.push(9);
	cout<<endl<<"--------------------STACK 2---------------";
	obj2.push(6);
	obj2.push(5);
	obj2.push(10);
	obj2.push(7);
	obj2.push(8);
    
    if(obj1==obj2)
    {
    	cout<<endl<<"BOTH STACK ARE EQUAL ";
	}
	else
	{
		cout<<endl<<"BOTH STACK ARE NOT EQUAL ";
	}
	
}
