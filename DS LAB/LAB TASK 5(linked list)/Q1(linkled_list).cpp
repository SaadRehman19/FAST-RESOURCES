#include<iostream>
using namespace std;
class Node
{
	public:
	int data;
	Node*next_add;
};
class Linked_list
{
	public:
		Node*head;
	public:
		Linked_list()
		{
			head=NULL;
		}
void insert_node()
{
	Node*temp;
	Node*new_node=new Node;
	cout<<"\nEnter the data in node";
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
void check(Node*head1,Node*head2)
{
	int flag=0;
	Node*p1=head1;
	Node*p2=head2;
	
	while((p1&&p2)!=NULL){
		if(p1->data!=p2->data)
		{
			p1=p1->next_add;
		}
		if(p1->data==p2->data)
		{
			flag++;
		p1=p1->next_add;
		p2=p2->next_add;
	
		}
	
	}
	if(flag==4){
		cout<<"\nSUBSEQUENCE MACTHED";
	}
	else{
		cout<<"SUBSE NOT MATCHED";
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
			cout<<temp->data<<" ";
			temp=temp->next_add;
		}
	}
}
};
int main()
{
	Linked_list l1,l2;
	for(int i=0;i<8;i++)
	{
	l1.insert_node();	
}
	cout<<"DATA IN 1ST ARRAY:\n";
	l1.display();
	
	for(int i=0;i<4;i++)
	{
	l2.insert_node();
	}
	cout<<"DATA IN 2ND ARRAY:\n";
	l2.display();
	l1.check(l1.head,l2.head);
	
}
