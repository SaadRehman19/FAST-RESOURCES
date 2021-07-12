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
			void insert_node()
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
						cout<<temp->data<<endl;
						temp=temp->next;
					}
				}
			}
	void bubble_sort()
	{
		Node *temp=head,*q,*p;
		int count=0;
		while(temp!=NULL)
		{
			count++;
			temp=temp->next;
		}
		for(int i=1;i<=count;i++)
		{
			temp=head;
			while(temp->next->next!=NULL)
			{
				if(temp==head)
				{
					if(temp->data > temp->next->data)
					{
						//q=temp;
						head=temp->next;
						temp->next=temp->next->next;
						head->next=temp;
					}
				}
				
				if(temp->next->next->next==NULL)
				{
					
					if(temp->next->data > temp->next->next->data)
					{
						
						p=temp;
						q=temp->next;
						p->next=q->next;
						p->next->next=q;
						q->next=NULL;
					}
				}
				if(temp->next->data > temp->next->next->data)
					{
						p=temp;
						q=temp->next;
						p->next=q->next;
						q->next=p->next->next;
						p->next->next=q;
					}
				//}
				temp=temp->next;
			}
		}
	}
};


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
	l1.display();
}
