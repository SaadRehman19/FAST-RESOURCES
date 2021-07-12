//implementation of stack using linked list
#include<iostream>
using namespace std;
class Node
{
	public:
	int data;
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
	void push(int);
	int pop();
	void display();
	void peek();
};
void Stack::push(int a)
{
	Node*new_node=new Node;
	if(new_node==NULL)
	{
		cout<<"STACK OVERFLOW";
		
	}
	else
	{
	new_node->data=a;
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
void Stack::peek()
{
	if(top==NULL)
	{
		cout<<"STACK IS EMPTY";
	}
	else
	{
		cout<<top->data;
	}
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
int main()
{
	Stack obj;
	obj.push(5);
	obj.push(7);
	obj.display();
	cout<<"AFTER POPPING ONE ELEMENT:";
	cout<<obj.pop();
	cout<<"AGAIN PUSHING ONE ELEMENT:";
	obj.push(1);
	obj.display();
	//obj.peek();
}
