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
			void insert_at_first()
			{
				Node*new_node=new Node;
			//	Node*temp=head;
				cout<<"Enter the data in new node";
				cin>>new_node->data;
				if(head==NULL)
				{
					cout<<"LINKED LIST IS EMPTY";
				}
				else
				{
					new_node->next=head;
					head=new_node;
				    tail->next=head;
			}
		}
		void insert_at_last()
		{
			Node*new_node=new Node;
			cout<<"Enter data to insert in last ";
			cin>>new_node->data;
			tail->next=new_node;
			tail->next->next=head;
		}
		void delete_at_beg()
		{
			Node*temp;
			temp=head;
			head=head->next;
			tail->next=head;
			delete temp;
		}
		void delete_at_last()
		{
			Node*temp;Node*previous;
			temp=previous=head;
			while(temp->next!=head)
			{
				previous=temp;
				temp=temp->next;
			}
			previous->next=head;
			delete temp;
		}
		void insert_at_specific()
		{
			int pos;int loc=1;int flag;
			Node*new_node=new Node;
			cout<<"Enter the position at which you want to enter";
			cin>>pos;
			cout<<"Enter the data";
			cin>>new_node->data;
			Node*temp=head;
			Node*previous=head;
			if(tail->next==NULL)
			{
				cout<<"LINKED LIST IS EMPTY";
			}
			else
			{
			
		
			if(loc==pos)
			{
					new_node->next=head;
					head=new_node;
				    tail->next=head;
				}

				if(loc<pos)
				{
					flag=0;
					previous=temp;
					temp=temp->next;
					loc++;
					flag=1;
				}
				if(flag==1)
				{
					new_node->next=temp;
					previous->next=new_node;
				}
			//	if(pos==count)insert_at_last();
				}
		}
		void reverse()
		{
			Node*temp;
			Node*r=NULL,*q=NULL;
			temp=head;
			while(temp!=NULL)
			{
				r=q;
				q=temp;
				temp=temp->next;
				q->next=r;
			}
			head=tail;
		    
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
	l.display();
//	l.insert_at_first();
//	l.display();
//	l.insert_at_last();
//	l.display(); 
//	cout<<"DELETE AT BEGIN";
//	l.delete_at_beg();
//	l.display();
//cout<<endl;
  //  cout<<"DELETE AT LAST";
	//l.delete_at_last();
	//l.display();
	l.insert_at_specific();
	l.display();
//cout<<"AFTER REVERSE";
//l.reverse();
//l//.display();
}
