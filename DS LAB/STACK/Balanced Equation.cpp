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
	char push(char);
	char pop();
	int isBalanced(char*);
	void display();
};
char Stack::push(char exp)
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
char Stack::pop()
{
	Node*temp;
	char a=-1;
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
	char a;
	static int flag=0;
	static int j=0;
	for(int i=0;exp[i]!='\0';i++)
{
		if(exp[i]=='{'||exp[i]=='('||exp[i]=='[')
		{
			push(exp[i]);
		}
		else if(exp[i]=='}'||exp[i]==')'||exp[i]==']')
		{
		//	if(top!=NULL)
		//	{
			a=pop();
			
			if(a>=91&&a<=93)
			{
				cout<<a;
				flag++;
			}
			if(a>=40&&a<=41)
			{
				cout<<a;
				flag++;
			}
			if(a>=123&&a<=125)
			{
				cout<<a;
				flag++;
			}
			else if(!(a=='['||a=='{'||a=='('))
	//		else
			{
			cout<<"s";
				flag--;
			}
	
			
//	}
	}
}
cout<<flag;
	if(flag==4)
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
	char exp[]="{([25+b]*[c-d])/e}";
	
	cout<<obj.isBalanced(exp);
	
}
