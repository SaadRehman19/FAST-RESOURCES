//Write a program to count the number of nodes in a given linked list.
#include<iostream>
using namespace std;
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
	Node*prev;Node*prev1;
	public:
		Linked_list()
		{
			head=NULL;
		}
		void insert_node();
		void display();
		Node* search(int);
		Node* search1(int);
		void swap(Node*temp,Node*temp1);
		//Node*get();
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
	//count++;
}

Node* Linked_list::search(int a)
{
	
	Node*temp;
	temp=head;
	prev=NULL;
	while(temp!=NULL&&temp->data!=a)
	{
		prev=temp;
		temp=temp->next_add;
	}
	return temp;
}
Node* Linked_list::search1(int b)
{
	
	Node*temp1;
	temp1=head;
	prev1=NULL;
    while(temp1!=NULL&&temp1->data!=b)
    {
    	prev1=temp1;
    	temp1=temp1->next_add;
	}
	return temp1;
}
void Linked_list::swap(Node*temp,Node*temp1)
{
	Node*temp_var=temp1->next_add;
	temp1->next_add=temp->next_add;
	temp->next_add=temp_var;
	if(prev==NULL)   //if  node is at head
	{
		head=temp1;
		prev1->next_add=temp;
	}
	if((prev&&prev1)!=NULL)  ///means the nodes are internal
 {
 	     prev->next_add=temp1;
 	     prev1->next_add=temp;
 }
}
void Linked_list::display()
{
	Node*temp_pointer;
	if(head==NULL)
	{
		cout<<"\nLINKED LIST IS EMPTY";
	}
	else
	{
		temp_pointer=head;
		while(temp_pointer!=NULL)
		{
			cout<<temp_pointer->data;
			temp_pointer=temp_pointer->next_add;
		}
	}
}
int main()
{
	Linked_list l;
	int a,b;
	int n;cout<<"how many node";cin>>n;for(int i=0;i<n;i++)
	l.insert_node();
	l.display();
	cout<<"Enter which node you want to swap";
    cin>>a;
    cout<<"with?";
    cin>>b;
	Node *temp=l.search(a);
	Node*temp1=l.search1(b);
	cout<<temp->data;
	cout<<temp1->data;
//	Node *temp1=l.get();
	l.swap(temp,temp1);
	cout<<"AFTER SWAPPING :";
	l.display();
	
}
