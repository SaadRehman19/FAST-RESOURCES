//implementation of stack using linked list
#include<iostream>
using namespace std;
class Node
{
	public:
	char data;
	Node *next;
};
class Stack
{
	Node*top;
	public:
	Stack()
	{
		top=NULL;
	}
	void push(char);
	int pop();
	int isBalanced(char*);
	void display();
};
void Stack::push(char exp)
{
	Node*new_node=new Node;
	if(new_node==NULL)
	{
		cout<<"STACK OVERFLOW";
		
	}
	else
	{
	new_node->data=exp;
	new_node->next=top;
	top=new_node;
}
}
int Stack::pop()
{
	Node*temp;
	int a=-1;
	if(top==NULL)
	{
		cout<<"STACK IS EMPTY";
	}
	else
	{
	temp=top;
	a=temp->data;	
	top=temp->next;
	delete[]temp;
}
return a;
}

void Stack::display()
{
	Node*temp=top;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
int Stack::isBalanced(char *exp)
{
	for(int i=0;exp[i]!='\0';i++)
	{
		if(exp[i]=='(')
		{
			push(exp[i]);
		}
		else if(exp[i]==')')
		{
			if(top!=NULL)
			{
				
				pop();
			}
			else
			{
				return 0;
			}
		}
	}
	if(top==NULL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
}
int main()
{
	Stack obj;
	char exp[]="((a+b)*(c-d))";
	
	cout<<obj.isBalanced(exp);
	
}
