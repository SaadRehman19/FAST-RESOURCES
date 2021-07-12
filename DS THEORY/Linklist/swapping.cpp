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
		void swap();
		
};
void Linked_list::insert_node()
{
	int choice =1;
	while(choice)
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
	cout<<"WANT TO CONTINUE ?(1/0)";
	cin>>choice;
}
}
void Linked_list::swap()
{
	Node *temp,*previous,*temp1;
	int pos,pos1;int i=1;
	cout<<"Enter the position you want to swap";
	cin>>pos;
	cout<<"with ?";
	cin>>pos1;
	temp=temp1=previous=head;
	if(i<pos)
	{
		previous=temp;
		temp=temp->next_add;
		i++;
	}
//	cout<<temp->data;
	i=1;
	if(i<pos1)
	{
		temp1=temp->next_add;
		i++;
	}
	previous->next_add=temp1;
	temp->next_add=temp1->next_add;
	temp1->next_add=temp;
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
	l.display();
	l.swap();
	l.display();
}
