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
	public:
		Node*head;int flag=0;
	public:
		Linked_list()
		{
			head=NULL;
		}
		void insert_node();
		void display();
		void compare(Node *head1,Node*head2);
        Linked_list copy(Linked_list &obj)
        {
        	obj.head=NULL;
        	Node*temp=head;
        	if(head==NULL)
        	{
        		cout<<"SO SORRY TO COPY< LINKED LIST IS EMPTY";
			}
			else
			while(temp!=NULL)
			{
				obj.copylinklist(temp->data);
				temp=temp->next_add;
			}
			return obj;
		}
		void copylinklist(int b)
		{
			Node*temp;
			Node*new_node=new Node;
			new_node->data=b;
			new_node->next_add=NULL;
            if(head==NULL)
            {
            	temp=head=new_node;
			}
			else
			{
				temp->next_add=new_node;
				temp=new_node;
			}
		}
	
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
void Linked_list::compare(Node*head1,Node*head2)
{
	Node*temp1=head1;
	Node*temp2=head2;
	while((temp1&&temp2)!=NULL)
	{
		if(temp1->data==temp2->data)
		{
			flag++;
		}
		temp1=temp1->next_add;
		temp2=temp2->next_add;
	}
	if(flag==count)
	{
		cout<<"SAME LINKED LIST";
	}
	else
	{
		cout<<"ERROR";
	}
}
int main()
{
	Linked_list l1,l2;
	for(int i=0;i<5;i++)
	{
	l1.insert_node();	
	}
	l1.display();
	l2=l1.copy(l2);
	cout<<endl;
	l2.display();
	l1.compare(l1.head,l2.head);
	
	
	
	
	
}
