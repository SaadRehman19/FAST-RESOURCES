#include<iostream>
using namespace std;
int count=0;
class Node
{
	public:
	int data;
	Node *next_add;
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
		void search();
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
void Linked_list::search()
{
	int flag=0;
	Node*temp;
	int a;
	cout<<"Enter the number you want to search";
	cin>>a;
	temp=head;
	while(temp!=NULL)
	{
		if(temp->data==a)
		{
			flag=1;
			cout<<endl<<"DATA HAS BEEN FOUND "<<temp->data;
			cout<<endl<<"Enter the new data you want to enter";
			cin>>temp->data;
		}
		temp=temp->next_add;
	}
	if(flag!=1)
	{
		cout<<endl<<"DATA HAS NOT BEEN FOUND ERROR";
		count=1;
	}
}
int main()
{
	Linked_list l;
	l.insert_node();
	l.insert_node();
	l.insert_node();
	l.display();
	l.search();
	if(count!=1)
	l.display();
	
	
	
}
