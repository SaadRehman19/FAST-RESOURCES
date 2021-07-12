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
void display1()
{
	while(tail!=NULL)
	{
		cout<<tail->data;
		tail=tail->previous;
	}
	
}
};
int main()
{
	DLL obj;
	obj.create();
	obj.display();
	cout<<"IN REVERSE\n";
	obj.display1();
}
