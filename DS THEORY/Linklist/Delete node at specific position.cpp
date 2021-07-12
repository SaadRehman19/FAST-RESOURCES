#include<iostream>
using namespace std;
int count=0;
class Node
{
	public:
	int data;
	Node*next_add;
};
class Linked_list
{
	private:
		Node*head;
	public:
		Linked_list()
		{
			head=NULL;
		}
		void insert_node();
		void display();
        void delete_at_beg();
        void delete_at_specific();
        void delete_at_end();
	
};
void Linked_list::delete_at_beg()
{
	Node *temp;
	temp=head;
	head=head->next_add;
	delete temp;
	cout<<endl<<"STARTING NODE HAS BEEN DELETED SUCCESFFULY\n";
}
void Linked_list::delete_at_end()
{
	Node *temp,*previous;
	temp=head;
	while(temp->next_add!=NULL)
	{
		previous=temp;
		temp=temp->next_add;
	}
	delete temp;
	previous->next_add=0;
	cout<<endl<<"NODE AT END HAS BEEN DELETED\n";
}
void Linked_list::delete_at_specific()
{
	int pos;int i=1;
	Node*temp,*q,*previous;
	temp=head;
	cout<<"\nenter the position to delete";
	cin>>pos;
	if(pos>count)
	{
		cout<<"INVALID POSITION";
	}
	if(pos==1)
	{
		delete_at_beg();
	}
	if(pos==count)
	{
		delete_at_end();
	}
	if(pos!=count)
	{
	while(i<pos-i)
	{
		temp=temp->next_add;
		i++;
		//flag=1;
	}
	q=temp->next_add;
	temp->next_add=q->next_add;	
}
}
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
	l.insert_node();
	l.display();
	l.delete_at_specific();
	l.display();
	
	
}
