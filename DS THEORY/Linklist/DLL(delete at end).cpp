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
		Node *head;Node*tail;
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
			//	Node*temp;
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

void delete_at_beg()
{
	Node*temp;
	temp=head;
	head=head->next;
	head->previous=NULL;
	delete temp;
}
void delete_at_end()
{
	//cout<<tail->data;
	Node*temp;
	temp=tail;
	tail->previous->next=NULL;
	tail=tail->previous;
	delete temp;
	//if(temp==NULL)
	//{
	//	cout<<"\nNODE HAS BEEN DELETED";
	//}
}
void delete_at_specific()
{
	int pos;
	cout<<"ENter the position you want to delete";
	cin>>pos;
	int i=1;
	Node*temp;
	Node *q;
	temp=head;
	if(pos<count)
	{
		while(i<pos-1)
		{
			temp=temp->next;
			i++;
		}
		q=temp->next;
		temp->next=q->next;
		q->next->previous=temp;
		delete q;
	}
}
};
int main()
{
	DLL obj;
	obj.create();
	obj.display();
	//obj.delete_at_end();
	obj.delete_at_specific();
	obj.display();
}
