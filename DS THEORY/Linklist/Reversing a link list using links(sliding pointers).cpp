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
void Linked_list::reverse()
{
      Node*temp;
	  Node *b=NULL,*a=NULL;
	  temp=head;
	  while(temp!=NULL)
	  {
	  	a=b;         
	  	b=temp;
	  	temp=temp->next_add;
	  	b->next_add=a;
		  }	
		  head=b;  
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
	cout<<endl<<"AFTER REVERSE :";
	l.reverse();
	l.display();
	

	
	
}
