#include<iostream>
using namespace std;
class Node
{
	public:
		int data;
		Node *next;
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
	        void remove_duplicate();
};
void Linked_list::insert_node()
{
	Node*temp;
	Node*new_node=new Node;
	cout<<"Enter number:";
	cin>>new_node->data;
	new_node->next=NULL;
	if(head==NULL)
	{
	   head=temp=new_node;
	}
	else
	{
		temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=new_node;
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
			temp=temp->next;
		}
	}
}
void Linked_list::bubble_sort()
{
	Node *temp1=head;
	int count=0;
	while(temp1!=NULL)
	{
		count++;
		temp1=temp1->next;
	}
	for(int i=1;i<=count;i++)
	{
		temp1=head;
		while(temp1->next!=NULL)
		{
			if(temp1->data > temp1->next->data)
			{
				int a;
				a=temp1->data;
				temp1->data=temp1->next->data;
				temp1->next->data=a;
			}
			temp1=temp1->next;
		}
	}
}
void Linked_list::remove_duplicate()
{
	Node *temp=head;
	int flag=0;
	while(temp->next!=NULL)
	{
		if(temp->data==temp->next->data)
		{
			temp->next=temp->next->next;
		}
		else
		temp=temp->next;
	}
}



int main()
{
	Linked_list l1;
	int node;
	cout<<"Enter how many node: ";
	cin>>node;
	for(int i=0;i<node;i++)
	{
	l1.insert_node();	
	}
	l1.bubble_sort();
	l1.remove_duplicate();
	l1.display();
}
