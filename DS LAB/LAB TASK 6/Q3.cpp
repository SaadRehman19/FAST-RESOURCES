#include<iostream>
using namespace std;
int count=0;
struct Node
{
	int data;
	Node* next;
	
};
class Linked_list
{
	private:
		Node*head,*tail;
		public:
			Linked_list()
			{
				head=NULL;
			}
			void create()
			{
				int choice=1;
				while(choice)
				{
				Node*temp;
				Node*new_node=new Node;
				cout<<"Enter data in new node";
				cin>>new_node->data;
				new_node->next=NULL;
				if(head==NULL)
				{
					head=tail=new_node;
				}
				else
				{
					tail->next=new_node;
					tail=new_node;
				}
				tail->next=head;
				count++;
				cout<<"WANT TO ENTER ANOTHER DATA ?(1/0)";
				cin>>choice;
			}
				
			}
			void display()
			{
				Node*temp;
				temp=head;
				
			while(temp->next!=head)
				{
					cout<<temp->data;
					temp=temp->next;
				}
				cout<<temp->data;
				
			}
	
};
int main()
{
	Linked_list l;
	l.create();
	cout<<"DATA IN CIRCULAR LINKED LIST IS:";
	l.display();
}
