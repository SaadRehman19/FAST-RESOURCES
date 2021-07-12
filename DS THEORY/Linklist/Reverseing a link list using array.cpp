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
		void reverse();
		
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
void Linked_list::reverse()
{
	int arr[count];
	Node *temp;
	temp=head;
	int b=0;
	while(temp!=NULL)
	{
		arr[b]=temp->data;
		temp=temp->next_add;
		b++;
	}
	temp=head;
	b--;
	while(temp!=NULL)
	{
		temp->data=arr[b];
		b--;
		temp=temp->next_add;
	}
	temp=head;
	cout<<":the data in reverse order is :";
	while(temp!=NULL)
	{
		cout<<temp->data;
		temp=temp->next_add;
	}
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
	l.reverse();
	

	
	
}
