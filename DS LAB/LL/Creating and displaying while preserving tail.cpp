#include<iostream>
using namespace std;
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
		Node *head,*tail;
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
				//Node*temp;
				Node*new_node=new Node;
				cout<<"Enter the data you want to enter in the node";
				cin>>new_node->data;
				new_node->next=NULL;
				new_node->previous=NULL;
				if(head==NULL)
				{
					head=tail=new_node;
				}
				else
				{
					tail->next=new_node;
					new_node->previous=tail;
					tail=new_node;
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
	//Node*temp=head;
//	while(temp->next!=NULL)
//	{
//		temp=temp->next;
//	}
	tail->next=new_node;
	new_node->previous=tail;
	tail=new_node;
}
};
int main()
{
	DLL obj;
	obj.create();
	obj.display();
	obj.insert_at_beg();
	obj.display();
	obj.insert_at_last();
	obj.display();
}
