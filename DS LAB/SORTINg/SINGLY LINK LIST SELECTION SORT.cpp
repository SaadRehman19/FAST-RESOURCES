#include<iostream>
using namespace std;
class Node
{
	public:
		int data;
		Node *next_add;
};
class Linked_list
{
	private:
		Node *head;
		public:
			Linked_list()
			{
				head=NULL;
			}
			void insert_node();
			void display();
	        void bubble_sort();
	        void selection_sort();
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
void Linked_list::bubble_sort()
{
	Node*temp1=head;
	Node*temp2;
	while(temp1!=NULL)
	{
		temp2=temp1->next_add;
		while(temp2!=NULL)
		{
			if(temp1->data>temp2->data)
			{
				int var=temp2->data;
				temp2->data=temp1->data;
				temp1->data=var; 
				
			}
			temp2=temp2->next_add;
		}
		temp1=temp1->next_add;
	}
}
void swap(int &a,int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
void Linked_list::selection_sort()
{
	
	Node*temp1;
	Node*temp2;
	Node*q;
	//temp1=head;
	for(temp1=head;temp1!=NULL;temp1=temp1->next_add)
	{
		q=temp1;
		for(temp2=temp1->next_add;temp2!=NULL;temp2=temp2->next_add)
		{
			if(temp2->data<q->data)
			{
				q=temp2;
			}
		}
	//	cout<<"S";
	//	cout<<temp1->data;
	//	cout<<q->data;
	//	break;
		swap(temp1->data,q->data);
	}
}
int main()
{
	Linked_list l;
	int node;
	cout<<"Enter how many node";
	cin>>node;
	for(int i=0;i<node;i++)
	{
	l.insert_node();	
	}
//	l.bubble_sort();
//	l.display();
    l.selection_sort();
    l.display();
}
