//Write a program to count the number of nodes in a given linked list.
#include<iostream>
using namespace std;
int count=0;
class Node
{
	public:
	int data;
	Node *next_add;
	public:
};
class Linked_list
{
	Node*head;
	public:
		Linked_list()
		{
			head=NULL;
		}
		void insert_node();
		void display();
		void sum();
		void max();
};
void Linked_list::insert_node()
{
	Node*temp;
	Node*new_node=new Node;
	cout<<"Enter the data in node";
	cin>>new_node->data;
	new_node->next_add=0;
	if(head==NULL)
	{
	   head=temp=new_node;
	}
	else
	{
		temp->next_add=new_node;
		temp=new_node;
	}
	count++;
}
void Linked_list::max()
{
	Node*temp;
	temp=head;
	int max=0;
	while(temp!=NULL)
	{
		if(temp->data>max)
		{
			
			max=temp->data;
		}
		temp=temp->next_add;
	}
	cout<<"\n THE MAXIMUM NO IN NODE IS:"<<max;
}
void Linked_list::sum()
{
	Node *temp;
	temp=head;
	int total=0;
	if(head==NULL)
	{
	cout<<"LINKED LIST IS EMPTY";	
	}
	else
	{
		while(temp!=NULL)
		{
		    total=total+temp->data;
			temp=temp->next_add;	
		}
	}
	cout<<"\n THE SUM OF NODE ELEMENT ARE :"<<total;
}
void Linked_list::display()
{
	Node*temp;
	if(head==NULL)
	{
		cout<<"\nLINKED LIST IS EMPTY";
	}
	else
	{
		temp=head;
		while(temp!=NULL)
		{
			cout<<temp->data;
			temp=temp->next_add;
		}
	}
}
int main()
{
	Linked_list l;
	l.insert_node();
	l.insert_node();
	l.insert_node();
	l.display();
	l.sum();
	l.max();
//	cout<<endl<<"NO OF NODE IN LINKED LIST ARE: "<<count;
	
	
}
