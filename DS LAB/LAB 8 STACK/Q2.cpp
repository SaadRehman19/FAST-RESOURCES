//balancing equation
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
	char b;
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
			j++;
			a=pop();
			b=exp[i];
		//	cout<<a;
		//	cout<<b;
			if(a==40&&b==41)
			{
				flag++;
			}
			else if(a==123&&b==125)
			{
				flag++;
				//pop();
			}
			else if(a==91&&b==93)
			{
				flag++;
			}
			else
			{
				flag--;
			}
		}	
	}
if(flag==j)
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
	char exp[]="{25+(3-6)*8}";
	
	if(obj.isBalanced(exp))
	{
		cout<<"EQUATION IS BALANCED ";
	}
	else
	{
		cout<<"EQUATION IS NOT BALANCED";
	}
	
}
