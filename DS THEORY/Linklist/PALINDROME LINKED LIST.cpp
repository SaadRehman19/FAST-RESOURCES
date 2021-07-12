//Write a program to count the number of nodes in a given linked list.
#include<iostream>
class Node;
Node*head;
using namespace std;
int count=0;
class Node
{
	public:
	int data;
	Node *next_add;
};
class Linked_list
{public:
	Node*head;int flag;
	public:
		Linked_list()
		{
			head=NULL;
		}

void insert_node()
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
Linked_list copy(Linked_list &obj)
{
	obj.head=NULL;
	Node*temp=head;
	while(temp!=NULL)
	{
		obj.storedata(temp->data);
		temp=temp->next_add;
	}
	return obj;
}
void storedata(int b)
		{
			Node*temp;
			Node*new_node=new Node;
			new_node->data=b;
			new_node->next_add=NULL;
            if(head==NULL)
            {
            	temp=head=new_node;
			}
			else
			{
				temp->next_add=new_node;
				temp=new_node;
			}
			
		}
void display()
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
void reverse()
{
	Node*temp,*q=NULL,*r=NULL;
	temp=head;
	while(temp!=NULL)
	{
		r=q;
		q=temp;
		temp=temp->next_add;
		q->next_add=r;
	}
	head=q;
}
void compare(Node*head2)
{
	Node*temp1=head;
	Node*temp2=head2;
	while((temp1&&temp2)!=NULL)
	{
		if(temp1->data==temp2->data)
		{
			flag++;
		}
		else
		{
			flag--;
		}
		temp1=temp1->next_add;
		temp2=temp2->next_add;
	}
	if(flag==count)
	{
		cout<<"YES IT IS PALINDROME";
	}
	else
	{
		cout<<"SORRY !! NOT A PALINDROME";
	}
}
};
int main()
{
	Linked_list l,l2;
	int n;
	cout<<"Enter how many node you awant to enter:";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		l.insert_node();
	}
//	l.display();
    l2=l.copy(l2);
    l2.reverse();
   // l2.display();
    l.compare(l2.head);
}
