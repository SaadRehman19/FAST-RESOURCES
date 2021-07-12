//implementation of stack using linked list
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<stack>
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
void push(char exp)
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
char pop()
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
int isEmpty()
{
	return top==NULL;
}
void display()
{
	Node*temp=top;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
int isOperator(char x)
{
	if(x=='+'||x=='-'||x=='*'||x=='/')
	return 1;
	else
	return 0;
}
int prec(char x)
{
	if(x=='+'||x=='-')
	{
		return 1;
	}
	else if(x=='*'||x=='/')
	{
		return 2;
	}
	else if(x=='~')
	{
		return -1;
	}
	
}
char *inToPos(char*infinix,Stack&obj)
{
	//push(infinix[0]);
	int i=0;int j=0;
	char *postfix;
	int len=strlen(infinix);
	postfix=new char[len+1];
/*	while(infinix[i]!='\0')
	{
		if(obj.isEmpty())
		{
			if(isOperator(infinix[i]))
			{
				push(infinix[i]);
				cout<<infinix[i];
			}
			
		}
		i++;
	}
	i=0;*/
	while(infinix[i]!='\0')
	{
	
		if(!isOperator(infinix[i]))
		{
			//cout<<infinix[i];
			postfix[j]=infinix[i];
			i++;j++;
		}
		else
		{
			
			if(prec(infinix[i])>prec(top->data))
			{
				push(infinix[i]);
				i++;
			}
			else 
			{
				postfix[j]=pop();
				j++;
			}
		}
	}
	while(top!=NULL)
	{
		postfix[j]=pop();
	    j++;
	}
	j--;
	postfix[j]='\0';
	return postfix;

}
};
 int main()
{
	Stack obj;
	char infinix[]="a+b*c+d";
	obj.push('~');
	cout<<obj.inToPos(infinix,obj);
	
}
