#include<iostream>
using namespace std;
int count=0;
class Node
{
	public:
		int data;
		Node* next;
		Node* previous;
};
class DLL
{
	private:
		Node *head;
		int choice=1;
		public:
			DLL()
			{
				head=NULL;
			}
			void create()
			{
				while(choice)
				{
					count++;
				Node*temp;
				Node*new_node=new Node;
				cout<<"Enter the data you want to enter in the node";
				cin>>new_node->data;
				new_node->next=NULL;
				new_node->previous=NULL;
				if(head==NULL)
				{
					head=temp=new_node;
				}
				else
				{
					temp->next=new_node;
					new_node->previous=temp;
					temp=new_node;
				}
				cout<<endl<<"DO YOU WANT TO CONTINUE(1/0)";
				cin>>choice;
			}
			
}
void display()
{
	Node*temp;
	temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data;
		temp=temp->next;
	}
}
void insert_at_beg()
{
	Node*new_node=new Node;
	cout<<"Enter data";
	cin>>new_node->data;
	new_node->previous=NULL;
	if(head==NULL)
	{
		cout<<"LINKDED LIST IS EMPTY";
	}
	new_node->next=head;
	head->previous=new_node;
	head=new_node;
	
}
void insert_at_last()
{
	Node*new_node=new Node;
	cout<<"Enter the data";
	cin>>new_node->data;
	new_node->next=NULL;
	new_node->previous=NULL;
	Node*temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=new_node;
	new_node->previous=temp;
}
void insert_at_specific()
{
	int pos;
	int i=1;
	Node*temp;
	cout<<"Enter the position you want to enter";
	cin>>pos;
	if(pos<1&&pos>count)
	{
		cout<<"invalid position";
	}
	if(pos==1)
	{
		insert_at_beg();
	}
	
	if(pos<count)
	
	{
		temp=head;
		while(i<pos)
		{
			temp=temp->next;
			i++;
		}
		Node*new_node=new Node;
		cout<<"Enter the data";
		cin>>new_node->data;
		new_node->previous=temp;
		new_node->next=temp->next;
		temp->next=new_node;
		new_node->next->previous=new_node;
	}
	if(pos==count)
	{
		insert_at_last();
}
}

};
int main()
{
	DLL obj;
	obj.create();
	obj.display();
//	obj.insert_at_beg();
//	obj.display();
//	obj.insert_at_last();
//	obj.display(); 
	obj.insert_at_specific();
	obj.display();
}
